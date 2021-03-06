// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EvBase.proto

#include "EvBase.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace events {
constexpr EvBase::EvBase(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : source_(0u)
  , destination_(0u)
  , _oneof_case_{}{}
struct EvBaseDefaultTypeInternal {
  constexpr EvBaseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~EvBaseDefaultTypeInternal() {}
  union {
    EvBase _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT EvBaseDefaultTypeInternal _EvBase_default_instance_;
}  // namespace events
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_EvBase_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_EvBase_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_EvBase_2eproto = nullptr;

const uint32_t TableStruct_EvBase_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::events::EvBase, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::events::EvBase, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::events::EvBase, source_),
  PROTOBUF_FIELD_OFFSET(::events::EvBase, destination_),
  ::PROTOBUF_NAMESPACE_ID::internal::kInvalidFieldOffsetTag,
  ::PROTOBUF_NAMESPACE_ID::internal::kInvalidFieldOffsetTag,
  PROTOBUF_FIELD_OFFSET(::events::EvBase, events_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::events::EvBase)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::events::_EvBase_default_instance_),
};

const char descriptor_table_protodef_EvBase_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014EvBase.proto\022\006events\032\025EvSimpleMessage."
  "proto\032\024EvSimpleNumber.proto\"\235\001\n\006EvBase\022\016"
  "\n\006source\030\001 \001(\r\022\023\n\013destination\030\002 \001(\r\0222\n\017e"
  "vSimpleMessage\030\003 \001(\0132\027.events.EvSimpleMe"
  "ssageH\000\0220\n\016evSimpleNumber\030\004 \001(\0132\026.events"
  ".EvSimpleNumberH\000B\010\n\006eventsB \n\036com.githu"
  "b.kylegagnon99.eventsb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_EvBase_2eproto_deps[2] = {
  &::descriptor_table_EvSimpleMessage_2eproto,
  &::descriptor_table_EvSimpleNumber_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_EvBase_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_EvBase_2eproto = {
  false, false, 269, descriptor_table_protodef_EvBase_2eproto, "EvBase.proto", 
  &descriptor_table_EvBase_2eproto_once, descriptor_table_EvBase_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_EvBase_2eproto::offsets,
  file_level_metadata_EvBase_2eproto, file_level_enum_descriptors_EvBase_2eproto, file_level_service_descriptors_EvBase_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_EvBase_2eproto_getter() {
  return &descriptor_table_EvBase_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_EvBase_2eproto(&descriptor_table_EvBase_2eproto);
namespace events {

// ===================================================================

class EvBase::_Internal {
 public:
  static const ::events::EvSimpleMessage& evsimplemessage(const EvBase* msg);
  static const ::events::EvSimpleNumber& evsimplenumber(const EvBase* msg);
};

const ::events::EvSimpleMessage&
EvBase::_Internal::evsimplemessage(const EvBase* msg) {
  return *msg->events_.evsimplemessage_;
}
const ::events::EvSimpleNumber&
EvBase::_Internal::evsimplenumber(const EvBase* msg) {
  return *msg->events_.evsimplenumber_;
}
void EvBase::set_allocated_evsimplemessage(::events::EvSimpleMessage* evsimplemessage) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  clear_events();
  if (evsimplemessage) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(evsimplemessage));
    if (message_arena != submessage_arena) {
      evsimplemessage = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, evsimplemessage, submessage_arena);
    }
    set_has_evsimplemessage();
    events_.evsimplemessage_ = evsimplemessage;
  }
  // @@protoc_insertion_point(field_set_allocated:events.EvBase.evSimpleMessage)
}
void EvBase::clear_evsimplemessage() {
  if (_internal_has_evsimplemessage()) {
    if (GetArenaForAllocation() == nullptr) {
      delete events_.evsimplemessage_;
    }
    clear_has_events();
  }
}
void EvBase::set_allocated_evsimplenumber(::events::EvSimpleNumber* evsimplenumber) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  clear_events();
  if (evsimplenumber) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(evsimplenumber));
    if (message_arena != submessage_arena) {
      evsimplenumber = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, evsimplenumber, submessage_arena);
    }
    set_has_evsimplenumber();
    events_.evsimplenumber_ = evsimplenumber;
  }
  // @@protoc_insertion_point(field_set_allocated:events.EvBase.evSimpleNumber)
}
void EvBase::clear_evsimplenumber() {
  if (_internal_has_evsimplenumber()) {
    if (GetArenaForAllocation() == nullptr) {
      delete events_.evsimplenumber_;
    }
    clear_has_events();
  }
}
EvBase::EvBase(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:events.EvBase)
}
EvBase::EvBase(const EvBase& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&source_, &from.source_,
    static_cast<size_t>(reinterpret_cast<char*>(&destination_) -
    reinterpret_cast<char*>(&source_)) + sizeof(destination_));
  clear_has_events();
  switch (from.events_case()) {
    case kEvSimpleMessage: {
      _internal_mutable_evsimplemessage()->::events::EvSimpleMessage::MergeFrom(from._internal_evsimplemessage());
      break;
    }
    case kEvSimpleNumber: {
      _internal_mutable_evsimplenumber()->::events::EvSimpleNumber::MergeFrom(from._internal_evsimplenumber());
      break;
    }
    case EVENTS_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:events.EvBase)
}

