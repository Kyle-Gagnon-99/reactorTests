// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EvBase.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_EvBase_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_EvBase_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "EvSimpleMessage.h"
#include "EvSimpleNumber.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_EvBase_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_EvBase_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_EvBase_2eproto;
namespace events {
class EvBase;
struct EvBaseDefaultTypeInternal;
extern EvBaseDefaultTypeInternal _EvBase_default_instance_;
}  // namespace events
PROTOBUF_NAMESPACE_OPEN
template<> ::events::EvBase* Arena::CreateMaybeMessage<::events::EvBase>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace events {

// ===================================================================

class EvBase final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:events.EvBase) */ {
 public:
  inline EvBase() : EvBase(nullptr) {}
  ~EvBase() override;
  explicit constexpr EvBase(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  EvBase(const EvBase& from);
  EvBase(EvBase&& from) noexcept
    : EvBase() {
    *this = ::std::move(from);
  }

  inline EvBase& operator=(const EvBase& from) {
    CopyFrom(from);
    return *this;
  }
  inline EvBase& operator=(EvBase&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const EvBase& default_instance() {
    return *internal_default_instance();
  }
  enum EventsCase {
    kEvSimpleMessage = 3,
    kEvSimpleNumber = 4,
    EVENTS_NOT_SET = 0,
  };

  static inline const EvBase* internal_default_instance() {
    return reinterpret_cast<const EvBase*>(
               &_EvBase_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(EvBase& a, EvBase& b) {
    a.Swap(&b);
  }
  inline void Swap(EvBase* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(EvBase* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  EvBase* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<EvBase>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const EvBase& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const EvBase& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(EvBase* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "events.EvBase";
  }
  protected:
  explicit EvBase(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSourceFieldNumber = 1,
    kDestinationFieldNumber = 2,
    kEvSimpleMessageFieldNumber = 3,
    kEvSimpleNumberFieldNumber = 4,
  };
  // uint32 source = 1;
  void clear_source();
  uint32_t source() const;
  void set_source(uint32_t value);
  private:
  uint32_t _internal_source() const;
  void _internal_set_source(uint32_t value);
  public:

  // uint32 destination = 2;
  void clear_destination();
  uint32_t destination() const;
  void set_destination(uint32_t value);
  private:
  uint32_t _internal_destination() const;
  void _internal_set_destination(uint32_t value);
  public:

  // .events.EvSimpleMessage evSimpleMessage = 3;
  bool has_evsimplemessage() const;
  private:
  bool _internal_has_evsimplemessage() const;
  public:
  void clear_evsimplemessage();
  const ::events::EvSimpleMessage& evsimplemessage() const;
  PROTOBUF_NODISCARD ::events::EvSimpleMessage* release_evsimplemessage();
  ::events::EvSimpleMessage* mutable_evsimplemessage();
  void set_allocated_evsimplemessage(::events::EvSimpleMessage* evsimplemessage);
  private:
  const ::events::EvSimpleMessage& _internal_evsimplemessage() const;
  ::events::EvSimpleMessage* _internal_mutable_evsimplemessage();
  public:
  void unsafe_arena_set_allocated_evsimplemessage(
      ::events::EvSimpleMessage* evsimplemessage);
  ::events::EvSimpleMessage* unsafe_arena_release_evsimplemessage();

  // .events.EvSimpleNumber evSimpleNumber = 4;
  bool has_evsimplenumber() const;
  private:
  bool _internal_has_evsimplenumber() const;
  public:
  void clear_evsimplenumber();
  const ::events::EvSimpleNumber& evsimplenumber() const;
  PROTOBUF_NODISCARD ::events::EvSimpleNumber* release_evsimplenumber();
  ::events::EvSimpleNumber* mutable_evsimplenumber();
  void set_allocated_evsimplenumber(::events::EvSimpleNumber* evsimplenumber);
  private:
  const ::events::EvSimpleNumber& _internal_evsimplenumber() const;
  ::events::EvSimpleNumber* _internal_mutable_evsimplenumber();
  public:
  void unsafe_arena_set_allocated_evsimplenumber(
      ::events::EvSimpleNumber* evsimplenumber);
  ::events::EvSimpleNumber* unsafe_arena_release_evsimplenumber();

  void clear_events();
  EventsCase events_case() const;
  // @@protoc_insertion_point(class_scope:events.EvBase)
 private:
  class _Internal;
  void set_has_evsimplemessage();
  void set_has_evsimplenumber();

  inline bool has_events() const;
  inline void clear_has_events();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  uint32_t source_;
  uint32_t destination_;
  union EventsUnion {
    constexpr EventsUnion() : _constinit_{} {}
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
    ::events::EvSimpleMessage* evsimplemessage_;
    ::events::EvSimpleNumber* evsimplenumber_;
  } events_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  uint32_t _oneof_case_[1];

  friend struct ::TableStruct_EvBase_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EvBase

// uint32 source = 1;
inline void EvBase::clear_source() {
  source_ = 0u;
}
inline uint32_t EvBase::_internal_source() const {
  return source_;
}
inline uint32_t EvBase::source() const {
  // @@protoc_insertion_point(field_get:events.EvBase.source)
  return _internal_source();
}
inline void EvBase::_internal_set_source(uint32_t value) {
  
  source_ = value;
}
inline void EvBase::set_source(uint32_t value) {
  _internal_set_source(value);
  // @@protoc_insertion_point(field_set:events.EvBase.source)
}

// uint32 destination = 2;
inline void EvBase::clear_destination() {
  destination_ = 0u;
}
inline uint32_t EvBase::_internal_destination() const {
  return destination_;
}
inline uint32_t EvBase::destination() const {
  // @@protoc_insertion_point(field_get:events.EvBase.destination)
  return _internal_destination();
}
inline void EvBase::_internal_set_destination(uint32_t value) {
  
  destination_ = value;
}
inline void EvBase::set_destination(uint32_t value) {
  _internal_set_destination(value);
  // @@protoc_insertion_point(field_set:events.EvBase.destination)
}

// .events.EvSimpleMessage evSimpleMessage = 3;
inline bool EvBase::_internal_has_evsimplemessage() const {
  return events_case() == kEvSimpleMessage;
}
inline bool EvBase::has_evsimplemessage() const {
  return _internal_has_evsimplemessage();
}
inline void EvBase::set_has_evsimplemessage() {
  _oneof_case_[0] = kEvSimpleMessage;
}
inline ::events::EvSimpleMessage* EvBase::release_evsimplemessage() {
  // @@protoc_insertion_point(field_release:events.EvBase.evSimpleMessage)
  if (_internal_has_evsimplemessage()) {
    clear_has_events();
      ::events::EvSimpleMessage* temp = events_.evsimplemessage_;
    if (GetArenaForAllocation() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    events_.evsimplemessage_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::events::EvSimpleMessage& EvBase::_internal_evsimplemessage() const {
  return _internal_has_evsimplemessage()
      ? *events_.evsimplemessage_
      : reinterpret_cast< ::events::EvSimpleMessage&>(::events::_EvSimpleMessage_default_instance_);
}
inline const ::events::EvSimpleMessage& EvBase::evsimplemessage() const {
  // @@protoc_insertion_point(field_get:events.EvBase.evSimpleMessage)
  return _internal_evsimplemessage();
}
inline ::events::EvSimpleMessage* EvBase::unsafe_arena_release_evsimplemessage() {
  // @@protoc_insertion_point(field_unsafe_arena_release:events.EvBase.evSimpleMessage)
  if (_internal_has_evsimplemessage()) {
    clear_has_events();
    ::events::EvSimpleMessage* temp = events_.evsimplemessage_;
    events_.evsimplemessage_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void EvBase::unsafe_arena_set_allocated_evsimplemessage(::events::EvSimpleMessage* evsimplemessage) {
  clear_events();
  if (evsimplemessage) {
    set_has_evsimplemessage();
    events_.evsimplemessage_ = evsimplemessage;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:events.EvBase.evSimpleMessage)
}
inline ::events::EvSimpleMessage* EvBase::_internal_mutable_evsimplemessage() {
  if (!_internal_has_evsimplemessage()) {
    clear_events();
    set_has_evsimplemessage();
    events_.evsimplemessage_ = CreateMaybeMessage< ::events::EvSimpleMessage >(GetArenaForAllocation());
  }
  return events_.evsimplemessage_;
}
inline ::events::EvSimpleMessage* EvBase::mutable_evsimplemessage() {
  ::events::EvSimpleMessage* _msg = _internal_mutable_evsimplemessage();
  // @@protoc_insertion_point(field_mutable:events.EvBase.evSimpleMessage)
  return _msg;
}

// .events.EvSimpleNumber evSimpleNumber = 4;
inline bool EvBase::_internal_has_evsimplenumber() const {
  return events_case() == kEvSimpleNumber;
}
inline bool EvBase::has_evsimplenumber() const {
  return _internal_has_evsimplenumber();
}
inline void EvBase::set_has_evsimplenumber() {
  _oneof_case_[0] = kEvSimpleNumber;
}
inline ::events::EvSimpleNumber* EvBase::release_evsimplenumber() {
  // @@protoc_insertion_point(field_release:events.EvBase.evSimpleNumber)
  if (_internal_has_evsimplenumber()) {
    clear_has_events();
      ::events::EvSimpleNumber* temp = events_.evsimplenumber_;
    if (GetArenaForAllocation() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    events_.evsimplenumber_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::events::EvSimpleNumber& EvBase::_internal_evsimplenumber() const {
  return _internal_has_evsimplenumber()
      ? *events_.evsimplenumber_
      : reinterpret_cast< ::events::EvSimpleNumber&>(::events::_EvSimpleNumber_default_instance_);
}
inline const ::events::EvSimpleNumber& EvBase::evsimplenumber() const {
  // @@protoc_insertion_point(field_get:events.EvBase.evSimpleNumber)
  return _internal_evsimplenumber();
}
inline ::events::EvSimpleNumber* EvBase::unsafe_arena_release_evsimplenumber() {
  // @@protoc_insertion_point(field_unsafe_arena_release:events.EvBase.evSimpleNumber)
  if (_internal_has_evsimplenumber()) {
    clear_has_events();
    ::events::EvSimpleNumber* temp = events_.evsimplenumber_;
    events_.evsimplenumber_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void EvBase::unsafe_arena_set_allocated_evsimplenumber(::events::EvSimpleNumber* evsimplenumber) {
  clear_events();
  if (evsimplenumber) {
    set_has_evsimplenumber();
    events_.evsimplenumber_ = evsimplenumber;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:events.EvBase.evSimpleNumber)
}
inline ::events::EvSimpleNumber* EvBase::_internal_mutable_evsimplenumber() {
  if (!_internal_has_evsimplenumber()) {
    clear_events();
    set_has_evsimplenumber();
    events_.evsimplenumber_ = CreateMaybeMessage< ::events::EvSimpleNumber >(GetArenaForAllocation());
  }
  return events_.evsimplenumber_;
}
inline ::events::EvSimpleNumber* EvBase::mutable_evsimplenumber() {
  ::events::EvSimpleNumber* _msg = _internal_mutable_evsimplenumber();
  // @@protoc_insertion_point(field_mutable:events.EvBase.evSimpleNumber)
  return _msg;
}

inline bool EvBase::has_events() const {
  return events_case() != EVENTS_NOT_SET;
}
inline void EvBase::clear_has_events() {
  _oneof_case_[0] = EVENTS_NOT_SET;
}
inline EvBase::EventsCase EvBase::events_case() const {
  return EvBase::EventsCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace events

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_EvBase_2eproto
