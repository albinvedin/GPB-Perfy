// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bytes.proto

#include "bytes.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace vanilla {
class BytesRangeDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<BytesRange> _instance;
} _BytesRange_default_instance_;
}  // namespace vanilla
static void InitDefaultsBytesRange_bytes_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::vanilla::_BytesRange_default_instance_;
    new (ptr) ::vanilla::BytesRange();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::vanilla::BytesRange::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_BytesRange_bytes_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsBytesRange_bytes_2eproto}, {}};

void InitDefaults_bytes_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_BytesRange_bytes_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_bytes_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_bytes_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_bytes_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_bytes_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::vanilla::BytesRange, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::vanilla::BytesRange, content_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::vanilla::BytesRange)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::vanilla::_BytesRange_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_bytes_2eproto = {
  {}, AddDescriptors_bytes_2eproto, "bytes.proto", schemas,
  file_default_instances, TableStruct_bytes_2eproto::offsets,
  file_level_metadata_bytes_2eproto, 1, file_level_enum_descriptors_bytes_2eproto, file_level_service_descriptors_bytes_2eproto,
};

const char descriptor_table_protodef_bytes_2eproto[] =
  "\n\013bytes.proto\022\007vanilla\"\035\n\nBytesRange\022\017\n\007"
  "content\030\001 \003(\014b\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_bytes_2eproto = {
  false, InitDefaults_bytes_2eproto, 
  descriptor_table_protodef_bytes_2eproto,
  "bytes.proto", &assign_descriptors_table_bytes_2eproto, 61,
};

void AddDescriptors_bytes_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_bytes_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_bytes_2eproto = []() { AddDescriptors_bytes_2eproto(); return true; }();
namespace vanilla {

// ===================================================================

void BytesRange::InitAsDefaultInstance() {
}
class BytesRange::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BytesRange::kContentFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BytesRange::BytesRange()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:vanilla.BytesRange)
}
BytesRange::BytesRange(const BytesRange& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      content_(from.content_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:vanilla.BytesRange)
}

void BytesRange::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_BytesRange_bytes_2eproto.base);
}

BytesRange::~BytesRange() {
  // @@protoc_insertion_point(destructor:vanilla.BytesRange)
  SharedDtor();
}

void BytesRange::SharedDtor() {
}

void BytesRange::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const BytesRange& BytesRange::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_BytesRange_bytes_2eproto.base);
  return *internal_default_instance();
}


void BytesRange::Clear() {
// @@protoc_insertion_point(message_clear_start:vanilla.BytesRange)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  content_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* BytesRange::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<BytesRange*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // repeated bytes content = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        do {
          ptr = ::google::protobuf::io::ReadSize(ptr, &size);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
          object = msg->add_content();
          if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
            parser_till_end = ::google::protobuf::internal::GreedyStringParser;
            goto string_till_end;
          }
          GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheck(ptr, size, ctx));
          ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
          ptr += size;
          if (ptr >= end) break;
        } while ((::google::protobuf::io::UnalignedLoad<::google::protobuf::uint64>(ptr) & 255) == 10 && (ptr += 1));
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool BytesRange::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:vanilla.BytesRange)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated bytes content = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->add_content()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:vanilla.BytesRange)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:vanilla.BytesRange)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void BytesRange::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:vanilla.BytesRange)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated bytes content = 1;
  for (int i = 0, n = this->content_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      1, this->content(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:vanilla.BytesRange)
}

::google::protobuf::uint8* BytesRange::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:vanilla.BytesRange)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated bytes content = 1;
  for (int i = 0, n = this->content_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteBytesToArray(1, this->content(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:vanilla.BytesRange)
  return target;
}

size_t BytesRange::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:vanilla.BytesRange)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated bytes content = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->content_size());
  for (int i = 0, n = this->content_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
      this->content(i));
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void BytesRange::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:vanilla.BytesRange)
  GOOGLE_DCHECK_NE(&from, this);
  const BytesRange* source =
      ::google::protobuf::DynamicCastToGenerated<BytesRange>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:vanilla.BytesRange)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:vanilla.BytesRange)
    MergeFrom(*source);
  }
}

void BytesRange::MergeFrom(const BytesRange& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:vanilla.BytesRange)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  content_.MergeFrom(from.content_);
}

void BytesRange::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:vanilla.BytesRange)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BytesRange::CopyFrom(const BytesRange& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:vanilla.BytesRange)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BytesRange::IsInitialized() const {
  return true;
}

void BytesRange::Swap(BytesRange* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BytesRange::InternalSwap(BytesRange* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  content_.InternalSwap(CastToBase(&other->content_));
}

::google::protobuf::Metadata BytesRange::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_bytes_2eproto);
  return ::file_level_metadata_bytes_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace vanilla
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::vanilla::BytesRange* Arena::CreateMaybeMessage< ::vanilla::BytesRange >(Arena* arena) {
  return Arena::CreateInternal< ::vanilla::BytesRange >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>