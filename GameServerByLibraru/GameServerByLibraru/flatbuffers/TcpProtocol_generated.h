// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TCPPROTOCOL_TCPPROTOCOL_DEFINE_H_
#define FLATBUFFERS_GENERATED_TCPPROTOCOL_TCPPROTOCOL_DEFINE_H_

#include "flatbuffers/flatbuffers.h"

namespace TcpProtocol {
namespace Define {

struct Vec3;

struct Message;
struct MessageBuilder;

struct S2C_TEST;
struct S2C_TESTBuilder;

struct C2S_TEST;
struct C2S_TESTBuilder;

struct C2S_START_GAME;
struct C2S_START_GAMEBuilder;

struct S2C_START_GAME;
struct S2C_START_GAMEBuilder;

struct CARD;
struct CARDBuilder;

struct C2S_HANDOUT_CARD;
struct C2S_HANDOUT_CARDBuilder;

struct C2S_RING_BELL;
struct C2S_RING_BELLBuilder;

struct S2C_HANDOUT_CARD;
struct S2C_HANDOUT_CARDBuilder;

struct S2C_RING_BELL;
struct S2C_RING_BELLBuilder;

struct S2C_SOMEONE_DIE;
struct S2C_SOMEONE_DIEBuilder;

struct S2C_WIN;
struct S2C_WINBuilder;

struct S2C_FAIL;
struct S2C_FAILBuilder;

enum MESSAGE_ID : uint8_t {
  MESSAGE_ID_NONE = 0,
  MESSAGE_ID_S2C_TEST = 1,
  MESSAGE_ID_C2S_TEST = 2,
  MESSAGE_ID_C2S_START_GAME = 3,
  MESSAGE_ID_S2C_START_GAME = 4,
  MESSAGE_ID_C2S_HANDOUT_CARD = 5,
  MESSAGE_ID_C2S_RING_BELL = 6,
  MESSAGE_ID_S2C_HANDOUT_CARD = 7,
  MESSAGE_ID_S2C_RING_BELL = 8,
  MESSAGE_ID_S2C_SOMEONE_DIE = 9,
  MESSAGE_ID_S2C_WIN = 10,
  MESSAGE_ID_S2C_FAIL = 11,
  MESSAGE_ID_MIN = MESSAGE_ID_NONE,
  MESSAGE_ID_MAX = MESSAGE_ID_S2C_FAIL
};

inline const MESSAGE_ID (&EnumValuesMESSAGE_ID())[12] {
  static const MESSAGE_ID values[] = {
    MESSAGE_ID_NONE,
    MESSAGE_ID_S2C_TEST,
    MESSAGE_ID_C2S_TEST,
    MESSAGE_ID_C2S_START_GAME,
    MESSAGE_ID_S2C_START_GAME,
    MESSAGE_ID_C2S_HANDOUT_CARD,
    MESSAGE_ID_C2S_RING_BELL,
    MESSAGE_ID_S2C_HANDOUT_CARD,
    MESSAGE_ID_S2C_RING_BELL,
    MESSAGE_ID_S2C_SOMEONE_DIE,
    MESSAGE_ID_S2C_WIN,
    MESSAGE_ID_S2C_FAIL
  };
  return values;
}

inline const char * const *EnumNamesMESSAGE_ID() {
  static const char * const names[13] = {
    "NONE",
    "S2C_TEST",
    "C2S_TEST",
    "C2S_START_GAME",
    "S2C_START_GAME",
    "C2S_HANDOUT_CARD",
    "C2S_RING_BELL",
    "S2C_HANDOUT_CARD",
    "S2C_RING_BELL",
    "S2C_SOMEONE_DIE",
    "S2C_WIN",
    "S2C_FAIL",
    nullptr
  };
  return names;
}

inline const char *EnumNameMESSAGE_ID(MESSAGE_ID e) {
  if (flatbuffers::IsOutRange(e, MESSAGE_ID_NONE, MESSAGE_ID_S2C_FAIL)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesMESSAGE_ID()[index];
}

template<typename T> struct MESSAGE_IDTraits {
  static const MESSAGE_ID enum_value = MESSAGE_ID_NONE;
};

template<> struct MESSAGE_IDTraits<TcpProtocol::Define::S2C_TEST> {
  static const MESSAGE_ID enum_value = MESSAGE_ID_S2C_TEST;
};

template<> struct MESSAGE_IDTraits<TcpProtocol::Define::C2S_TEST> {
  static const MESSAGE_ID enum_value = MESSAGE_ID_C2S_TEST;
};

template<> struct MESSAGE_IDTraits<TcpProtocol::Define::C2S_START_GAME> {
  static const MESSAGE_ID enum_value = MESSAGE_ID_C2S_START_GAME;
};

template<> struct MESSAGE_IDTraits<TcpProtocol::Define::S2C_START_GAME> {
  static const MESSAGE_ID enum_value = MESSAGE_ID_S2C_START_GAME;
};

template<> struct MESSAGE_IDTraits<TcpProtocol::Define::C2S_HANDOUT_CARD> {
  static const MESSAGE_ID enum_value = MESSAGE_ID_C2S_HANDOUT_CARD;
};

template<> struct MESSAGE_IDTraits<TcpProtocol::Define::C2S_RING_BELL> {
  static const MESSAGE_ID enum_value = MESSAGE_ID_C2S_RING_BELL;
};

template<> struct MESSAGE_IDTraits<TcpProtocol::Define::S2C_HANDOUT_CARD> {
  static const MESSAGE_ID enum_value = MESSAGE_ID_S2C_HANDOUT_CARD;
};

template<> struct MESSAGE_IDTraits<TcpProtocol::Define::S2C_RING_BELL> {
  static const MESSAGE_ID enum_value = MESSAGE_ID_S2C_RING_BELL;
};

template<> struct MESSAGE_IDTraits<TcpProtocol::Define::S2C_SOMEONE_DIE> {
  static const MESSAGE_ID enum_value = MESSAGE_ID_S2C_SOMEONE_DIE;
};

template<> struct MESSAGE_IDTraits<TcpProtocol::Define::S2C_WIN> {
  static const MESSAGE_ID enum_value = MESSAGE_ID_S2C_WIN;
};

template<> struct MESSAGE_IDTraits<TcpProtocol::Define::S2C_FAIL> {
  static const MESSAGE_ID enum_value = MESSAGE_ID_S2C_FAIL;
};

bool VerifyMESSAGE_ID(flatbuffers::Verifier &verifier, const void *obj, MESSAGE_ID type);
bool VerifyMESSAGE_IDVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) Vec3 FLATBUFFERS_FINAL_CLASS {
 private:
  float x_;
  float y_;
  float z_;

 public:
  Vec3()
      : x_(0),
        y_(0),
        z_(0) {
  }
  Vec3(float _x, float _y, float _z)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        z_(flatbuffers::EndianScalar(_z)) {
  }
  float x() const {
    return flatbuffers::EndianScalar(x_);
  }
  float y() const {
    return flatbuffers::EndianScalar(y_);
  }
  float z() const {
    return flatbuffers::EndianScalar(z_);
  }
};
FLATBUFFERS_STRUCT_END(Vec3, 12);

struct Message FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef MessageBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PACKET_TYPE = 4,
    VT_PACKET = 6
  };
  TcpProtocol::Define::MESSAGE_ID packet_type() const {
    return static_cast<TcpProtocol::Define::MESSAGE_ID>(GetField<uint8_t>(VT_PACKET_TYPE, 0));
  }
  const void *packet() const {
    return GetPointer<const void *>(VT_PACKET);
  }
  template<typename T> const T *packet_as() const;
  const TcpProtocol::Define::S2C_TEST *packet_as_S2C_TEST() const {
    return packet_type() == TcpProtocol::Define::MESSAGE_ID_S2C_TEST ? static_cast<const TcpProtocol::Define::S2C_TEST *>(packet()) : nullptr;
  }
  const TcpProtocol::Define::C2S_TEST *packet_as_C2S_TEST() const {
    return packet_type() == TcpProtocol::Define::MESSAGE_ID_C2S_TEST ? static_cast<const TcpProtocol::Define::C2S_TEST *>(packet()) : nullptr;
  }
  const TcpProtocol::Define::C2S_START_GAME *packet_as_C2S_START_GAME() const {
    return packet_type() == TcpProtocol::Define::MESSAGE_ID_C2S_START_GAME ? static_cast<const TcpProtocol::Define::C2S_START_GAME *>(packet()) : nullptr;
  }
  const TcpProtocol::Define::S2C_START_GAME *packet_as_S2C_START_GAME() const {
    return packet_type() == TcpProtocol::Define::MESSAGE_ID_S2C_START_GAME ? static_cast<const TcpProtocol::Define::S2C_START_GAME *>(packet()) : nullptr;
  }
  const TcpProtocol::Define::C2S_HANDOUT_CARD *packet_as_C2S_HANDOUT_CARD() const {
    return packet_type() == TcpProtocol::Define::MESSAGE_ID_C2S_HANDOUT_CARD ? static_cast<const TcpProtocol::Define::C2S_HANDOUT_CARD *>(packet()) : nullptr;
  }
  const TcpProtocol::Define::C2S_RING_BELL *packet_as_C2S_RING_BELL() const {
    return packet_type() == TcpProtocol::Define::MESSAGE_ID_C2S_RING_BELL ? static_cast<const TcpProtocol::Define::C2S_RING_BELL *>(packet()) : nullptr;
  }
  const TcpProtocol::Define::S2C_HANDOUT_CARD *packet_as_S2C_HANDOUT_CARD() const {
    return packet_type() == TcpProtocol::Define::MESSAGE_ID_S2C_HANDOUT_CARD ? static_cast<const TcpProtocol::Define::S2C_HANDOUT_CARD *>(packet()) : nullptr;
  }
  const TcpProtocol::Define::S2C_RING_BELL *packet_as_S2C_RING_BELL() const {
    return packet_type() == TcpProtocol::Define::MESSAGE_ID_S2C_RING_BELL ? static_cast<const TcpProtocol::Define::S2C_RING_BELL *>(packet()) : nullptr;
  }
  const TcpProtocol::Define::S2C_SOMEONE_DIE *packet_as_S2C_SOMEONE_DIE() const {
    return packet_type() == TcpProtocol::Define::MESSAGE_ID_S2C_SOMEONE_DIE ? static_cast<const TcpProtocol::Define::S2C_SOMEONE_DIE *>(packet()) : nullptr;
  }
  const TcpProtocol::Define::S2C_WIN *packet_as_S2C_WIN() const {
    return packet_type() == TcpProtocol::Define::MESSAGE_ID_S2C_WIN ? static_cast<const TcpProtocol::Define::S2C_WIN *>(packet()) : nullptr;
  }
  const TcpProtocol::Define::S2C_FAIL *packet_as_S2C_FAIL() const {
    return packet_type() == TcpProtocol::Define::MESSAGE_ID_S2C_FAIL ? static_cast<const TcpProtocol::Define::S2C_FAIL *>(packet()) : nullptr;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_PACKET_TYPE) &&
           VerifyOffset(verifier, VT_PACKET) &&
           VerifyMESSAGE_ID(verifier, packet(), packet_type()) &&
           verifier.EndTable();
  }
};

