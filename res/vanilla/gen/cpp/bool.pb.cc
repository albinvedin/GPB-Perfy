// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bool.proto

#include "bool.pb.h"

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
class BoolRangeDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<BoolRange> _instance;
} _BoolRange_default_instance_;
}  // namespace vanilla
static void InitDefaultsBoolRange_bool_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::vanilla::_BoolRange_default_instance_;
    new (ptr) ::vanilla::BoolRange();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::vanilla::BoolRange::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_BoolRange_bool_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsBoolRange_bool_2eproto}, {}};

void InitDefaults_bool_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_BoolRange_bool_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_bool_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_bool_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_bool_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_bool_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::vanilla::BoolRange, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::vanilla::BoolRange, content_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::vanilla::BoolRange)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::vanilla::_BoolRange_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_bool_2eproto = {
  {}, AddDescriptors_bool_2eproto, "bool.proto", schemas,
  file_default_instances, TableStruct_bool_2eproto::offsets,
  file_level_metadata_bool_2eproto, 1, file_level_enum_descriptors_bool_2eproto, file_level_service_descriptors_bool_2eproto,
};

const char descriptor_table_protodef_bool_2eproto[] =
  "\n\nbool.proto\022\007vanilla\"\034\n\tBoolRange\022\017\n\007co"
  "ntent\030\001 \003(\010b\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_bool_2eproto = {
  false, InitDefaults_bool_2eproto, 
  descriptor_table_protodef_bool_2eproto,
  "bool.proto", &assign_descriptors_table_bool_2eproto, 59,
};

void AddDescriptors_bool_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_bool_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_bool_2eproto = []() { AddDescriptors_bool_2eproto(); return true; }();
namespace vanilla {

// ===================================================================

void BoolRange::InitAsDefaultInstance() {
}
class BoolRange::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BoolRange::kContentFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BoolRange::BoolRange()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:vanilla.BoolRange)
}
BoolRange::BoolRange(const BoolRange& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      content_(from.content_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:vanilla.BoolRange)
}

void BoolRange::SharedCtor() {
}

BoolRange::~BoolRange() {
  // @@protoc_insertion_point(destructor:vanilla.BoolRange)
  SharedDtor();
}

void BoolRange::SharedDtor() {
}

void BoolRange::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const BoolRange& BoolRange::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_BoolRange_bool_2eproto.base);
  return *internal_default_instance();
}


void BoolRange::Clear() {
// @@protoc_insertion_point(message_clear_start:vanilla.BoolRange)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  content_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* BoolRange::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<BoolRange*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // repeated bool content = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) == 10) {
          ptr = ::google::protobuf::io::ReadSize(ptr, &size);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
          parser_till_end = ::google::protobuf::internal::PackedBoolParser;
          object = msg->mutable_content();
          if (size > end - ptr) goto len_delim_till_end;
          auto newend = ptr + size;
          if (size) ptr = parser_till_end(ptr, newend, object, ctx);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr == newend);
          break;
        } else if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        do {
          msg->add_content(::google::protobuf::internal::ReadVarint(&ptr));
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
          if (ptr >= end) break;
        } while ((::google::protobuf::io::UnalignedLoad<::google::protobuf::uint64>(ptr) & 255) == 8 && (ptr += 1));
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
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool BoolRange::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:vanilla.BoolRange)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated bool content = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, this->mutable_content())));
        } else if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 1, 10u, input, this->mutable_content())));
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
  // @@protoc_insertion_point(parse_success:vanilla.BoolRange)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:vanilla.BoolRange)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void BoolRange::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:vanilla.BoolRange)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated bool content = 1;
  if (this->content_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_content_cached_byte_size_.load(
        std::memory_order_relaxed));
    ::google::protobuf::internal::WireFormatLite::WriteBoolArray(
      this->content().data(), this->content_size(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:vanilla.BoolRange)
}

::google::protobuf::uint8* BoolRange::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:vanilla.BoolRange)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated bool content = 1;
  if (this->content_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        _content_cached_byte_size_.load(std::memory_order_relaxed),
         target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteBoolNoTagToArray(this->content_, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:vanilla.BoolRange)
  return target;
}

size_t BoolRange::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:vanilla.BoolRange)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated bool content = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->content_size());
    size_t data_size = 1UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast<::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    _content_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void BoolRange::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:vanilla.BoolRange)
  GOOGLE_DCHECK_NE(&from, this);
  const BoolRange* source =
      ::google::protobuf::DynamicCastToGenerated<BoolRange>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:vanilla.BoolRange)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:vanilla.BoolRange)
    MergeFrom(*source);
  }
}

void BoolRange::MergeFrom(const BoolRange& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:vanilla.BoolRange)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  content_.MergeFrom(from.content_);
}

void BoolRange::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:vanilla.BoolRange)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BoolRange::CopyFrom(const BoolRange& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:vanilla.BoolRange)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BoolRange::IsInitialized() const {
  return true;
}

void BoolRange::Swap(BoolRange* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BoolRange::InternalSwap(BoolRange* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  content_.InternalSwap(&other->content_);
}

::google::protobuf::Metadata BoolRange::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_bool_2eproto);
  return ::file_level_metadata_bool_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace vanilla
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::vanilla::BoolRange* Arena::CreateMaybeMessage< ::vanilla::BoolRange >(Arena* arena) {
  return Arena::CreateInternal< ::vanilla::BoolRange >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>