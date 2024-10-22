// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bytes.proto

#ifndef PROTOBUF_bytes_2eproto__INCLUDED
#define PROTOBUF_bytes_2eproto__INCLUDED

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
#include "validate/validate.pb.h"
// @@protoc_insertion_point(includes)
namespace pgv {
class BytesRangeConst;
class BytesRangeConstDefaultTypeInternal;
extern BytesRangeConstDefaultTypeInternal _BytesRangeConst_default_instance_;
class BytesRangeContains;
class BytesRangeContainsDefaultTypeInternal;
extern BytesRangeContainsDefaultTypeInternal _BytesRangeContains_default_instance_;
class BytesRangeMaxLen;
class BytesRangeMaxLenDefaultTypeInternal;
extern BytesRangeMaxLenDefaultTypeInternal _BytesRangeMaxLen_default_instance_;
class BytesRangeMinLen;
class BytesRangeMinLenDefaultTypeInternal;
extern BytesRangeMinLenDefaultTypeInternal _BytesRangeMinLen_default_instance_;
class BytesRangePrefix;
class BytesRangePrefixDefaultTypeInternal;
extern BytesRangePrefixDefaultTypeInternal _BytesRangePrefix_default_instance_;
}  // namespace pgv

namespace pgv {

namespace protobuf_bytes_2eproto {
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
}  // namespace protobuf_bytes_2eproto

// ===================================================================

class BytesRangeMaxLen : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:pgv.BytesRangeMaxLen) */ {
 public:
  BytesRangeMaxLen();
  virtual ~BytesRangeMaxLen();

  BytesRangeMaxLen(const BytesRangeMaxLen& from);