template<> inline const TcpProtocol::Define::S2C_TEST *Message::packet_as<TcpProtocol::Define::S2C_TEST>() const {
  return packet_as_S2C_TEST();
}

template<> inline const TcpProtocol::Define::C2S_TEST *Message::packet_as<TcpProtocol::Define::C2S_TEST>() const {
  return packet_as_C2S_TEST();
}

template<> inline const TcpProtocol::Define::C2S_START_GAME *Message::packet_as<TcpProtocol::Define::C2S_START_GAME>() const {
  return packet_as_C2S_START_GAME();
}

template<> inline const TcpProtocol::Define::S2C_START_GAME *Message::packet_as<TcpProtocol::Define::S2C_START_GAME>() const {
  return packet_as_S2C_START_GAME();
}

template<> inline const TcpProtocol::Define::C2S_HANDOUT_CARD *Message::packet_as<TcpProtocol::Define::C2S_HANDOUT_CARD>() const {
  return packet_as_C2S_HANDOUT_CARD();
}

template<> inline const TcpProtocol::Define::C2S_RING_BELL *Message::packet_as<TcpProtocol::Define::C2S_RING_BELL>() const {
  return packet_as_C2S_RING_BELL();
}

template<> inline const TcpProtocol::Define::S2C_HANDOUT_CARD *Message::packet_as<TcpProtocol::Define::S2C_HANDOUT_CARD>() const {
  return packet_as_S2C_HANDOUT_CARD();
}

