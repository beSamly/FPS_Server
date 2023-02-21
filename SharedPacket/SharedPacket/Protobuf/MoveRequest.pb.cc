// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MoveRequest.proto

#include "MoveRequest.pb.h"

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

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace Protocol {
PROTOBUF_CONSTEXPR MoveRequest::MoveRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.input_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.cameradirection_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MoveRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MoveRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MoveRequestDefaultTypeInternal() {}
  union {
    MoveRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MoveRequestDefaultTypeInternal _MoveRequest_default_instance_;
}  // namespace Protocol
static ::_pb::Metadata file_level_metadata_MoveRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_MoveRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_MoveRequest_2eproto = nullptr;

const uint32_t TableStruct_MoveRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Protocol::MoveRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Protocol::MoveRequest, _impl_.input_),
  PROTOBUF_FIELD_OFFSET(::Protocol::MoveRequest, _impl_.cameradirection_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::Protocol::MoveRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::Protocol::_MoveRequest_default_instance_._instance,
};

const char descriptor_table_protodef_MoveRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021MoveRequest.proto\022\010Protocol\032\rVector3.p"
  "roto\"H\n\013MoveRequest\022\r\n\005input\030\001 \001(\t\022*\n\017ca"
  "meraDirection\030\002 \001(\0132\021.Protocol.Vector3b\006"
  "proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_MoveRequest_2eproto_deps[1] = {
  &::descriptor_table_Vector3_2eproto,
};
static ::_pbi::once_flag descriptor_table_MoveRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_MoveRequest_2eproto = {
    false, false, 126, descriptor_table_protodef_MoveRequest_2eproto,
    "MoveRequest.proto",
    &descriptor_table_MoveRequest_2eproto_once, descriptor_table_MoveRequest_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_MoveRequest_2eproto::offsets,
    file_level_metadata_MoveRequest_2eproto, file_level_enum_descriptors_MoveRequest_2eproto,
    file_level_service_descriptors_MoveRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_MoveRequest_2eproto_getter() {
  return &descriptor_table_MoveRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_MoveRequest_2eproto(&descriptor_table_MoveRequest_2eproto);
namespace Protocol {

// ===================================================================

class MoveRequest::_Internal {
 public:
  static const ::Protocol::Vector3& cameradirection(const MoveRequest* msg);
};

const ::Protocol::Vector3&
MoveRequest::_Internal::cameradirection(const MoveRequest* msg) {
  return *msg->_impl_.cameradirection_;
}
void MoveRequest::clear_cameradirection() {
  if (GetArenaForAllocation() == nullptr && _impl_.cameradirection_ != nullptr) {
    delete _impl_.cameradirection_;
  }
  _impl_.cameradirection_ = nullptr;
}
MoveRequest::MoveRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Protocol.MoveRequest)
}
MoveRequest::MoveRequest(const MoveRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MoveRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.input_){}
    , decltype(_impl_.cameradirection_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.input_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.input_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_input().empty()) {
    _this->_impl_.input_.Set(from._internal_input(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_cameradirection()) {
    _this->_impl_.cameradirection_ = new ::Protocol::Vector3(*from._impl_.cameradirection_);
  }
  // @@protoc_insertion_point(copy_constructor:Protocol.MoveRequest)
}

inline void MoveRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.input_){}
    , decltype(_impl_.cameradirection_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.input_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.input_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

MoveRequest::~MoveRequest() {
  // @@protoc_insertion_point(destructor:Protocol.MoveRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MoveRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.input_.Destroy();
  if (this != internal_default_instance()) delete _impl_.cameradirection_;
}

void MoveRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MoveRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:Protocol.MoveRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.input_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.cameradirection_ != nullptr) {
    delete _impl_.cameradirection_;
  }
  _impl_.cameradirection_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MoveRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string input = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_input();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Protocol.MoveRequest.input"));
        } else
          goto handle_unusual;
        continue;
      // .Protocol.Vector3 cameraDirection = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_cameradirection(), ptr);
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

uint8_t* MoveRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Protocol.MoveRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string input = 1;
  if (!this->_internal_input().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_input().data(), static_cast<int>(this->_internal_input().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Protocol.MoveRequest.input");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_input(), target);
  }

  // .Protocol.Vector3 cameraDirection = 2;
  if (this->_internal_has_cameradirection()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::cameradirection(this),
        _Internal::cameradirection(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Protocol.MoveRequest)
  return target;
}

size_t MoveRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Protocol.MoveRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string input = 1;
  if (!this->_internal_input().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_input());
  }

  // .Protocol.Vector3 cameraDirection = 2;
  if (this->_internal_has_cameradirection()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.cameradirection_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MoveRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MoveRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MoveRequest::GetClassData() const { return &_class_data_; }


void MoveRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MoveRequest*>(&to_msg);
  auto& from = static_cast<const MoveRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Protocol.MoveRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_input().empty()) {
    _this->_internal_set_input(from._internal_input());
  }
  if (from._internal_has_cameradirection()) {
    _this->_internal_mutable_cameradirection()->::Protocol::Vector3::MergeFrom(
        from._internal_cameradirection());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MoveRequest::CopyFrom(const MoveRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Protocol.MoveRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MoveRequest::IsInitialized() const {
  return true;
}

void MoveRequest::InternalSwap(MoveRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.input_, lhs_arena,
      &other->_impl_.input_, rhs_arena
  );
  swap(_impl_.cameradirection_, other->_impl_.cameradirection_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MoveRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_MoveRequest_2eproto_getter, &descriptor_table_MoveRequest_2eproto_once,
      file_level_metadata_MoveRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Protocol
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Protocol::MoveRequest*
Arena::CreateMaybeMessage< ::Protocol::MoveRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Protocol::MoveRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
