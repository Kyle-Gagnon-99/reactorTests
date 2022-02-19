// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EvSimpleNumber.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_EvSimpleNumber_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_EvSimpleNumber_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_EvSimpleNumber_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_EvSimpleNumber_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_EvSimpleNumber_2eproto;
namespace events {
class EvSimpleNumber;
struct EvSimpleNumberDefaultTypeInternal;
extern EvSimpleNumberDefaultTypeInternal _EvSimpleNumber_default_instance_;
}  // namespace events
PROTOBUF_NAMESPACE_OPEN
template<> ::events::EvSimpleNumber* Arena::CreateMaybeMessage<::events::EvSimpleNumber>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace events {

// ===================================================================

class EvSimpleNumber final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:events.EvSimpleNumber) */ {
 public:
  inline EvSimpleNumber() : EvSimpleNumber(nullptr) {}
  ~EvSimpleNumber() override;
  explicit constexpr EvSimpleNumber(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  EvSimpleNumber(const EvSimpleNumber& from);
  EvSimpleNumber(EvSimpleNumber&& from) noexcept
    : EvSimpleNumber() {
    *this = ::std::move(from);
  }

  inline EvSimpleNumber& operator=(const EvSimpleNumber& from) {
    CopyFrom(from);
    return *this;
  }
  inline EvSimpleNumber& operator=(EvSimpleNumber&& from) noexcept {
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
  static const EvSimpleNumber& default_instance() {
    return *internal_default_instance();
  }
  static inline const EvSimpleNumber* internal_default_instance() {
    return reinterpret_cast<const EvSimpleNumber*>(
               &_EvSimpleNumber_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(EvSimpleNumber& a, EvSimpleNumber& b) {
    a.Swap(&b);
  }
  inline void Swap(EvSimpleNumber* other) {
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
  void UnsafeArenaSwap(EvSimpleNumber* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  EvSimpleNumber* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<EvSimpleNumber>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const EvSimpleNumber& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const EvSimpleNumber& from);
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
  void InternalSwap(EvSimpleNumber* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "events.EvSimpleNumber";
  }
  protected:
  explicit EvSimpleNumber(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kNumberFieldNumber = 1,
  };
  // int32 number = 1;
  void clear_number();
  int32_t number() const;
  void set_number(int32_t value);
  private:
  int32_t _internal_number() const;
  void _internal_set_number(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:events.EvSimpleNumber)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int32_t number_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_EvSimpleNumber_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EvSimpleNumber

// int32 number = 1;
inline void EvSimpleNumber::clear_number() {
  number_ = 0;
}
inline int32_t EvSimpleNumber::_internal_number() const {
  return number_;
}
inline int32_t EvSimpleNumber::number() const {
  // @@protoc_insertion_point(field_get:events.EvSimpleNumber.number)
  return _internal_number();
}
inline void EvSimpleNumber::_internal_set_number(int32_t value) {
  
  number_ = value;
}
inline void EvSimpleNumber::set_number(int32_t value) {
  _internal_set_number(value);
  // @@protoc_insertion_point(field_set:events.EvSimpleNumber.number)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace events

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_EvSimpleNumber_2eproto