template<> inline const TcpProtocol::Define::S2C_RING_BELL *Message::packet_as<TcpProtocol::Define::S2C_RING_BELL>() const {
  return packet_as_S2C_RING_BELL();
}

template<> inline const TcpProtocol::Define::S2C_SOMEONE_DIE *Message::packet_as<TcpProtocol::Define::S2C_SOMEONE_DIE>() const {
  return packet_as_S2C_SOMEONE_DIE();
}

template<> inline const TcpProtocol::Define::S2C_WIN *Message::packet_as<TcpProtocol::Define::S2C_WIN>() const {
  return packet_as_S2C_WIN();
}

template<> inline const TcpProtocol::Define::S2C_FAIL *Message::packet_as<TcpProtocol::Define::S2C_FAIL>() const {
  return packet_as_S2C_FAIL();
}

struct MessageBuilder {
  typedef Message Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_packet_type(TcpProtocol::Define::MESSAGE_ID packet_type) {
    fbb_.AddElement<uint8_t>(Message::VT_PACKET_TYPE, static_cast<uint8_t>(packet_type), 0);
  }
  void add_packet(flatbuffers::Offset<void> packet) {
    fbb_.AddOffset(Message::VT_PACKET, packet);
  }
  explicit MessageBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Message> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Message>(end);
    return o;
  }
};