inline void EvBase::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&source_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&destination_) -
    reinterpret_cast<char*>(&source_)) + sizeof(destination_));
clear_has_events();
}

EvBase::~EvBase() {
  // @@protoc_insertion_point(destructor:events.EvBase)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void EvBase::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (has_events()) {
    clear_events();
  }
}

void EvBase::ArenaDtor(void* object) {
  EvBase* _this = reinterpret_cast< EvBase* >(object);
  (void)_this;
}
void EvBase::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void EvBase::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void EvBase::clear_events() {
// @@protoc_insertion_point(one_of_clear_start:events.EvBase)
  switch (events_case()) {
    case kEvSimpleMessage: {
      if (GetArenaForAllocation() == nullptr) {
        delete events_.evsimplemessage_;
      }
      break;
    }
    case kEvSimpleNumber: {
      if (GetArenaForAllocation() == nullptr) {
        delete events_.evsimplenumber_;
      }
      break;
    }
    case EVENTS_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = EVENTS_NOT_SET;
}


void EvBase::Clear() {
// @@protoc_insertion_point(message_clear_start:events.EvBase)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&source_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&destination_) -
      reinterpret_cast<char*>(&source_)) + sizeof(destination_));
  clear_events();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* EvBase::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 source = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          source_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 destination = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          destination_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .events.EvSimpleMessage evSimpleMessage = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_evsimplemessage(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .events.EvSimpleNumber evSimpleNumber = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_evsimplenumber(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* EvBase::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:events.EvBase)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 source = 1;
  if (this->_internal_source() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_source(), target);
  }

  // uint32 destination = 2;
  if (this->_internal_destination() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_destination(), target);
  }

  // .events.EvSimpleMessage evSimpleMessage = 3;
  if (_internal_has_evsimplemessage()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::evsimplemessage(this), target, stream);
  }

  // .events.EvSimpleNumber evSimpleNumber = 4;
  if (_internal_has_evsimplenumber()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::evsimplenumber(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:events.EvBase)
  return target;
}

size_t EvBase::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:events.EvBase)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 source = 1;
  if (this->_internal_source() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_source());
  }

  // uint32 destination = 2;
  if (this->_internal_destination() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_destination());
  }

  switch (events_case()) {
    // .events.EvSimpleMessage evSimpleMessage = 3;
    case kEvSimpleMessage: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *events_.evsimplemessage_);
      break;
    }
    // .events.EvSimpleNumber evSimpleNumber = 4;
    case kEvSimpleNumber: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *events_.evsimplenumber_);
      break;
    }
    case EVENTS_NOT_SET: {
      break;
    }
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData EvBase::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    EvBase::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*EvBase::GetClassData() const { return &_class_data_; }

void EvBase::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<EvBase *>(to)->MergeFrom(
      static_cast<const EvBase &>(from));
}


void EvBase::MergeFrom(const EvBase& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:events.EvBase)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_source() != 0) {
    _internal_set_source(from._internal_source());
  }
  if (from._internal_destination() != 0) {
    _internal_set_destination(from._internal_destination());
  }
  switch (from.events_case()) {
    case kEvSimpleMessage: {
      _internal_mutable_evsimplemessage()->::events::EvSimpleMessage::MergeFrom(from._internal_evsimplemessage());
      break;
    }
    case kEvSimpleNumber: {
      _internal_mutable_evsimplenumber()->::events::EvSimpleNumber::MergeFrom(from._internal_evsimplenumber());
      break;
    }
    case EVENTS_NOT_SET: {
      break;
    }
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void EvBase::CopyFrom(const EvBase& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:events.EvBase)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EvBase::IsInitialized() const {
  return true;
}

void EvBase::InternalSwap(EvBase* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(EvBase, destination_)
      + sizeof(EvBase::destination_)
      - PROTOBUF_FIELD_OFFSET(EvBase, source_)>(
          reinterpret_cast<char*>(&source_),
          reinterpret_cast<char*>(&other->source_));
  swap(events_, other->events_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata EvBase::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_EvBase_2eproto_getter, &descriptor_table_EvBase_2eproto_once,
      file_level_metadata_EvBase_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace events
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::events::EvBase* Arena::CreateMaybeMessage< ::events::EvBase >(Arena* arena) {
  return Arena::CreateMessageInternal< ::events::EvBase >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
