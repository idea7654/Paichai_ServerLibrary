// GameServerByLibraru.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <iostream>
#include <IOCP.h>
#include <flatbuffers/flatbuffers.h>
#include <flatbuffers/TcpProtocol_generated.h>
#include <vector>
#include <random>

using namespace TcpProtocol::Define;

const int Total_Card_Num = 40;
const int Player_Num = 4;

class IOCP_Contents : public IOCompletionPort
{
	virtual void Receive(unsigned char pPacket[], stSOCKETINFO* pSocket) override;
	virtual void SendMsg(unsigned char* sendMsg, stSOCKETINFO* pSocket, int packetSize) override;
};

struct Card
{
	std::string		shape;
	int				number;
};

class Player
{
public:
    std::vector<Card*>   mDeck;
    stSOCKETINFO*       mSocketInfo;
    int                 mPlayerNum = 1;
    int                 DLast = 0; //이거 뭐임
    int                 DFirst = -1;

    void                GetCard(Card *card, std::vector<Card*> Deck);
};

std::vector<Card*> Deck;
std::vector<Card*> ShowingCardVec;
std::vector<Card*> HandedCardVec;
static std::vector<Player*> PlayerSession;

void DeckCreated(std::vector<Card*> &Deck)
{
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            std::string shape = "";
            switch (i)
            {
            case 0:
                shape = "Strawberry";
                break;
            case 1:
                shape = "Lime";
                break;
            case 2:
                shape = "Banana";
                break;
            case 3:
                shape = "Plum";
                break;
            }
            Deck[(i * 5) + j]->shape = shape;
            Deck[(i * 5) + j]->number = j + 1;
        }
    }
    for (int i = 4; i < 8; i++) {
        for (int j = 0; j < 5; j++) {
            std::string shape = "";
            switch (i)
            {
            case 4:
                shape = "Strawberry";
                break;
            case 5:
                shape = "Lime";
                break;
            case 6:
                shape = "Banana";
                break;
            case 7:
                shape = "Plum";
                break;
            }
            Deck[(i * 5) + j]->shape = shape;
            Deck[(i * 5) + j]->number = j + 1;
        }
    }
}

void DeckShuffle(std::vector<Card*>& Deck)
{
    int random1, random2;
    Card *temp;

    for (int i = 0; i < Deck.size(); ++i)
    {
        //random1 = Random.Range(0, Deck.Length);
        //random2 = Random.Range(0, Deck.Length);
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> dis(0, Deck.size() - 1);
        random1 = dis(gen);
        random2 = dis(gen);

        temp = Deck[random1];
        Deck[random1] = Deck[random2];
        Deck[random2] = temp;
    }
}

void CardDistribution(std::vector<Card*> &Deck, std::vector<Player*>& Players)
{
    for (int i = 0; i < Player_Num; i++) {
        for (int j = 0; j < Deck.size() / Player_Num; j++) {
            //if(i == 0)
                Players[i]->GetCard(Deck[(i * 5) + j], Deck);
        }
        //Players[i].();
        if(i == 0)
            Players[i]->DFirst++;
    }
}

void Player::GetCard(Card *card, std::vector<Card*> Deck)
{
    //Deck[DLast % Total_Card_Num] = card;
    mDeck.push_back(card);
    DLast++;
}

int main()
{
    IOCP_Contents* server = new IOCP_Contents();

    for (int i = 0; i < Total_Card_Num; i++)
    {
        Card* card = new Card();
        Deck.push_back(card);
    }

	DeckCreated(Deck);
    DeckShuffle(Deck);

	server->Initialize();
	server->StartServer();
}