inline flatbuffers::Offset<Message> CreateMessage(
    flatbuffers::FlatBufferBuilder &_fbb,
    TcpProtocol::Define::MESSAGE_ID packet_type = TcpProtocol::Define::MESSAGE_ID_NONE,
    flatbuffers::Offset<void> packet = 0) {
  MessageBuilder builder_(_fbb);
  builder_.add_packet(packet);
  builder_.add_packet_type(packet_type);
  return builder_.Finish();
}

struct S2C_TEST FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef S2C_TESTBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TEST = 4
  };
  const flatbuffers::String *test() const {
    return GetPointer<const flatbuffers::String *>(VT_TEST);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_TEST) &&
           verifier.VerifyString(test()) &&
           verifier.EndTable();
  }
};

struct S2C_TESTBuilder {
  typedef S2C_TEST Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_test(flatbuffers::Offset<flatbuffers::String> test) {
    fbb_.AddOffset(S2C_TEST::VT_TEST, test);
  }
  explicit S2C_TESTBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<S2C_TEST> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<S2C_TEST>(end);
    return o;
  }
};

inline flatbuffers::Offset<S2C_TEST> CreateS2C_TEST(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> test = 0) {
  S2C_TESTBuilder builder_(_fbb);
  builder_.add_test(test);
  return builder_.Finish();
}

inline flatbuffers::Offset<S2C_TEST> CreateS2C_TESTDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *test = nullptr) {
  auto test__ = test ? _fbb.CreateString(test) : 0;
  return TcpProtocol::Define::CreateS2C_TEST(
      _fbb,
      test__);
}

struct C2S_TEST FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef C2S_TESTBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TEST = 4
  };
  int32_t test() const {
    return GetField<int32_t>(VT_TEST, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_TEST) &&
           verifier.EndTable();
  }
};

struct C2S_TESTBuilder {
  typedef C2S_TEST Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_test(int32_t test) {
    fbb_.AddElement<int32_t>(C2S_TEST::VT_TEST, test, 0);
  }
  explicit C2S_TESTBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<C2S_TEST> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<C2S_TEST>(end);
    return o;
  }
};

inline flatbuffers::Offset<C2S_TEST> CreateC2S_TEST(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t test = 0) {
  C2S_TESTBuilder builder_(_fbb);
  builder_.add_test(test);
  return builder_.Finish();
}