  inline BytesRangeMaxLen& operator=(const BytesRangeMaxLen& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BytesRangeMaxLen(BytesRangeMaxLen&& from) noexcept
    : BytesRangeMaxLen() {
    *this = ::std::move(from);
  }

  inline BytesRangeMaxLen& operator=(BytesRangeMaxLen&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BytesRangeMaxLen& default_instance();

  static inline const BytesRangeMaxLen* internal_default_instance() {
    return reinterpret_cast<const BytesRangeMaxLen*>(
               &_BytesRangeMaxLen_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(BytesRangeMaxLen* other);
  friend void swap(BytesRangeMaxLen& a, BytesRangeMaxLen& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BytesRangeMaxLen* New() const PROTOBUF_FINAL { return New(NULL); }

  BytesRangeMaxLen* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const BytesRangeMaxLen& from);
  void MergeFrom(const BytesRangeMaxLen& from);
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
  void InternalSwap(BytesRangeMaxLen* other);
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

  // repeated bytes content = 1 [(.validate.rules) = {
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
  void set_content(int index, const void* value, size_t size);
  ::std::string* add_content();
  void add_content(const ::std::string& value);
  #if LANG_CXX11
  void add_content(::std::string&& value);
  #endif
  void add_content(const char* value);
  void add_content(const void* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& content() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_content();

  // @@protoc_insertion_point(class_scope:pgv.BytesRangeMaxLen)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> content_;
  mutable int _cached_size_;
  friend struct protobuf_bytes_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class BytesRangeMinLen : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:pgv.BytesRangeMinLen) */ {
 public:
  BytesRangeMinLen();
  virtual ~BytesRangeMinLen();

  BytesRangeMinLen(const BytesRangeMinLen& from);

  inline BytesRangeMinLen& operator=(const BytesRangeMinLen& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BytesRangeMinLen(BytesRangeMinLen&& from) noexcept
    : BytesRangeMinLen() {
    *this = ::std::move(from);
  }

  inline BytesRangeMinLen& operator=(BytesRangeMinLen&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BytesRangeMinLen& default_instance();

  static inline const BytesRangeMinLen* internal_default_instance() {
    return reinterpret_cast<const BytesRangeMinLen*>(
               &_BytesRangeMinLen_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(BytesRangeMinLen* other);
  friend void swap(BytesRangeMinLen& a, BytesRangeMinLen& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BytesRangeMinLen* New() const PROTOBUF_FINAL { return New(NULL); }

  BytesRangeMinLen* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const BytesRangeMinLen& from);
  void MergeFrom(const BytesRangeMinLen& from);
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
  void InternalSwap(BytesRangeMinLen* other);
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

  // repeated bytes content = 1 [(.validate.rules) = {
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
  void set_content(int index, const void* value, size_t size);
  ::std::string* add_content();
  void add_content(const ::std::string& value);
  #if LANG_CXX11
  void add_content(::std::string&& value);
  #endif
  void add_content(const char* value);
  void add_content(const void* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& content() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_content();

  // @@protoc_insertion_point(class_scope:pgv.BytesRangeMinLen)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> content_;
  mutable int _cached_size_;
  friend struct protobuf_bytes_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class BytesRangePrefix : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:pgv.BytesRangePrefix) */ {
 public:
  BytesRangePrefix();
  virtual ~BytesRangePrefix();

  BytesRangePrefix(const BytesRangePrefix& from);

  inline BytesRangePrefix& operator=(const BytesRangePrefix& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BytesRangePrefix(BytesRangePrefix&& from) noexcept
    : BytesRangePrefix() {
    *this = ::std::move(from);
  }

  inline BytesRangePrefix& operator=(BytesRangePrefix&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BytesRangePrefix& default_instance();

  static inline const BytesRangePrefix* internal_default_instance() {
    return reinterpret_cast<const BytesRangePrefix*>(
               &_BytesRangePrefix_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(BytesRangePrefix* other);
  friend void swap(BytesRangePrefix& a, BytesRangePrefix& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BytesRangePrefix* New() const PROTOBUF_FINAL { return New(NULL); }

  BytesRangePrefix* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const BytesRangePrefix& from);
  void MergeFrom(const BytesRangePrefix& from);
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
  void InternalSwap(BytesRangePrefix* other);
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

  // repeated bytes content = 1 [(.validate.rules) = {
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
  void set_content(int index, const void* value, size_t size);
  ::std::string* add_content();
  void add_content(const ::std::string& value);
  #if LANG_CXX11
  void add_content(::std::string&& value);
  #endif
  void add_content(const char* value);
  void add_content(const void* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& content() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_content();

  // @@protoc_insertion_point(class_scope:pgv.BytesRangePrefix)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> content_;
  mutable int _cached_size_;
  friend struct protobuf_bytes_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class BytesRangeContains : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:pgv.BytesRangeContains) */ {
 public:
  BytesRangeContains();
  virtual ~BytesRangeContains();

  BytesRangeContains(const BytesRangeContains& from);

  inline BytesRangeContains& operator=(const BytesRangeContains& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BytesRangeContains(BytesRangeContains&& from) noexcept
    : BytesRangeContains() {
    *this = ::std::move(from);
  }

  inline BytesRangeContains& operator=(BytesRangeContains&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BytesRangeContains& default_instance();

  static inline const BytesRangeContains* internal_default_instance() {
    return reinterpret_cast<const BytesRangeContains*>(
               &_BytesRangeContains_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(BytesRangeContains* other);
  friend void swap(BytesRangeContains& a, BytesRangeContains& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BytesRangeContains* New() const PROTOBUF_FINAL { return New(NULL); }

  BytesRangeContains* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const BytesRangeContains& from);
  void MergeFrom(const BytesRangeContains& from);
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
  void InternalSwap(BytesRangeContains* other);
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

  // repeated bytes content = 1 [(.validate.rules) = {
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
  void set_content(int index, const void* value, size_t size);
  ::std::string* add_content();
  void add_content(const ::std::string& value);
  #if LANG_CXX11
  void add_content(::std::string&& value);
  #endif
  void add_content(const char* value);
  void add_content(const void* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& content() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_content();

  // @@protoc_insertion_point(class_scope:pgv.BytesRangeContains)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> content_;
  mutable int _cached_size_;
  friend struct protobuf_bytes_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class BytesRangeConst : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:pgv.BytesRangeConst) */ {
 public:
  BytesRangeConst();
  virtual ~BytesRangeConst();

  BytesRangeConst(const BytesRangeConst& from);

  inline BytesRangeConst& operator=(const BytesRangeConst& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BytesRangeConst(BytesRangeConst&& from) noexcept
    : BytesRangeConst() {
    *this = ::std::move(from);
  }

  inline BytesRangeConst& operator=(BytesRangeConst&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const BytesRangeConst& default_instance();

  static inline const BytesRangeConst* internal_default_instance() {
    return reinterpret_cast<const BytesRangeConst*>(
               &_BytesRangeConst_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    4;

  void Swap(BytesRangeConst* other);
  friend void swap(BytesRangeConst& a, BytesRangeConst& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BytesRangeConst* New() const PROTOBUF_FINAL { return New(NULL); }

  BytesRangeConst* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const BytesRangeConst& from);
  void MergeFrom(const BytesRangeConst& from);
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
  void InternalSwap(BytesRangeConst* other);
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

  // repeated bytes content = 1 [(.validate.rules) = {
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
  void set_content(int index, const void* value, size_t size);
  ::std::string* add_content();
  void add_content(const ::std::string& value);
  #if LANG_CXX11
  void add_content(::std::string&& value);
  #endif
  void add_content(const char* value);
  void add_content(const void* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& content() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_content();

  // @@protoc_insertion_point(class_scope:pgv.BytesRangeConst)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> content_;
  mutable int _cached_size_;
  friend struct protobuf_bytes_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BytesRangeMaxLen

// repeated bytes content = 1 [(.validate.rules) = {
inline int BytesRangeMaxLen::content_size() const {
  return content_.size();
}
inline void BytesRangeMaxLen::clear_content() {
  content_.Clear();
}
inline const ::std::string& BytesRangeMaxLen::content(int index) const {
  // @@protoc_insertion_point(field_get:pgv.BytesRangeMaxLen.content)
  return content_.Get(index);
}
inline ::std::string* BytesRangeMaxLen::mutable_content(int index) {
  // @@protoc_insertion_point(field_mutable:pgv.BytesRangeMaxLen.content)
  return content_.Mutable(index);
}
inline void BytesRangeMaxLen::set_content(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:pgv.BytesRangeMaxLen.content)
  content_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void BytesRangeMaxLen::set_content(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:pgv.BytesRangeMaxLen.content)
  content_.Mutable(index)->assign(std::move(value));
}
#endif
inline void BytesRangeMaxLen::set_content(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  content_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:pgv.BytesRangeMaxLen.content)
}
inline void BytesRangeMaxLen::set_content(int index, const void* value, size_t size) {
  content_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:pgv.BytesRangeMaxLen.content)
}
inline ::std::string* BytesRangeMaxLen::add_content() {
  // @@protoc_insertion_point(field_add_mutable:pgv.BytesRangeMaxLen.content)
  return content_.Add();
}
inline void BytesRangeMaxLen::add_content(const ::std::string& value) {
  content_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:pgv.BytesRangeMaxLen.content)
}
#if LANG_CXX11
inline void BytesRangeMaxLen::add_content(::std::string&& value) {
  content_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:pgv.BytesRangeMaxLen.content)
}
#endif
inline void BytesRangeMaxLen::add_content(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  content_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:pgv.BytesRangeMaxLen.content)
}
inline void BytesRangeMaxLen::add_content(const void* value, size_t size) {
  content_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:pgv.BytesRangeMaxLen.content)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
BytesRangeMaxLen::content() const {
  // @@protoc_insertion_point(field_list:pgv.BytesRangeMaxLen.content)
  return content_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
BytesRangeMaxLen::mutable_content() {
  // @@protoc_insertion_point(field_mutable_list:pgv.BytesRangeMaxLen.content)
  return &content_;
}

// -------------------------------------------------------------------

// BytesRangeMinLen

// repeated bytes content = 1 [(.validate.rules) = {
inline int BytesRangeMinLen::content_size() const {
  return content_.size();
}
inline void BytesRangeMinLen::clear_content() {
  content_.Clear();
}
inline const ::std::string& BytesRangeMinLen::content(int index) const {
  // @@protoc_insertion_point(field_get:pgv.BytesRangeMinLen.content)
  return content_.Get(index);
}
inline ::std::string* BytesRangeMinLen::mutable_content(int index) {
  // @@protoc_insertion_point(field_mutable:pgv.BytesRangeMinLen.content)
  return content_.Mutable(index);
}
inline void BytesRangeMinLen::set_content(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:pgv.BytesRangeMinLen.content)
  content_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void BytesRangeMinLen::set_content(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:pgv.BytesRangeMinLen.content)
  content_.Mutable(index)->assign(std::move(value));
}
#endif
inline void BytesRangeMinLen::set_content(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  content_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:pgv.BytesRangeMinLen.content)
}
inline void BytesRangeMinLen::set_content(int index, const void* value, size_t size) {
  content_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:pgv.BytesRangeMinLen.content)
}
inline ::std::string* BytesRangeMinLen::add_content() {
  // @@protoc_insertion_point(field_add_mutable:pgv.BytesRangeMinLen.content)
  return content_.Add();
}
inline void BytesRangeMinLen::add_content(const ::std::string& value) {
  content_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:pgv.BytesRangeMinLen.content)
}
#if LANG_CXX11
inline void BytesRangeMinLen::add_content(::std::string&& value) {
  content_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:pgv.BytesRangeMinLen.content)
}
#endif
inline void BytesRangeMinLen::add_content(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  content_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:pgv.BytesRangeMinLen.content)
}
inline void BytesRangeMinLen::add_content(const void* value, size_t size) {
  content_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:pgv.BytesRangeMinLen.content)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
BytesRangeMinLen::content() const {
  // @@protoc_insertion_point(field_list:pgv.BytesRangeMinLen.content)
  return content_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
BytesRangeMinLen::mutable_content() {
  // @@protoc_insertion_point(field_mutable_list:pgv.BytesRangeMinLen.content)
  return &content_;
}

// -------------------------------------------------------------------

// BytesRangePrefix

// repeated bytes content = 1 [(.validate.rules) = {
inline int BytesRangePrefix::content_size() const {
  return content_.size();
}
inline void BytesRangePrefix::clear_content() {
  content_.Clear();
}
inline const ::std::string& BytesRangePrefix::content(int index) const {
  // @@protoc_insertion_point(field_get:pgv.BytesRangePrefix.content)
  return content_.Get(index);
}
inline ::std::string* BytesRangePrefix::mutable_content(int index) {
  // @@protoc_insertion_point(field_mutable:pgv.BytesRangePrefix.content)
  return content_.Mutable(index);
}
inline void BytesRangePrefix::set_content(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:pgv.BytesRangePrefix.content)
  content_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void BytesRangePrefix::set_content(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:pgv.BytesRangePrefix.content)
  content_.Mutable(index)->assign(std::move(value));
}
#endif
inline void BytesRangePrefix::set_content(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  content_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:pgv.BytesRangePrefix.content)
}
inline void BytesRangePrefix::set_content(int index, const void* value, size_t size) {
  content_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:pgv.BytesRangePrefix.content)
}
inline ::std::string* BytesRangePrefix::add_content() {
  // @@protoc_insertion_point(field_add_mutable:pgv.BytesRangePrefix.content)
  return content_.Add();
}
inline void BytesRangePrefix::add_content(const ::std::string& value) {
  content_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:pgv.BytesRangePrefix.content)
}
#if LANG_CXX11
inline void BytesRangePrefix::add_content(::std::string&& value) {
  content_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:pgv.BytesRangePrefix.content)
}
#endif
inline void BytesRangePrefix::add_content(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  content_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:pgv.BytesRangePrefix.content)
}
inline void BytesRangePrefix::add_content(const void* value, size_t size) {
  content_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:pgv.BytesRangePrefix.content)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
BytesRangePrefix::content() const {
  // @@protoc_insertion_point(field_list:pgv.BytesRangePrefix.content)
  return content_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
BytesRangePrefix::mutable_content() {
  // @@protoc_insertion_point(field_mutable_list:pgv.BytesRangePrefix.content)
  return &content_;
}

// -------------------------------------------------------------------

// BytesRangeContains

// repeated bytes content = 1 [(.validate.rules) = {
inline int BytesRangeContains::content_size() const {
  return content_.size();
}
inline void BytesRangeContains::clear_content() {
  content_.Clear();
}
inline const ::std::string& BytesRangeContains::content(int index) const {
  // @@protoc_insertion_point(field_get:pgv.BytesRangeContains.content)
  return content_.Get(index);
}
inline ::std::string* BytesRangeContains::mutable_content(int index) {
  // @@protoc_insertion_point(field_mutable:pgv.BytesRangeContains.content)
  return content_.Mutable(index);
}
inline void BytesRangeContains::set_content(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:pgv.BytesRangeContains.content)
  content_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void BytesRangeContains::set_content(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:pgv.BytesRangeContains.content)
  content_.Mutable(index)->assign(std::move(value));
}
#endif
inline void BytesRangeContains::set_content(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  content_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:pgv.BytesRangeContains.content)
}
inline void BytesRangeContains::set_content(int index, const void* value, size_t size) {
  content_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:pgv.BytesRangeContains.content)
}
inline ::std::string* BytesRangeContains::add_content() {
  // @@protoc_insertion_point(field_add_mutable:pgv.BytesRangeContains.content)
  return content_.Add();
}
inline void BytesRangeContains::add_content(const ::std::string& value) {
  content_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:pgv.BytesRangeContains.content)
}
#if LANG_CXX11
inline void BytesRangeContains::add_content(::std::string&& value) {
  content_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:pgv.BytesRangeContains.content)
}
#endif
inline void BytesRangeContains::add_content(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  content_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:pgv.BytesRangeContains.content)
}
inline void BytesRangeContains::add_content(const void* value, size_t size) {
  content_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:pgv.BytesRangeContains.content)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
BytesRangeContains::content() const {
  // @@protoc_insertion_point(field_list:pgv.BytesRangeContains.content)
  return content_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
BytesRangeContains::mutable_content() {
  // @@protoc_insertion_point(field_mutable_list:pgv.BytesRangeContains.content)
  return &content_;
}

// -------------------------------------------------------------------

// BytesRangeConst

// repeated bytes content = 1 [(.validate.rules) = {
inline int BytesRangeConst::content_size() const {
  return content_.size();
}
inline void BytesRangeConst::clear_content() {
  content_.Clear();
}
inline const ::std::string& BytesRangeConst::content(int index) const {
  // @@protoc_insertion_point(field_get:pgv.BytesRangeConst.content)
  return content_.Get(index);
}
inline ::std::string* BytesRangeConst::mutable_content(int index) {
  // @@protoc_insertion_point(field_mutable:pgv.BytesRangeConst.content)
  return content_.Mutable(index);
}
inline void BytesRangeConst::set_content(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:pgv.BytesRangeConst.content)
  content_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void BytesRangeConst::set_content(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:pgv.BytesRangeConst.content)
  content_.Mutable(index)->assign(std::move(value));
}
#endif
inline void BytesRangeConst::set_content(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  content_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:pgv.BytesRangeConst.content)
}
inline void BytesRangeConst::set_content(int index, const void* value, size_t size) {
  content_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:pgv.BytesRangeConst.content)
}
inline ::std::string* BytesRangeConst::add_content() {
  // @@protoc_insertion_point(field_add_mutable:pgv.BytesRangeConst.content)
  return content_.Add();
}
inline void BytesRangeConst::add_content(const ::std::string& value) {
  content_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:pgv.BytesRangeConst.content)
}
#if LANG_CXX11
inline void BytesRangeConst::add_content(::std::string&& value) {
  content_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:pgv.BytesRangeConst.content)
}
#endif
inline void BytesRangeConst::add_content(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  content_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:pgv.BytesRangeConst.content)
}
inline void BytesRangeConst::add_content(const void* value, size_t size) {
  content_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:pgv.BytesRangeConst.content)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
BytesRangeConst::content() const {
  // @@protoc_insertion_point(field_list:pgv.BytesRangeConst.content)
  return content_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
BytesRangeConst::mutable_content() {
  // @@protoc_insertion_point(field_mutable_list:pgv.BytesRangeConst.content)
  return &content_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace pgv

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_bytes_2eproto__INCLUDED
