// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages.proto

#ifndef PROTOBUF_INCLUDED_messages_2eproto
#define PROTOBUF_INCLUDED_messages_2eproto

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
#include "validate/validate.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_messages_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_messages_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_messages_2eproto();
namespace pgv {
class MessagesRangeRequired;
class MessagesRangeRequiredDefaultTypeInternal;
extern MessagesRangeRequiredDefaultTypeInternal _MessagesRangeRequired_default_instance_;
class MessagesRangeRequired_Child;
class MessagesRangeRequired_ChildDefaultTypeInternal;
extern MessagesRangeRequired_ChildDefaultTypeInternal _MessagesRangeRequired_Child_default_instance_;
}  // namespace pgv
namespace google {
namespace protobuf {
template<> ::pgv::MessagesRangeRequired* Arena::CreateMaybeMessage<::pgv::MessagesRangeRequired>(Arena*);
template<> ::pgv::MessagesRangeRequired_Child* Arena::CreateMaybeMessage<::pgv::MessagesRangeRequired_Child>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace pgv {

// ===================================================================

class MessagesRangeRequired_Child final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:pgv.MessagesRangeRequired.Child) */ {
 public:
  MessagesRangeRequired_Child();
  virtual ~MessagesRangeRequired_Child();

  MessagesRangeRequired_Child(const MessagesRangeRequired_Child& from);

  inline MessagesRangeRequired_Child& operator=(const MessagesRangeRequired_Child& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MessagesRangeRequired_Child(MessagesRangeRequired_Child&& from) noexcept
    : MessagesRangeRequired_Child() {
    *this = ::std::move(from);
  }

  inline MessagesRangeRequired_Child& operator=(MessagesRangeRequired_Child&& from) noexcept {
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
  static const MessagesRangeRequired_Child& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MessagesRangeRequired_Child* internal_default_instance() {
    return reinterpret_cast<const MessagesRangeRequired_Child*>(
               &_MessagesRangeRequired_Child_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(MessagesRangeRequired_Child* other);
  friend void swap(MessagesRangeRequired_Child& a, MessagesRangeRequired_Child& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MessagesRangeRequired_Child* New() const final {
    return CreateMaybeMessage<MessagesRangeRequired_Child>(nullptr);
  }

  MessagesRangeRequired_Child* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<MessagesRangeRequired_Child>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const MessagesRangeRequired_Child& from);
  void MergeFrom(const MessagesRangeRequired_Child& from);
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
  void InternalSwap(MessagesRangeRequired_Child* other);
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

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:pgv.MessagesRangeRequired.Child)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_messages_2eproto;
};
// -------------------------------------------------------------------

class MessagesRangeRequired final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:pgv.MessagesRangeRequired) */ {
 public:
  MessagesRangeRequired();
  virtual ~MessagesRangeRequired();

  MessagesRangeRequired(const MessagesRangeRequired& from);

  inline MessagesRangeRequired& operator=(const MessagesRangeRequired& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MessagesRangeRequired(MessagesRangeRequired&& from) noexcept
    : MessagesRangeRequired() {
    *this = ::std::move(from);
  }

  inline MessagesRangeRequired& operator=(MessagesRangeRequired&& from) noexcept {
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
  static const MessagesRangeRequired& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MessagesRangeRequired* internal_default_instance() {
    return reinterpret_cast<const MessagesRangeRequired*>(
               &_MessagesRangeRequired_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(MessagesRangeRequired* other);
  friend void swap(MessagesRangeRequired& a, MessagesRangeRequired& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MessagesRangeRequired* New() const final {
    return CreateMaybeMessage<MessagesRangeRequired>(nullptr);
  }

  MessagesRangeRequired* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<MessagesRangeRequired>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const MessagesRangeRequired& from);
  void MergeFrom(const MessagesRangeRequired& from);
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
  void InternalSwap(MessagesRangeRequired* other);
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

  typedef MessagesRangeRequired_Child Child;

  // accessors -------------------------------------------------------

  // repeated .pgv.MessagesRangeRequired.Child content = 1 [(.validate.rules) = {
  int content_size() const;
  void clear_content();
  static const int kContentFieldNumber = 1;
  ::pgv::MessagesRangeRequired_Child* mutable_content(int index);
  ::google::protobuf::RepeatedPtrField< ::pgv::MessagesRangeRequired_Child >*
      mutable_content();
  const ::pgv::MessagesRangeRequired_Child& content(int index) const;
  ::pgv::MessagesRangeRequired_Child* add_content();
  const ::google::protobuf::RepeatedPtrField< ::pgv::MessagesRangeRequired_Child >&
      content() const;

  // @@protoc_insertion_point(class_scope:pgv.MessagesRangeRequired)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::pgv::MessagesRangeRequired_Child > content_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_messages_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MessagesRangeRequired_Child

// string name = 1;
inline void MessagesRangeRequired_Child::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MessagesRangeRequired_Child::name() const {
  // @@protoc_insertion_point(field_get:pgv.MessagesRangeRequired.Child.name)
  return name_.GetNoArena();
}
inline void MessagesRangeRequired_Child::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pgv.MessagesRangeRequired.Child.name)
}
#if LANG_CXX11
inline void MessagesRangeRequired_Child::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pgv.MessagesRangeRequired.Child.name)
}
#endif
inline void MessagesRangeRequired_Child::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pgv.MessagesRangeRequired.Child.name)
}
inline void MessagesRangeRequired_Child::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pgv.MessagesRangeRequired.Child.name)
}
inline ::std::string* MessagesRangeRequired_Child::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:pgv.MessagesRangeRequired.Child.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MessagesRangeRequired_Child::release_name() {
  // @@protoc_insertion_point(field_release:pgv.MessagesRangeRequired.Child.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessagesRangeRequired_Child::set_allocated_name(::std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:pgv.MessagesRangeRequired.Child.name)
}

// -------------------------------------------------------------------

// MessagesRangeRequired

// repeated .pgv.MessagesRangeRequired.Child content = 1 [(.validate.rules) = {
inline int MessagesRangeRequired::content_size() const {
  return content_.size();
}
inline void MessagesRangeRequired::clear_content() {
  content_.Clear();
}
inline ::pgv::MessagesRangeRequired_Child* MessagesRangeRequired::mutable_content(int index) {
  // @@protoc_insertion_point(field_mutable:pgv.MessagesRangeRequired.content)
  return content_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::pgv::MessagesRangeRequired_Child >*
MessagesRangeRequired::mutable_content() {
  // @@protoc_insertion_point(field_mutable_list:pgv.MessagesRangeRequired.content)
  return &content_;
}
inline const ::pgv::MessagesRangeRequired_Child& MessagesRangeRequired::content(int index) const {
  // @@protoc_insertion_point(field_get:pgv.MessagesRangeRequired.content)
  return content_.Get(index);
}
inline ::pgv::MessagesRangeRequired_Child* MessagesRangeRequired::add_content() {
  // @@protoc_insertion_point(field_add:pgv.MessagesRangeRequired.content)
  return content_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::pgv::MessagesRangeRequired_Child >&
MessagesRangeRequired::content() const {
  // @@protoc_insertion_point(field_list:pgv.MessagesRangeRequired.content)
  return content_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace pgv

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_messages_2eproto