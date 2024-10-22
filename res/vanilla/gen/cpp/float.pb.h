// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: float.proto

#ifndef PROTOBUF_float_2eproto__INCLUDED
#define PROTOBUF_float_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace vanilla {
class FloatRange;
class FloatRangeDefaultTypeInternal;
extern FloatRangeDefaultTypeInternal _FloatRange_default_instance_;
}  // namespace vanilla

namespace vanilla {

namespace protobuf_float_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_float_2eproto

// ===================================================================

class FloatRange : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:vanilla.FloatRange) */ {
 public:
  FloatRange();
  virtual ~FloatRange();

  FloatRange(const FloatRange& from);

  inline FloatRange& operator=(const FloatRange& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  FloatRange(FloatRange&& from) noexcept
    : FloatRange() {
    *this = ::std::move(from);
  }

  inline FloatRange& operator=(FloatRange&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const FloatRange& default_instance();

  static inline const FloatRange* internal_default_instance() {
    return reinterpret_cast<const FloatRange*>(
               &_FloatRange_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(FloatRange* other);
  friend void swap(FloatRange& a, FloatRange& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline FloatRange* New() const PROTOBUF_FINAL { return New(NULL); }

  FloatRange* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const FloatRange& from);
  void MergeFrom(const FloatRange& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(FloatRange* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated float content = 1;
  int content_size() const;
  void clear_content();
  static const int kContentFieldNumber = 1;
  float content(int index) const;
  void set_content(int index, float value);
  void add_content(float value);
  const ::google::protobuf::RepeatedField< float >&
      content() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_content();

  // @@protoc_insertion_point(class_scope:vanilla.FloatRange)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< float > content_;
  mutable int _content_cached_byte_size_;
  mutable int _cached_size_;
  friend struct protobuf_float_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FloatRange

// repeated float content = 1;
inline int FloatRange::content_size() const {
  return content_.size();
}
inline void FloatRange::clear_content() {
  content_.Clear();
}
inline float FloatRange::content(int index) const {
  // @@protoc_insertion_point(field_get:vanilla.FloatRange.content)
  return content_.Get(index);
}
inline void FloatRange::set_content(int index, float value) {
  content_.Set(index, value);
  // @@protoc_insertion_point(field_set:vanilla.FloatRange.content)
}
inline void FloatRange::add_content(float value) {
  content_.Add(value);
  // @@protoc_insertion_point(field_add:vanilla.FloatRange.content)
}
inline const ::google::protobuf::RepeatedField< float >&
FloatRange::content() const {
  // @@protoc_insertion_point(field_list:vanilla.FloatRange.content)
  return content_;
}
inline ::google::protobuf::RepeatedField< float >*
FloatRange::mutable_content() {
  // @@protoc_insertion_point(field_mutable_list:vanilla.FloatRange.content)
  return &content_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace vanilla

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_float_2eproto__INCLUDED