void IOCP_Contents::Receive(unsigned char pPacket[], stSOCKETINFO* pSocket)
{
	flatbuffers::FlatBufferBuilder builder;

	auto message = GetMessage(pPacket);
    switch (message->packet_type())
    {
    case MESSAGE_ID::MESSAGE_ID_C2S_TEST:
    {
        std::cout << "Packet Come!" << std::endl;
        break;
    }
    case MESSAGE_ID::MESSAGE_ID_C2S_START_GAME:
    {
        Player* newPlayer = new Player();
        newPlayer->mSocketInfo = pSocket;
        for (auto& i : PlayerSession) //중복방지
        {
            if (i->mSocketInfo->socket == pSocket->socket)
                break;
        }

        int LastPlayerNum = PlayerSession.size() == 0 ? 0 : PlayerSession[PlayerSession.size() - 1]->mPlayerNum;
        newPlayer->mPlayerNum = LastPlayerNum + 1;
        PlayerSession.push_back(newPlayer);

        if (PlayerSession.size() >= 4)
        {
            CardDistribution(Deck, PlayerSession);
            for (auto& i : PlayerSession)
            {
                //패킷 만들어서 보내기! -> 게임 시작
                flatbuffers::FlatBufferBuilder builder;

                std::vector<flatbuffers::Offset<CARD>> deck_vector;

                for (auto& j : i->mDeck)
                {
                    auto shape = builder.CreateString(j->shape);
                    auto makeTable = CreateCARD(builder, shape, j->number);
                    deck_vector.push_back(makeTable);
                    //std::cout << j.shape << std::endl;
                }

                auto datas = builder.CreateVector(deck_vector);
                auto makePacket = CreateS2C_START_GAME(builder, i->mPlayerNum, datas);
                auto packet = CreateMessage(builder, MESSAGE_ID::MESSAGE_ID_S2C_START_GAME, makePacket.Union());

                builder.Finish(packet);

                auto data = builder.GetBufferPointer();
                auto length = builder.GetSize();

                builder.Clear();

                SendMsg(data, i->mSocketInfo, length);
                
                //std::cout << length << std::endl;
            }
        }
        break;
    }
    case MESSAGE_ID::MESSAGE_ID_C2S_HANDOUT_CARD:
    {
        //auto Hand_Out_Card = 
        std::cout << "Packet Come!" << std::endl;
        auto RecvData = static_cast<const C2S_HANDOUT_CARD*>(message->packet());
        auto PlayerNum = RecvData->num();
        for (auto& i : PlayerSession)
        {
            if (i->mPlayerNum == PlayerNum)
            {
                auto HandOutCard = i->mDeck.back();
                i->mDeck.pop_back();

                if (ShowingCardVec.size() > 3)
                {
                    ShowingCardVec.erase(ShowingCardVec.begin());
                }
                ShowingCardVec.push_back(HandOutCard);
                HandedCardVec.push_back(HandOutCard);

                flatbuffers::FlatBufferBuilder builder;

                auto CardName = builder.CreateString(HandOutCard->shape);
                auto makeCard = CreateCARD(builder, CardName, HandOutCard->number);
                auto makePacket = CreateS2C_HANDOUT_CARD(builder, PlayerNum, makeCard);
                auto packet = CreateMessage(builder, MESSAGE_ID::MESSAGE_ID_S2C_HANDOUT_CARD, makePacket.Union());

                builder.Finish(packet);

                auto data = builder.GetBufferPointer();
                auto length = builder.GetSize();

                builder.Clear();

                for (auto& j : PlayerSession)
                {
                    SendMsg(data, j->mSocketInfo, length);
                }
            }
        }
        break;
    }
    case MESSAGE_ID::MESSAGE_ID_C2S_RING_BELL:
    {
        std::cout << "Ring!" << std::endl;
        int plum = 0, strawberry = 0, banana = 0, lime = 0;
        for (auto& i : ShowingCardVec)
        {
            if (i->shape == "Plum")                  plum += i->number;
            else if (i->shape == "Strawberry")       strawberry += i->number;
            else if (i->shape == "Banana")           banana += i->number;
            else
            {
                lime += i->number;
            }
        }

        if ((plum == 5) || (strawberry == 5)
            || (banana == 5) || (lime == 5))
        {
            //win..
            auto RecvData = static_cast<const C2S_RING_BELL*>(message->packet());
            auto PlayerNum = RecvData->playernum();
            for (auto& i : PlayerSession)
            {
                if (i->mPlayerNum == PlayerNum)
                {
                    i->mDeck.insert(i->mDeck.end(), HandedCardVec.begin(), HandedCardVec.end());
                }
                HandedCardVec.clear();
            }

            flatbuffers::FlatBufferBuilder builder;

            auto makePacket = CreateS2C_WIN(builder, PlayerNum, PlayerSession[0]->mDeck.size(), 
                PlayerSession[1]->mDeck.size(), PlayerSession[2]->mDeck.size(), PlayerSession[3]->mDeck.size());
            auto packet = CreateMessage(builder, MESSAGE_ID::MESSAGE_ID_S2C_WIN, makePacket.Union());

            builder.Finish(packet);

            auto data = builder.GetBufferPointer();
            auto length = builder.GetSize();

            builder.Clear();

            for (auto& j : PlayerSession)
            {
                SendMsg(data, j->mSocketInfo, length);
            }
        }
        else
        {
            //페널티 줄 거 넣어보세요!
        }
        break;
    }
	default:
		break;
	}
}

void IOCP_Contents::SendMsg(unsigned char *sendMsg, stSOCKETINFO *pSocket, int packetSize)
{
    /*flatbuffers::FlatBufferBuilder builder;

	auto SampleText = builder.CreateString("hi");
	auto makePacket = CreateS2C_TEST(builder, SampleText);
	auto packet = CreateMessage(builder, MESSAGE_ID::MESSAGE_ID_S2C_TEST, makePacket.Union());

	builder.Finish(packet);

	auto data = builder.GetBufferPointer();
	auto length = builder.GetSize();

	builder.Clear();*/

	char sendBuffer[MAX_BUFFER];
	memset(sendBuffer, 0, sizeof(sendBuffer));

    memcpy(sendBuffer, &packetSize, sizeof(int));
	memcpy(sendBuffer + sizeof(int), sendMsg, packetSize + 1);
    //memcpy(sendBuffer, &sendMsg, packetSize);

	pSocket->dataBuf.buf = sendBuffer;
	//pSocket->dataBuf.len = sizeof(sendBuffer);
    pSocket->dataBuf.len = packetSize + sizeof(int);
	Send(pSocket);
}
