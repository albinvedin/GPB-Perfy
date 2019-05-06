// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: double.proto

#ifndef PROTOBUF_INCLUDED_double_2eproto
#define PROTOBUF_INCLUDED_double_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_double_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_double_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_double_2eproto();
namespace vanilla {
class DoubleRange;
class DoubleRangeDefaultTypeInternal;
extern DoubleRangeDefaultTypeInternal _DoubleRange_default_instance_;
}  // namespace vanilla
namespace google {
namespace protobuf {
template<> ::vanilla::DoubleRange* Arena::CreateMaybeMessage<::vanilla::DoubleRange>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace vanilla {

// ===================================================================

class DoubleRange final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:vanilla.DoubleRange) */ {
 public:
  DoubleRange();
  virtual ~DoubleRange();

  DoubleRange(const DoubleRange& from);

  inline DoubleRange& operator=(const DoubleRange& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DoubleRange(DoubleRange&& from) noexcept
    : DoubleRange() {
    *this = ::std::move(from);
  }

  inline DoubleRange& operator=(DoubleRange&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const DoubleRange& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DoubleRange* internal_default_instance() {
    return reinterpret_cast<const DoubleRange*>(
               &_DoubleRange_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(DoubleRange* other);
  friend void swap(DoubleRange& a, DoubleRange& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DoubleRange* New() const final {
    return CreateMaybeMessage<DoubleRange>(nullptr);
  }

  DoubleRange* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DoubleRange>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DoubleRange& from);
  void MergeFrom(const DoubleRange& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DoubleRange* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated double content = 1;
  int content_size() const;
  void clear_content();
  static const int kContentFieldNumber = 1;
  double content(int index) const;
  void set_content(int index, double value);
  void add_content(double value);
  const ::google::protobuf::RepeatedField< double >&
      content() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_content();

  // @@protoc_insertion_point(class_scope:vanilla.DoubleRange)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< double > content_;
  mutable std::atomic<int> _content_cached_byte_size_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_double_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DoubleRange

// repeated double content = 1;
inline int DoubleRange::content_size() const {
  return content_.size();
}
inline void DoubleRange::clear_content() {
  content_.Clear();
}
inline double DoubleRange::content(int index) const {
  // @@protoc_insertion_point(field_get:vanilla.DoubleRange.content)
  return content_.Get(index);
}
inline void DoubleRange::set_content(int index, double value) {
  content_.Set(index, value);
  // @@protoc_insertion_point(field_set:vanilla.DoubleRange.content)
}
inline void DoubleRange::add_content(double value) {
  content_.Add(value);
  // @@protoc_insertion_point(field_add:vanilla.DoubleRange.content)
}
inline const ::google::protobuf::RepeatedField< double >&
DoubleRange::content() const {
  // @@protoc_insertion_point(field_list:vanilla.DoubleRange.content)
  return content_;
}
inline ::google::protobuf::RepeatedField< double >*
DoubleRange::mutable_content() {
  // @@protoc_insertion_point(field_mutable_list:vanilla.DoubleRange.content)
  return &content_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace vanilla

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_double_2eproto