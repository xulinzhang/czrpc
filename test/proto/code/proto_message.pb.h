// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto_message.proto

#ifndef PROTOBUF_proto_5fmessage_2eproto__INCLUDED
#define PROTOBUF_proto_5fmessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_proto_5fmessage_2eproto();
void protobuf_AssignDesc_proto_5fmessage_2eproto();
void protobuf_ShutdownFile_proto_5fmessage_2eproto();

class request_person_info_message;
class response_person_info_message;

// ===================================================================

class request_person_info_message : public ::google::protobuf::Message {
 public:
  request_person_info_message();
  virtual ~request_person_info_message();

  request_person_info_message(const request_person_info_message& from);

  inline request_person_info_message& operator=(const request_person_info_message& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const request_person_info_message& default_instance();

  void Swap(request_person_info_message* other);

  // implements Message ----------------------------------------------

  request_person_info_message* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const request_person_info_message& from);
  void MergeFrom(const request_person_info_message& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required int32 age = 2;
  inline bool has_age() const;
  inline void clear_age();
  static const int kAgeFieldNumber = 2;
  inline ::google::protobuf::int32 age() const;
  inline void set_age(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:request_person_info_message)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_age();
  inline void clear_has_age();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::google::protobuf::int32 age_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_proto_5fmessage_2eproto();
  friend void protobuf_AssignDesc_proto_5fmessage_2eproto();
  friend void protobuf_ShutdownFile_proto_5fmessage_2eproto();

  void InitAsDefaultInstance();
  static request_person_info_message* default_instance_;
};
// -------------------------------------------------------------------

class response_person_info_message : public ::google::protobuf::Message {
 public:
  response_person_info_message();
  virtual ~response_person_info_message();

  response_person_info_message(const response_person_info_message& from);

  inline response_person_info_message& operator=(const response_person_info_message& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const response_person_info_message& default_instance();

  void Swap(response_person_info_message* other);

  // implements Message ----------------------------------------------

  response_person_info_message* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const response_person_info_message& from);
  void MergeFrom(const response_person_info_message& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required int32 age = 2;
  inline bool has_age() const;
  inline void clear_age();
  static const int kAgeFieldNumber = 2;
  inline ::google::protobuf::int32 age() const;
  inline void set_age(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:response_person_info_message)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_age();
  inline void clear_has_age();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::google::protobuf::int32 age_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_proto_5fmessage_2eproto();
  friend void protobuf_AssignDesc_proto_5fmessage_2eproto();
  friend void protobuf_ShutdownFile_proto_5fmessage_2eproto();

  void InitAsDefaultInstance();
  static response_person_info_message* default_instance_;
};
// ===================================================================


// ===================================================================

// request_person_info_message

// required string name = 1;
inline bool request_person_info_message::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void request_person_info_message::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void request_person_info_message::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void request_person_info_message::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& request_person_info_message::name() const {
  return *name_;
}
inline void request_person_info_message::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void request_person_info_message::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void request_person_info_message::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* request_person_info_message::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* request_person_info_message::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void request_person_info_message::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required int32 age = 2;
inline bool request_person_info_message::has_age() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void request_person_info_message::set_has_age() {
  _has_bits_[0] |= 0x00000002u;
}
inline void request_person_info_message::clear_has_age() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void request_person_info_message::clear_age() {
  age_ = 0;
  clear_has_age();
}
inline ::google::protobuf::int32 request_person_info_message::age() const {
  return age_;
}
inline void request_person_info_message::set_age(::google::protobuf::int32 value) {
  set_has_age();
  age_ = value;
}

// -------------------------------------------------------------------

// response_person_info_message

// required string name = 1;
inline bool response_person_info_message::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void response_person_info_message::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void response_person_info_message::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void response_person_info_message::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& response_person_info_message::name() const {
  return *name_;
}
inline void response_person_info_message::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void response_person_info_message::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void response_person_info_message::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* response_person_info_message::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* response_person_info_message::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void response_person_info_message::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required int32 age = 2;
inline bool response_person_info_message::has_age() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void response_person_info_message::set_has_age() {
  _has_bits_[0] |= 0x00000002u;
}
inline void response_person_info_message::clear_has_age() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void response_person_info_message::clear_age() {
  age_ = 0;
  clear_has_age();
}
inline ::google::protobuf::int32 response_person_info_message::age() const {
  return age_;
}
inline void response_person_info_message::set_age(::google::protobuf::int32 value) {
  set_has_age();
  age_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_proto_5fmessage_2eproto__INCLUDED