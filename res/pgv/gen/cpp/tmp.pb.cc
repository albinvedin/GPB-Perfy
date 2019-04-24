// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tmp.proto

#include "tmp.pb.h"

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

extern PROTOBUF_INTERNAL_EXPORT_tmp_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Child_tmp_2eproto;
namespace pgv {
class ParentDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Parent> _instance;
} _Parent_default_instance_;
class ChildDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Child> _instance;
} _Child_default_instance_;
}  // namespace pgv
static void InitDefaultsParent_tmp_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::pgv::_Parent_default_instance_;
    new (ptr) ::pgv::Parent();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pgv::Parent::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Parent_tmp_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsParent_tmp_2eproto}, {
      &scc_info_Child_tmp_2eproto.base,}};

static void InitDefaultsChild_tmp_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::pgv::_Child_default_instance_;
    new (ptr) ::pgv::Child();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pgv::Child::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Child_tmp_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsChild_tmp_2eproto}, {}};

void InitDefaults_tmp_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_Parent_tmp_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Child_tmp_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_tmp_2eproto[2];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_tmp_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_tmp_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_tmp_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::pgv::Parent, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::pgv::Parent, children_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::pgv::Child, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::pgv::Child, int64range_),
  PROTOBUF_FIELD_OFFSET(::pgv::Child, doublerange_),
  PROTOBUF_FIELD_OFFSET(::pgv::Child, stringpattern_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::pgv::Parent)},
  { 6, -1, sizeof(::pgv::Child)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::pgv::_Parent_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::pgv::_Child_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_tmp_2eproto = {
  {}, AddDescriptors_tmp_2eproto, "tmp.proto", schemas,
  file_default_instances, TableStruct_tmp_2eproto::offsets,
  file_level_metadata_tmp_2eproto, 2, file_level_enum_descriptors_tmp_2eproto, file_level_service_descriptors_tmp_2eproto,
};

const char descriptor_table_protodef_tmp_2eproto[] =
  "\n\ttmp.proto\022\003pgv\032\027validate/validate.prot"
  "o\"&\n\006Parent\022\034\n\010children\030\001 \003(\0132\n.pgv.Chil"
  "d\"\317\001\n\005Child\022\037\n\nint64Range\030\001 \001(\004B\013\272\351\300\003\0062\004"
  "\030\024(\n\022.\n\013doubleRange\030\002 \001(\001B\031\272\351\300\003\024\022\022\031\000\000\000\000\000"
  "\0004@)\000\000\000\000\000\000$@\022u\n\rstringPattern\030\003 \001(\tB^\272\351\300"
  "\003YrW2U^[A-Z][a-z]*(-[A-Z][a-z]*)\?( [A-Z]"
  "[a-z]*(-[A-Z][a-z]*)\?)* [A-Z][a-z]*(-[A-"
  "Z][a-z]*)\?$b\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_tmp_2eproto = {
  false, InitDefaults_tmp_2eproto, 
  descriptor_table_protodef_tmp_2eproto,
  "tmp.proto", &assign_descriptors_table_tmp_2eproto, 299,
};

void AddDescriptors_tmp_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
    ::AddDescriptors_validate_2fvalidate_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_tmp_2eproto, deps, 1);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_tmp_2eproto = []() { AddDescriptors_tmp_2eproto(); return true; }();
namespace pgv {

// ===================================================================

void Parent::InitAsDefaultInstance() {
}
class Parent::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Parent::kChildrenFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Parent::Parent()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pgv.Parent)
}
Parent::Parent(const Parent& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      children_(from.children_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:pgv.Parent)
}

void Parent::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_Parent_tmp_2eproto.base);
}

Parent::~Parent() {
  // @@protoc_insertion_point(destructor:pgv.Parent)
  SharedDtor();
}

void Parent::SharedDtor() {
}

void Parent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Parent& Parent::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Parent_tmp_2eproto.base);
  return *internal_default_instance();
}


void Parent::Clear() {
// @@protoc_insertion_point(message_clear_start:pgv.Parent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  children_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Parent::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Parent*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // repeated .pgv.Child children = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        do {
          ptr = ::google::protobuf::io::ReadSize(ptr, &size);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
          parser_till_end = ::pgv::Child::_InternalParse;
          object = msg->add_children();
          if (size > end - ptr) goto len_delim_till_end;
          ptr += size;
          GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
              {parser_till_end, object}, ptr - size, ptr));
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
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Parent::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pgv.Parent)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .pgv.Child children = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_children()));
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
  // @@protoc_insertion_point(parse_success:pgv.Parent)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pgv.Parent)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Parent::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pgv.Parent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .pgv.Child children = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->children_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->children(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:pgv.Parent)
}

::google::protobuf::uint8* Parent::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:pgv.Parent)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .pgv.Child children = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->children_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->children(static_cast<int>(i)), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pgv.Parent)
  return target;
}

size_t Parent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pgv.Parent)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .pgv.Child children = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->children_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->children(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Parent::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pgv.Parent)
  GOOGLE_DCHECK_NE(&from, this);
  const Parent* source =
      ::google::protobuf::DynamicCastToGenerated<Parent>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pgv.Parent)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pgv.Parent)
    MergeFrom(*source);
  }
}

void Parent::MergeFrom(const Parent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pgv.Parent)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  children_.MergeFrom(from.children_);
}