struct C2S_START_GAME FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef C2S_START_GAMEBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_MESSAGE = 4
  };
  const flatbuffers::String *message() const {
    return GetPointer<const flatbuffers::String *>(VT_MESSAGE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_MESSAGE) &&
           verifier.VerifyString(message()) &&
           verifier.EndTable();
  }
};

struct C2S_START_GAMEBuilder {
  typedef C2S_START_GAME Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_message(flatbuffers::Offset<flatbuffers::String> message) {
    fbb_.AddOffset(C2S_START_GAME::VT_MESSAGE, message);
  }
  explicit C2S_START_GAMEBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<C2S_START_GAME> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<C2S_START_GAME>(end);
    return o;
  }
};

inline flatbuffers::Offset<C2S_START_GAME> CreateC2S_START_GAME(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> message = 0) {
  C2S_START_GAMEBuilder builder_(_fbb);
  builder_.add_message(message);
  return builder_.Finish();
}

inline flatbuffers::Offset<C2S_START_GAME> CreateC2S_START_GAMEDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *message = nullptr) {
  auto message__ = message ? _fbb.CreateString(message) : 0;
  return TcpProtocol::Define::CreateC2S_START_GAME(
      _fbb,
      message__);
}

struct S2C_START_GAME FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef S2C_START_GAMEBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_MYNUM = 4,
    VT_MYDECK = 6
  };
  int32_t mynum() const {
    return GetField<int32_t>(VT_MYNUM, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<TcpProtocol::Define::CARD>> *mydeck() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<TcpProtocol::Define::CARD>> *>(VT_MYDECK);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_MYNUM) &&
           VerifyOffset(verifier, VT_MYDECK) &&
           verifier.VerifyVector(mydeck()) &&
           verifier.VerifyVectorOfTables(mydeck()) &&
           verifier.EndTable();
  }
};

struct S2C_START_GAMEBuilder {
  typedef S2C_START_GAME Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_mynum(int32_t mynum) {
    fbb_.AddElement<int32_t>(S2C_START_GAME::VT_MYNUM, mynum, 0);
  }
  void add_mydeck(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<TcpProtocol::Define::CARD>>> mydeck) {
    fbb_.AddOffset(S2C_START_GAME::VT_MYDECK, mydeck);
  }
  explicit S2C_START_GAMEBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<S2C_START_GAME> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<S2C_START_GAME>(end);
    return o;
  }
};

inline flatbuffers::Offset<S2C_START_GAME> CreateS2C_START_GAME(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t mynum = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<TcpProtocol::Define::CARD>>> mydeck = 0) {
  S2C_START_GAMEBuilder builder_(_fbb);
  builder_.add_mydeck(mydeck);
  builder_.add_mynum(mynum);
  return builder_.Finish();
}

inline flatbuffers::Offset<S2C_START_GAME> CreateS2C_START_GAMEDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t mynum = 0,
    const std::vector<flatbuffers::Offset<TcpProtocol::Define::CARD>> *mydeck = nullptr) {
  auto mydeck__ = mydeck ? _fbb.CreateVector<flatbuffers::Offset<TcpProtocol::Define::CARD>>(*mydeck) : 0;
  return TcpProtocol::Define::CreateS2C_START_GAME(
      _fbb,
      mynum,
      mydeck__);
}

struct CARD FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef CARDBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SHAPE = 4,
    VT_NUM = 6
  };
  const flatbuffers::String *shape() const {
    return GetPointer<const flatbuffers::String *>(VT_SHAPE);
  }
  int32_t num() const {
    return GetField<int32_t>(VT_NUM, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_SHAPE) &&
           verifier.VerifyString(shape()) &&
           VerifyField<int32_t>(verifier, VT_NUM) &&
           verifier.EndTable();
  }
};

struct CARDBuilder {
  typedef CARD Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_shape(flatbuffers::Offset<flatbuffers::String> shape) {
    fbb_.AddOffset(CARD::VT_SHAPE, shape);
  }
  void add_num(int32_t num) {
    fbb_.AddElement<int32_t>(CARD::VT_NUM, num, 0);
  }
  explicit CARDBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<CARD> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<CARD>(end);
    return o;
  }
};

