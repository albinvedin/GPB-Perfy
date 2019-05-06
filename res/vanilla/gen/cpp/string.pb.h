// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: string.proto

#ifndef PROTOBUF_INCLUDED_string_2eproto
#define PROTOBUF_INCLUDED_string_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_string_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_string_2eproto {
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
void AddDescriptors_string_2eproto();
namespace vanilla {
class StringRange;
class StringRangeDefaultTypeInternal;
extern StringRangeDefaultTypeInternal _StringRange_default_instance_;
}  // namespace vanilla
namespace google {
namespace protobuf {
template<> ::vanilla::StringRange* Arena::CreateMaybeMessage<::vanilla::StringRange>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace vanilla {

// ===================================================================

class StringRange final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:vanilla.StringRange) */ {
 public:
  StringRange();
  virtual ~StringRange();

  StringRange(const StringRange& from);

  inline StringRange& operator=(const StringRange& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  StringRange(StringRange&& from) noexcept
    : StringRange() {
    *this = ::std::move(from);
  }

  inline StringRange& operator=(StringRange&& from) noexcept {
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
  static const StringRange& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StringRange* internal_default_instance() {
    return reinterpret_cast<const StringRange*>(
               &_StringRange_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(StringRange* other);
  friend void swap(StringRange& a, StringRange& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline StringRange* New() const final {
    return CreateMaybeMessage<StringRange>(nullptr);
  }

  StringRange* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<StringRange>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const StringRange& from);
  void MergeFrom(const StringRange& from);
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
  void InternalSwap(StringRange* other);
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

  // repeated string content = 1;
  int content_size() const;
  void clear_content();
  static const int kContentFieldNumber = 1;
  const ::std::string& content(int index) const;
  ::std::string* mutable_content(int index);
  void set_content(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_content(int index, ::std::string&& value);
  #endif
  void set_content(int index, const char* value);
  void set_content(int index, const char* value, size_t size);
  ::std::string* add_content();
  void add_content(const ::std::string& value);
  #if LANG_CXX11
  void add_content(::std::string&& value);
  #endif
  void add_content(const char* value);
  void add_content(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField<::std::string>& content() const;
  ::google::protobuf::RepeatedPtrField<::std::string>* mutable_content();

  // @@protoc_insertion_point(class_scope:vanilla.StringRange)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField<::std::string> content_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_string_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StringRange

// repeated string content = 1;
inline int StringRange::content_size() const {
  return content_.size();
}
inline void StringRange::clear_content() {
  content_.Clear();
}
inline const ::std::string& StringRange::content(int index) const {
  // @@protoc_insertion_point(field_get:vanilla.StringRange.content)
  return content_.Get(index);
}
inline ::std::string* StringRange::mutable_content(int index) {
  // @@protoc_insertion_point(field_mutable:vanilla.StringRange.content)
  return content_.Mutable(index);
}
inline void StringRange::set_content(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:vanilla.StringRange.content)
  content_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void StringRange::set_content(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:vanilla.StringRange.content)
  content_.Mutable(index)->assign(std::move(value));
}
#endif
inline void StringRange::set_content(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  content_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:vanilla.StringRange.content)
}
inline void StringRange::set_content(int index, const char* value, size_t size) {
  content_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:vanilla.StringRange.content)
}
inline ::std::string* StringRange::add_content() {
  // @@protoc_insertion_point(field_add_mutable:vanilla.StringRange.content)
  return content_.Add();
}
inline void StringRange::add_content(const ::std::string& value) {
  content_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:vanilla.StringRange.content)
}
#if LANG_CXX11
inline void StringRange::add_content(::std::string&& value) {
  content_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:vanilla.StringRange.content)
}
#endif
inline void StringRange::add_content(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  content_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:vanilla.StringRange.content)
}
inline void StringRange::add_content(const char* value, size_t size) {
  content_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:vanilla.StringRange.content)
}
inline const ::google::protobuf::RepeatedPtrField<::std::string>&
StringRange::content() const {
  // @@protoc_insertion_point(field_list:vanilla.StringRange.content)
  return content_;
}
inline ::google::protobuf::RepeatedPtrField<::std::string>*
StringRange::mutable_content() {
  // @@protoc_insertion_point(field_mutable_list:vanilla.StringRange.content)
  return &content_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace vanilla

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_string_2eproto