void Parent::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pgv.Parent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Parent::CopyFrom(const Parent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pgv.Parent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Parent::IsInitialized() const {
  return true;
}

void Parent::Swap(Parent* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Parent::InternalSwap(Parent* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  CastToBase(&children_)->InternalSwap(CastToBase(&other->children_));
}

::google::protobuf::Metadata Parent::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_tmp_2eproto);
  return ::file_level_metadata_tmp_2eproto[kIndexInFileMessages];
}


// ===================================================================

void Child::InitAsDefaultInstance() {
}
class Child::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Child::kInt64RangeFieldNumber;
const int Child::kDoubleRangeFieldNumber;
const int Child::kStringPatternFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Child::Child()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pgv.Child)
}
Child::Child(const Child& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  stringpattern_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.stringpattern().size() > 0) {
    stringpattern_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.stringpattern_);
  }
  ::memcpy(&int64range_, &from.int64range_,
    static_cast<size_t>(reinterpret_cast<char*>(&doublerange_) -
    reinterpret_cast<char*>(&int64range_)) + sizeof(doublerange_));
  // @@protoc_insertion_point(copy_constructor:pgv.Child)
}

void Child::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_Child_tmp_2eproto.base);
  stringpattern_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&int64range_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&doublerange_) -
      reinterpret_cast<char*>(&int64range_)) + sizeof(doublerange_));
}

Child::~Child() {
  // @@protoc_insertion_point(destructor:pgv.Child)
  SharedDtor();
}

void Child::SharedDtor() {
  stringpattern_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Child::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Child& Child::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Child_tmp_2eproto.base);
  return *internal_default_instance();
}


void Child::Clear() {
// @@protoc_insertion_point(message_clear_start:pgv.Child)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  stringpattern_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&int64range_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&doublerange_) -
      reinterpret_cast<char*>(&int64range_)) + sizeof(doublerange_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Child::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Child*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // uint64 int64Range = 1 [(.validate.rules) = {
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        msg->set_int64range(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // double doubleRange = 2 [(.validate.rules) = {
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 17) goto handle_unusual;
        msg->set_doublerange(::google::protobuf::io::UnalignedLoad<double>(ptr));
        ptr += sizeof(double);
        break;
      }
      // string stringPattern = 3 [(.validate.rules) = {
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 26) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("pgv.Child.stringPattern");
        object = msg->mutable_stringpattern();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
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
bool Child::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pgv.Child)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 int64Range = 1 [(.validate.rules) = {
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &int64range_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double doubleRange = 2 [(.validate.rules) = {
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (17 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &doublerange_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string stringPattern = 3 [(.validate.rules) = {
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (26 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_stringpattern()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->stringpattern().data(), static_cast<int>(this->stringpattern().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "pgv.Child.stringPattern"));
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
  // @@protoc_insertion_point(parse_success:pgv.Child)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pgv.Child)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Child::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pgv.Child)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 int64Range = 1 [(.validate.rules) = {
  if (this->int64range() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->int64range(), output);
  }

  // double doubleRange = 2 [(.validate.rules) = {
  if (this->doublerange() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->doublerange(), output);
  }

  // string stringPattern = 3 [(.validate.rules) = {
  if (this->stringpattern().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->stringpattern().data(), static_cast<int>(this->stringpattern().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "pgv.Child.stringPattern");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->stringpattern(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:pgv.Child)
}

::google::protobuf::uint8* Child::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:pgv.Child)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 int64Range = 1 [(.validate.rules) = {
  if (this->int64range() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->int64range(), target);
  }

  // double doubleRange = 2 [(.validate.rules) = {
  if (this->doublerange() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->doublerange(), target);
  }

  // string stringPattern = 3 [(.validate.rules) = {
  if (this->stringpattern().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->stringpattern().data(), static_cast<int>(this->stringpattern().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "pgv.Child.stringPattern");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->stringpattern(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pgv.Child)
  return target;
}

size_t Child::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pgv.Child)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string stringPattern = 3 [(.validate.rules) = {
  if (this->stringpattern().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->stringpattern());
  }

  // uint64 int64Range = 1 [(.validate.rules) = {
  if (this->int64range() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->int64range());
  }

  // double doubleRange = 2 [(.validate.rules) = {
  if (this->doublerange() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Child::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pgv.Child)
  GOOGLE_DCHECK_NE(&from, this);
  const Child* source =
      ::google::protobuf::DynamicCastToGenerated<Child>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pgv.Child)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pgv.Child)
    MergeFrom(*source);
  }
}

void Child::MergeFrom(const Child& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pgv.Child)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.stringpattern().size() > 0) {

    stringpattern_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.stringpattern_);
  }
  if (from.int64range() != 0) {
    set_int64range(from.int64range());
  }
  if (from.doublerange() != 0) {
    set_doublerange(from.doublerange());
  }
}

void Child::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pgv.Child)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Child::CopyFrom(const Child& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pgv.Child)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Child::IsInitialized() const {
  return true;
}

void Child::Swap(Child* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Child::InternalSwap(Child* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  stringpattern_.Swap(&other->stringpattern_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(int64range_, other->int64range_);
  swap(doublerange_, other->doublerange_);
}

::google::protobuf::Metadata Child::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_tmp_2eproto);
  return ::file_level_metadata_tmp_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace pgv
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::pgv::Parent* Arena::CreateMaybeMessage< ::pgv::Parent >(Arena* arena) {
  return Arena::CreateInternal< ::pgv::Parent >(arena);
}
template<> PROTOBUF_NOINLINE ::pgv::Child* Arena::CreateMaybeMessage< ::pgv::Child >(Arena* arena) {
  return Arena::CreateInternal< ::pgv::Child >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>