inline flatbuffers::Offset<CARD> CreateCARD(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> shape = 0,
    int32_t num = 0) {
  CARDBuilder builder_(_fbb);
  builder_.add_num(num);
  builder_.add_shape(shape);
  return builder_.Finish();
}

inline flatbuffers::Offset<CARD> CreateCARDDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *shape = nullptr,
    int32_t num = 0) {
  auto shape__ = shape ? _fbb.CreateString(shape) : 0;
  return TcpProtocol::Define::CreateCARD(
      _fbb,
      shape__,
      num);
}

struct C2S_HANDOUT_CARD FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef C2S_HANDOUT_CARDBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NUM = 4
  };
  int32_t num() const {
    return GetField<int32_t>(VT_NUM, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_NUM) &&
           verifier.EndTable();
  }
};

struct C2S_HANDOUT_CARDBuilder {
  typedef C2S_HANDOUT_CARD Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_num(int32_t num) {
    fbb_.AddElement<int32_t>(C2S_HANDOUT_CARD::VT_NUM, num, 0);
  }
  explicit C2S_HANDOUT_CARDBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<C2S_HANDOUT_CARD> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<C2S_HANDOUT_CARD>(end);
    return o;
  }
};

inline flatbuffers::Offset<C2S_HANDOUT_CARD> CreateC2S_HANDOUT_CARD(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t num = 0) {
  C2S_HANDOUT_CARDBuilder builder_(_fbb);
  builder_.add_num(num);
  return builder_.Finish();
}

struct C2S_RING_BELL FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef C2S_RING_BELLBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PLAYERNUM = 4
  };
  int32_t playernum() const {
    return GetField<int32_t>(VT_PLAYERNUM, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_PLAYERNUM) &&
           verifier.EndTable();
  }
};

struct C2S_RING_BELLBuilder {
  typedef C2S_RING_BELL Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_playernum(int32_t playernum) {
    fbb_.AddElement<int32_t>(C2S_RING_BELL::VT_PLAYERNUM, playernum, 0);
  }
  explicit C2S_RING_BELLBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<C2S_RING_BELL> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<C2S_RING_BELL>(end);
    return o;
  }
};

inline flatbuffers::Offset<C2S_RING_BELL> CreateC2S_RING_BELL(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t playernum = 0) {
  C2S_RING_BELLBuilder builder_(_fbb);
  builder_.add_playernum(playernum);
  return builder_.Finish();
}

struct S2C_HANDOUT_CARD FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef S2C_HANDOUT_CARDBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NUM = 4,
    VT_CARD = 6
  };
  int32_t num() const {
    return GetField<int32_t>(VT_NUM, 0);
  }
  const TcpProtocol::Define::CARD *card() const {
    return GetPointer<const TcpProtocol::Define::CARD *>(VT_CARD);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_NUM) &&
           VerifyOffset(verifier, VT_CARD) &&
           verifier.VerifyTable(card()) &&
           verifier.EndTable();
  }
};

struct S2C_HANDOUT_CARDBuilder {
  typedef S2C_HANDOUT_CARD Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_num(int32_t num) {
    fbb_.AddElement<int32_t>(S2C_HANDOUT_CARD::VT_NUM, num, 0);
  }
  void add_card(flatbuffers::Offset<TcpProtocol::Define::CARD> card) {
    fbb_.AddOffset(S2C_HANDOUT_CARD::VT_CARD, card);
  }
  explicit S2C_HANDOUT_CARDBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<S2C_HANDOUT_CARD> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<S2C_HANDOUT_CARD>(end);
    return o;
  }
};

inline flatbuffers::Offset<S2C_HANDOUT_CARD> CreateS2C_HANDOUT_CARD(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t num = 0,
    flatbuffers::Offset<TcpProtocol::Define::CARD> card = 0) {
  S2C_HANDOUT_CARDBuilder builder_(_fbb);
  builder_.add_card(card);
  builder_.add_num(num);
  return builder_.Finish();
}

struct S2C_RING_BELL FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef S2C_RING_BELLBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PLAYERNUM = 4
  };
  int32_t playernum() const {
    return GetField<int32_t>(VT_PLAYERNUM, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_PLAYERNUM) &&
           verifier.EndTable();
  }
};

