// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_maidsafe_5fmessages_2eproto__INCLUDED
#define PROTOBUF_maidsafe_5fmessages_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>

namespace maidsafe {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_maidsafe_5fmessages_2eproto();
void protobuf_AssignDesc_maidsafe_5fmessages_2eproto();
void protobuf_ShutdownFile_maidsafe_5fmessages_2eproto();

class GenericResponse;
class VaultConfig;

// ===================================================================

class GenericResponse : public ::google::protobuf::Message {
 public:
  GenericResponse();
  virtual ~GenericResponse();
  
  GenericResponse(const GenericResponse& from);
  
  inline GenericResponse& operator=(const GenericResponse& from) {
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
  static const GenericResponse& default_instance();
  void Swap(GenericResponse* other);
  
  // implements Message ----------------------------------------------
  
  GenericResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GenericResponse& from);
  void MergeFrom(const GenericResponse& from);
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
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  const ::google::protobuf::Descriptor* GetDescriptor() const;
  const ::google::protobuf::Reflection* GetReflection() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required uint32 result = 1;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline ::google::protobuf::uint32 result() const;
  inline void set_result(::google::protobuf::uint32 value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::uint32 result_;
  friend void  protobuf_AddDesc_maidsafe_5fmessages_2eproto();
  friend void protobuf_AssignDesc_maidsafe_5fmessages_2eproto();
  friend void protobuf_ShutdownFile_maidsafe_5fmessages_2eproto();
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static GenericResponse* default_instance_;
};
// -------------------------------------------------------------------

class VaultConfig : public ::google::protobuf::Message {
 public:
  VaultConfig();
  virtual ~VaultConfig();
  
  VaultConfig(const VaultConfig& from);
  
  inline VaultConfig& operator=(const VaultConfig& from) {
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
  static const VaultConfig& default_instance();
  void Swap(VaultConfig* other);
  
  // implements Message ----------------------------------------------
  
  VaultConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const VaultConfig& from);
  void MergeFrom(const VaultConfig& from);
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
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  const ::google::protobuf::Descriptor* GetDescriptor() const;
  const ::google::protobuf::Reflection* GetReflection() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required bytes pmid_public = 1;
  inline bool has_pmid_public() const;
  inline void clear_pmid_public();
  static const int kPmidPublicFieldNumber = 1;
  inline const ::std::string& pmid_public() const;
  inline void set_pmid_public(const ::std::string& value);
  inline void set_pmid_public(const char* value);
  inline void set_pmid_public(const void* value, size_t size);
  inline ::std::string* mutable_pmid_public();
  
  // required bytes pmid_private = 2;
  inline bool has_pmid_private() const;
  inline void clear_pmid_private();
  static const int kPmidPrivateFieldNumber = 2;
  inline const ::std::string& pmid_private() const;
  inline void set_pmid_private(const ::std::string& value);
  inline void set_pmid_private(const char* value);
  inline void set_pmid_private(const void* value, size_t size);
  inline ::std::string* mutable_pmid_private();
  
  // required bytes signed_pmid_public = 3;
  inline bool has_signed_pmid_public() const;
  inline void clear_signed_pmid_public();
  static const int kSignedPmidPublicFieldNumber = 3;
  inline const ::std::string& signed_pmid_public() const;
  inline void set_signed_pmid_public(const ::std::string& value);
  inline void set_signed_pmid_public(const char* value);
  inline void set_signed_pmid_public(const void* value, size_t size);
  inline ::std::string* mutable_signed_pmid_public();
  
  // optional bytes chunkstore_dir = 4;
  inline bool has_chunkstore_dir() const;
  inline void clear_chunkstore_dir();
  static const int kChunkstoreDirFieldNumber = 4;
  inline const ::std::string& chunkstore_dir() const;
  inline void set_chunkstore_dir(const ::std::string& value);
  inline void set_chunkstore_dir(const char* value);
  inline void set_chunkstore_dir(const void* value, size_t size);
  inline ::std::string* mutable_chunkstore_dir();
  
  // optional int32 port = 5;
  inline bool has_port() const;
  inline void clear_port();
  static const int kPortFieldNumber = 5;
  inline ::google::protobuf::int32 port() const;
  inline void set_port(::google::protobuf::int32 value);
  
  // optional uint64 available_space = 6;
  inline bool has_available_space() const;
  inline void clear_available_space();
  static const int kAvailableSpaceFieldNumber = 6;
  inline ::google::protobuf::uint64 available_space() const;
  inline void set_available_space(::google::protobuf::uint64 value);
  
  // optional uint64 used_space = 7;
  inline bool has_used_space() const;
  inline void clear_used_space();
  static const int kUsedSpaceFieldNumber = 7;
  inline ::google::protobuf::uint64 used_space() const;
  inline void set_used_space(::google::protobuf::uint64 value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* pmid_public_;
  static const ::std::string _default_pmid_public_;
  ::std::string* pmid_private_;
  static const ::std::string _default_pmid_private_;
  ::std::string* signed_pmid_public_;
  static const ::std::string _default_signed_pmid_public_;
  ::std::string* chunkstore_dir_;
  static const ::std::string _default_chunkstore_dir_;
  ::google::protobuf::int32 port_;
  ::google::protobuf::uint64 available_space_;
  ::google::protobuf::uint64 used_space_;
  friend void  protobuf_AddDesc_maidsafe_5fmessages_2eproto();
  friend void protobuf_AssignDesc_maidsafe_5fmessages_2eproto();
  friend void protobuf_ShutdownFile_maidsafe_5fmessages_2eproto();
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static VaultConfig* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// GenericResponse

// required uint32 result = 1;
inline bool GenericResponse::has_result() const {
  return _has_bit(0);
}
inline void GenericResponse::clear_result() {
  result_ = 0u;
  _clear_bit(0);
}
inline ::google::protobuf::uint32 GenericResponse::result() const {
  return result_;
}
inline void GenericResponse::set_result(::google::protobuf::uint32 value) {
  _set_bit(0);
  result_ = value;
}

// -------------------------------------------------------------------

// VaultConfig

// required bytes pmid_public = 1;
inline bool VaultConfig::has_pmid_public() const {
  return _has_bit(0);
}
inline void VaultConfig::clear_pmid_public() {
  if (pmid_public_ != &_default_pmid_public_) {
    pmid_public_->clear();
  }
  _clear_bit(0);
}
inline const ::std::string& VaultConfig::pmid_public() const {
  return *pmid_public_;
}
inline void VaultConfig::set_pmid_public(const ::std::string& value) {
  _set_bit(0);
  if (pmid_public_ == &_default_pmid_public_) {
    pmid_public_ = new ::std::string;
  }
  pmid_public_->assign(value);
}
inline void VaultConfig::set_pmid_public(const char* value) {
  _set_bit(0);
  if (pmid_public_ == &_default_pmid_public_) {
    pmid_public_ = new ::std::string;
  }
  pmid_public_->assign(value);
}
inline void VaultConfig::set_pmid_public(const void* value, size_t size) {
  _set_bit(0);
  if (pmid_public_ == &_default_pmid_public_) {
    pmid_public_ = new ::std::string;
  }
  pmid_public_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* VaultConfig::mutable_pmid_public() {
  _set_bit(0);
  if (pmid_public_ == &_default_pmid_public_) {
    pmid_public_ = new ::std::string;
  }
  return pmid_public_;
}

// required bytes pmid_private = 2;
inline bool VaultConfig::has_pmid_private() const {
  return _has_bit(1);
}
inline void VaultConfig::clear_pmid_private() {
  if (pmid_private_ != &_default_pmid_private_) {
    pmid_private_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& VaultConfig::pmid_private() const {
  return *pmid_private_;
}
inline void VaultConfig::set_pmid_private(const ::std::string& value) {
  _set_bit(1);
  if (pmid_private_ == &_default_pmid_private_) {
    pmid_private_ = new ::std::string;
  }
  pmid_private_->assign(value);
}
inline void VaultConfig::set_pmid_private(const char* value) {
  _set_bit(1);
  if (pmid_private_ == &_default_pmid_private_) {
    pmid_private_ = new ::std::string;
  }
  pmid_private_->assign(value);
}
inline void VaultConfig::set_pmid_private(const void* value, size_t size) {
  _set_bit(1);
  if (pmid_private_ == &_default_pmid_private_) {
    pmid_private_ = new ::std::string;
  }
  pmid_private_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* VaultConfig::mutable_pmid_private() {
  _set_bit(1);
  if (pmid_private_ == &_default_pmid_private_) {
    pmid_private_ = new ::std::string;
  }
  return pmid_private_;
}

// required bytes signed_pmid_public = 3;
inline bool VaultConfig::has_signed_pmid_public() const {
  return _has_bit(2);
}
inline void VaultConfig::clear_signed_pmid_public() {
  if (signed_pmid_public_ != &_default_signed_pmid_public_) {
    signed_pmid_public_->clear();
  }
  _clear_bit(2);
}
inline const ::std::string& VaultConfig::signed_pmid_public() const {
  return *signed_pmid_public_;
}
inline void VaultConfig::set_signed_pmid_public(const ::std::string& value) {
  _set_bit(2);
  if (signed_pmid_public_ == &_default_signed_pmid_public_) {
    signed_pmid_public_ = new ::std::string;
  }
  signed_pmid_public_->assign(value);
}
inline void VaultConfig::set_signed_pmid_public(const char* value) {
  _set_bit(2);
  if (signed_pmid_public_ == &_default_signed_pmid_public_) {
    signed_pmid_public_ = new ::std::string;
  }
  signed_pmid_public_->assign(value);
}
inline void VaultConfig::set_signed_pmid_public(const void* value, size_t size) {
  _set_bit(2);
  if (signed_pmid_public_ == &_default_signed_pmid_public_) {
    signed_pmid_public_ = new ::std::string;
  }
  signed_pmid_public_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* VaultConfig::mutable_signed_pmid_public() {
  _set_bit(2);
  if (signed_pmid_public_ == &_default_signed_pmid_public_) {
    signed_pmid_public_ = new ::std::string;
  }
  return signed_pmid_public_;
}

// optional bytes chunkstore_dir = 4;
inline bool VaultConfig::has_chunkstore_dir() const {
  return _has_bit(3);
}
inline void VaultConfig::clear_chunkstore_dir() {
  if (chunkstore_dir_ != &_default_chunkstore_dir_) {
    chunkstore_dir_->clear();
  }
  _clear_bit(3);
}
inline const ::std::string& VaultConfig::chunkstore_dir() const {
  return *chunkstore_dir_;
}
inline void VaultConfig::set_chunkstore_dir(const ::std::string& value) {
  _set_bit(3);
  if (chunkstore_dir_ == &_default_chunkstore_dir_) {
    chunkstore_dir_ = new ::std::string;
  }
  chunkstore_dir_->assign(value);
}
inline void VaultConfig::set_chunkstore_dir(const char* value) {
  _set_bit(3);
  if (chunkstore_dir_ == &_default_chunkstore_dir_) {
    chunkstore_dir_ = new ::std::string;
  }
  chunkstore_dir_->assign(value);
}
inline void VaultConfig::set_chunkstore_dir(const void* value, size_t size) {
  _set_bit(3);
  if (chunkstore_dir_ == &_default_chunkstore_dir_) {
    chunkstore_dir_ = new ::std::string;
  }
  chunkstore_dir_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* VaultConfig::mutable_chunkstore_dir() {
  _set_bit(3);
  if (chunkstore_dir_ == &_default_chunkstore_dir_) {
    chunkstore_dir_ = new ::std::string;
  }
  return chunkstore_dir_;
}

// optional int32 port = 5;
inline bool VaultConfig::has_port() const {
  return _has_bit(4);
}
inline void VaultConfig::clear_port() {
  port_ = 0;
  _clear_bit(4);
}
inline ::google::protobuf::int32 VaultConfig::port() const {
  return port_;
}
inline void VaultConfig::set_port(::google::protobuf::int32 value) {
  _set_bit(4);
  port_ = value;
}

// optional uint64 available_space = 6;
inline bool VaultConfig::has_available_space() const {
  return _has_bit(5);
}
inline void VaultConfig::clear_available_space() {
  available_space_ = GOOGLE_ULONGLONG(0);
  _clear_bit(5);
}
inline ::google::protobuf::uint64 VaultConfig::available_space() const {
  return available_space_;
}
inline void VaultConfig::set_available_space(::google::protobuf::uint64 value) {
  _set_bit(5);
  available_space_ = value;
}

// optional uint64 used_space = 7;
inline bool VaultConfig::has_used_space() const {
  return _has_bit(6);
}
inline void VaultConfig::clear_used_space() {
  used_space_ = GOOGLE_ULONGLONG(0);
  _clear_bit(6);
}
inline ::google::protobuf::uint64 VaultConfig::used_space() const {
  return used_space_;
}
inline void VaultConfig::set_used_space(::google::protobuf::uint64 value) {
  _set_bit(6);
  used_space_ = value;
}


}  // namespace maidsafe
#endif  // PROTOBUF_maidsafe_5fmessages_2eproto__INCLUDED