struct S2C_RING_BELLBuilder {
  typedef S2C_RING_BELL Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_playernum(int32_t playernum) {
    fbb_.AddElement<int32_t>(S2C_RING_BELL::VT_PLAYERNUM, playernum, 0);
  }
  explicit S2C_RING_BELLBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<S2C_RING_BELL> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<S2C_RING_BELL>(end);
    return o;
  }
};

inline flatbuffers::Offset<S2C_RING_BELL> CreateS2C_RING_BELL(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t playernum = 0) {
  S2C_RING_BELLBuilder builder_(_fbb);
  builder_.add_playernum(playernum);
  return builder_.Finish();
}

struct S2C_SOMEONE_DIE FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef S2C_SOMEONE_DIEBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PLAYERNUM = 4
  };
  int32_t playernum() const {
    return GetField<int32_t>(VT_PLAYERNUM, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_PLAYERNUM) &&
           verifier.EndTable();
  }
};

struct S2C_SOMEONE_DIEBuilder {
  typedef S2C_SOMEONE_DIE Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_playernum(int32_t playernum) {
    fbb_.AddElement<int32_t>(S2C_SOMEONE_DIE::VT_PLAYERNUM, playernum, 0);
  }
  explicit S2C_SOMEONE_DIEBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<S2C_SOMEONE_DIE> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<S2C_SOMEONE_DIE>(end);
    return o;
  }
};

inline flatbuffers::Offset<S2C_SOMEONE_DIE> CreateS2C_SOMEONE_DIE(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t playernum = 0) {
  S2C_SOMEONE_DIEBuilder builder_(_fbb);
  builder_.add_playernum(playernum);
  return builder_.Finish();
}

struct S2C_WIN FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef S2C_WINBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PLAYERNUM = 4,
    VT_PLAYERONE = 6,
    VT_PLAYERTWO = 8,
    VT_PLAYERTHREE = 10,
    VT_PLAYERFOUR = 12
  };
  int32_t playernum() const {
    return GetField<int32_t>(VT_PLAYERNUM, 0);
  }
  int32_t playerone() const {
    return GetField<int32_t>(VT_PLAYERONE, 0);
  }
  int32_t playertwo() const {
    return GetField<int32_t>(VT_PLAYERTWO, 0);
  }
  int32_t playerthree() const {
    return GetField<int32_t>(VT_PLAYERTHREE, 0);
  }
  int32_t playerfour() const {
    return GetField<int32_t>(VT_PLAYERFOUR, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_PLAYERNUM) &&
           VerifyField<int32_t>(verifier, VT_PLAYERONE) &&
           VerifyField<int32_t>(verifier, VT_PLAYERTWO) &&
           VerifyField<int32_t>(verifier, VT_PLAYERTHREE) &&
           VerifyField<int32_t>(verifier, VT_PLAYERFOUR) &&
           verifier.EndTable();
  }
};

struct S2C_WINBuilder {
  typedef S2C_WIN Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_playernum(int32_t playernum) {
    fbb_.AddElement<int32_t>(S2C_WIN::VT_PLAYERNUM, playernum, 0);
  }
  void add_playerone(int32_t playerone) {
    fbb_.AddElement<int32_t>(S2C_WIN::VT_PLAYERONE, playerone, 0);
  }
  void add_playertwo(int32_t playertwo) {
    fbb_.AddElement<int32_t>(S2C_WIN::VT_PLAYERTWO, playertwo, 0);
  }
  void add_playerthree(int32_t playerthree) {
    fbb_.AddElement<int32_t>(S2C_WIN::VT_PLAYERTHREE, playerthree, 0);
  }
  void add_playerfour(int32_t playerfour) {
    fbb_.AddElement<int32_t>(S2C_WIN::VT_PLAYERFOUR, playerfour, 0);
  }
  explicit S2C_WINBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<S2C_WIN> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<S2C_WIN>(end);
    return o;
  }
};

inline flatbuffers::Offset<S2C_WIN> CreateS2C_WIN(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t playernum = 0,
    int32_t playerone = 0,
    int32_t playertwo = 0,
    int32_t playerthree = 0,
    int32_t playerfour = 0) {
  S2C_WINBuilder builder_(_fbb);
  builder_.add_playerfour(playerfour);
  builder_.add_playerthree(playerthree);
  builder_.add_playertwo(playertwo);
  builder_.add_playerone(playerone);
  builder_.add_playernum(playernum);
  return builder_.Finish();
}

struct S2C_FAIL FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef S2C_FAILBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PLAYERNUM = 4
  };
  int32_t playernum() const {
    return GetField<int32_t>(VT_PLAYERNUM, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_PLAYERNUM) &&
           verifier.EndTable();
  }
};

struct S2C_FAILBuilder {
  typedef S2C_FAIL Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_playernum(int32_t playernum) {
    fbb_.AddElement<int32_t>(S2C_FAIL::VT_PLAYERNUM, playernum, 0);
  }
  explicit S2C_FAILBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<S2C_FAIL> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<S2C_FAIL>(end);
    return o;
  }
};

inline flatbuffers::Offset<S2C_FAIL> CreateS2C_FAIL(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t playernum = 0) {
  S2C_FAILBuilder builder_(_fbb);
  builder_.add_playernum(playernum);
  return builder_.Finish();
}

inline bool VerifyMESSAGE_ID(flatbuffers::Verifier &verifier, const void *obj, MESSAGE_ID type) {
  switch (type) {
    case MESSAGE_ID_NONE: {
      return true;
    }
    case MESSAGE_ID_S2C_TEST: {
      auto ptr = reinterpret_cast<const TcpProtocol::Define::S2C_TEST *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case MESSAGE_ID_C2S_TEST: {
      auto ptr = reinterpret_cast<const TcpProtocol::Define::C2S_TEST *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case MESSAGE_ID_C2S_START_GAME: {
      auto ptr = reinterpret_cast<const TcpProtocol::Define::C2S_START_GAME *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case MESSAGE_ID_S2C_START_GAME: {
      auto ptr = reinterpret_cast<const TcpProtocol::Define::S2C_START_GAME *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case MESSAGE_ID_C2S_HANDOUT_CARD: {
      auto ptr = reinterpret_cast<const TcpProtocol::Define::C2S_HANDOUT_CARD *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case MESSAGE_ID_C2S_RING_BELL: {
      auto ptr = reinterpret_cast<const TcpProtocol::Define::C2S_RING_BELL *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case MESSAGE_ID_S2C_HANDOUT_CARD: {
      auto ptr = reinterpret_cast<const TcpProtocol::Define::S2C_HANDOUT_CARD *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case MESSAGE_ID_S2C_RING_BELL: {
      auto ptr = reinterpret_cast<const TcpProtocol::Define::S2C_RING_BELL *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case MESSAGE_ID_S2C_SOMEONE_DIE: {
      auto ptr = reinterpret_cast<const TcpProtocol::Define::S2C_SOMEONE_DIE *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case MESSAGE_ID_S2C_WIN: {
      auto ptr = reinterpret_cast<const TcpProtocol::Define::S2C_WIN *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case MESSAGE_ID_S2C_FAIL: {
      auto ptr = reinterpret_cast<const TcpProtocol::Define::S2C_FAIL *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return true;
  }
}

inline bool VerifyMESSAGE_IDVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyMESSAGE_ID(
        verifier,  values->Get(i), types->GetEnum<MESSAGE_ID>(i))) {
      return false;
    }
  }
  return true;
}

inline const TcpProtocol::Define::Message *GetMessage(const void *buf) {
  return flatbuffers::GetRoot<TcpProtocol::Define::Message>(buf);
}

inline const TcpProtocol::Define::Message *GetSizePrefixedMessage(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<TcpProtocol::Define::Message>(buf);
}

inline bool VerifyMessageBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<TcpProtocol::Define::Message>(nullptr);
}

inline bool VerifySizePrefixedMessageBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<TcpProtocol::Define::Message>(nullptr);
}

inline void FinishMessageBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<TcpProtocol::Define::Message> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedMessageBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<TcpProtocol::Define::Message> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace Define
}  // namespace TcpProtocol

#endif  // FLATBUFFERS_GENERATED_TCPPROTOCOL_TCPPROTOCOL_DEFINE_H_
