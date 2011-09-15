// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: service/notification/notification.proto

#ifndef PROTOBUF_service_2fnotification_2fnotification_2eproto__INCLUDED
#define PROTOBUF_service_2fnotification_2fnotification_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/service.h>
#include "lib/protocol/attribute.pb.h"
#include "lib/protocol/entity.pb.h"
#include "lib/rpc/rpc.pb.h"
// @@protoc_insertion_point(includes)

namespace bnet {
namespace protocol {
namespace notification {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_service_2fnotification_2fnotification_2eproto();
void protobuf_AssignDesc_service_2fnotification_2fnotification_2eproto();
void protobuf_ShutdownFile_service_2fnotification_2fnotification_2eproto();

class Notification;
class FindClientRequest;
class FindClientResponse;
class RegisterClientRequest;
class UnregisterClientRequest;

// ===================================================================

class Notification : public ::google::protobuf::Message {
 public:
  Notification();
  virtual ~Notification();
  
  Notification(const Notification& from);
  
  inline Notification& operator=(const Notification& from) {
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
  static const Notification& default_instance();
  
  void Swap(Notification* other);
  
  // implements Message ----------------------------------------------
  
  Notification* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Notification& from);
  void MergeFrom(const Notification& from);
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
  
  // optional .bnet.protocol.EntityId sender_id = 1;
  inline bool has_sender_id() const;
  inline void clear_sender_id();
  static const int kSenderIdFieldNumber = 1;
  inline const ::bnet::protocol::EntityId& sender_id() const;
  inline ::bnet::protocol::EntityId* mutable_sender_id();
  
  // optional .bnet.protocol.EntityId sender_game_account = 2;
  inline bool has_sender_game_account() const;
  inline void clear_sender_game_account();
  static const int kSenderGameAccountFieldNumber = 2;
  inline const ::bnet::protocol::EntityId& sender_game_account() const;
  inline ::bnet::protocol::EntityId* mutable_sender_game_account();
  
  // required .bnet.protocol.EntityId target_id = 3;
  inline bool has_target_id() const;
  inline void clear_target_id();
  static const int kTargetIdFieldNumber = 3;
  inline const ::bnet::protocol::EntityId& target_id() const;
  inline ::bnet::protocol::EntityId* mutable_target_id();
  
  // required string type = 4;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 4;
  inline const ::std::string& type() const;
  inline void set_type(const ::std::string& value);
  inline void set_type(const char* value);
  inline void set_type(const char* value, size_t size);
  inline ::std::string* mutable_type();
  
  // repeated .bnet.protocol.attribute.Attribute attribute = 5;
  inline int attribute_size() const;
  inline void clear_attribute();
  static const int kAttributeFieldNumber = 5;
  inline const ::bnet::protocol::attribute::Attribute& attribute(int index) const;
  inline ::bnet::protocol::attribute::Attribute* mutable_attribute(int index);
  inline ::bnet::protocol::attribute::Attribute* add_attribute();
  inline const ::google::protobuf::RepeatedPtrField< ::bnet::protocol::attribute::Attribute >&
      attribute() const;
  inline ::google::protobuf::RepeatedPtrField< ::bnet::protocol::attribute::Attribute >*
      mutable_attribute();
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.notification.Notification)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::bnet::protocol::EntityId* sender_id_;
  ::bnet::protocol::EntityId* sender_game_account_;
  ::bnet::protocol::EntityId* target_id_;
  ::std::string* type_;
  static const ::std::string _default_type_;
  ::google::protobuf::RepeatedPtrField< ::bnet::protocol::attribute::Attribute > attribute_;
  friend void  protobuf_AddDesc_service_2fnotification_2fnotification_2eproto();
  friend void protobuf_AssignDesc_service_2fnotification_2fnotification_2eproto();
  friend void protobuf_ShutdownFile_service_2fnotification_2fnotification_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];
  
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
  static Notification* default_instance_;
};
// -------------------------------------------------------------------

class FindClientRequest : public ::google::protobuf::Message {
 public:
  FindClientRequest();
  virtual ~FindClientRequest();
  
  FindClientRequest(const FindClientRequest& from);
  
  inline FindClientRequest& operator=(const FindClientRequest& from) {
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
  static const FindClientRequest& default_instance();
  
  void Swap(FindClientRequest* other);
  
  // implements Message ----------------------------------------------
  
  FindClientRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FindClientRequest& from);
  void MergeFrom(const FindClientRequest& from);
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
  
  // required .bnet.protocol.EntityId entity_id = 1;
  inline bool has_entity_id() const;
  inline void clear_entity_id();
  static const int kEntityIdFieldNumber = 1;
  inline const ::bnet::protocol::EntityId& entity_id() const;
  inline ::bnet::protocol::EntityId* mutable_entity_id();
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.notification.FindClientRequest)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::bnet::protocol::EntityId* entity_id_;
  friend void  protobuf_AddDesc_service_2fnotification_2fnotification_2eproto();
  friend void protobuf_AssignDesc_service_2fnotification_2fnotification_2eproto();
  friend void protobuf_ShutdownFile_service_2fnotification_2fnotification_2eproto();
  
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
  static FindClientRequest* default_instance_;
};
// -------------------------------------------------------------------

class FindClientResponse : public ::google::protobuf::Message {
 public:
  FindClientResponse();
  virtual ~FindClientResponse();
  
  FindClientResponse(const FindClientResponse& from);
  
  inline FindClientResponse& operator=(const FindClientResponse& from) {
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
  static const FindClientResponse& default_instance();
  
  void Swap(FindClientResponse* other);
  
  // implements Message ----------------------------------------------
  
  FindClientResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FindClientResponse& from);
  void MergeFrom(const FindClientResponse& from);
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
  
  // required uint32 label = 1;
  inline bool has_label() const;
  inline void clear_label();
  static const int kLabelFieldNumber = 1;
  inline ::google::protobuf::uint32 label() const;
  inline void set_label(::google::protobuf::uint32 value);
  
  // optional .bnet.protocol.ProcessId client_process_id = 2;
  inline bool has_client_process_id() const;
  inline void clear_client_process_id();
  static const int kClientProcessIdFieldNumber = 2;
  inline const ::bnet::protocol::ProcessId& client_process_id() const;
  inline ::bnet::protocol::ProcessId* mutable_client_process_id();
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.notification.FindClientResponse)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::uint32 label_;
  ::bnet::protocol::ProcessId* client_process_id_;
  friend void  protobuf_AddDesc_service_2fnotification_2fnotification_2eproto();
  friend void protobuf_AssignDesc_service_2fnotification_2fnotification_2eproto();
  friend void protobuf_ShutdownFile_service_2fnotification_2fnotification_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
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
  static FindClientResponse* default_instance_;
};
// -------------------------------------------------------------------

class RegisterClientRequest : public ::google::protobuf::Message {
 public:
  RegisterClientRequest();
  virtual ~RegisterClientRequest();
  
  RegisterClientRequest(const RegisterClientRequest& from);
  
  inline RegisterClientRequest& operator=(const RegisterClientRequest& from) {
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
  static const RegisterClientRequest& default_instance();
  
  void Swap(RegisterClientRequest* other);
  
  // implements Message ----------------------------------------------
  
  RegisterClientRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RegisterClientRequest& from);
  void MergeFrom(const RegisterClientRequest& from);
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
  
  // required .bnet.protocol.EntityId entity_id = 1;
  inline bool has_entity_id() const;
  inline void clear_entity_id();
  static const int kEntityIdFieldNumber = 1;
  inline const ::bnet::protocol::EntityId& entity_id() const;
  inline ::bnet::protocol::EntityId* mutable_entity_id();
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.notification.RegisterClientRequest)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::bnet::protocol::EntityId* entity_id_;
  friend void  protobuf_AddDesc_service_2fnotification_2fnotification_2eproto();
  friend void protobuf_AssignDesc_service_2fnotification_2fnotification_2eproto();
  friend void protobuf_ShutdownFile_service_2fnotification_2fnotification_2eproto();
  
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
  static RegisterClientRequest* default_instance_;
};
// -------------------------------------------------------------------

class UnregisterClientRequest : public ::google::protobuf::Message {
 public:
  UnregisterClientRequest();
  virtual ~UnregisterClientRequest();
  
  UnregisterClientRequest(const UnregisterClientRequest& from);
  
  inline UnregisterClientRequest& operator=(const UnregisterClientRequest& from) {
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
  static const UnregisterClientRequest& default_instance();
  
  void Swap(UnregisterClientRequest* other);
  
  // implements Message ----------------------------------------------
  
  UnregisterClientRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UnregisterClientRequest& from);
  void MergeFrom(const UnregisterClientRequest& from);
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
  
  // required .bnet.protocol.EntityId entity_id = 1;
  inline bool has_entity_id() const;
  inline void clear_entity_id();
  static const int kEntityIdFieldNumber = 1;
  inline const ::bnet::protocol::EntityId& entity_id() const;
  inline ::bnet::protocol::EntityId* mutable_entity_id();
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.notification.UnregisterClientRequest)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::bnet::protocol::EntityId* entity_id_;
  friend void  protobuf_AddDesc_service_2fnotification_2fnotification_2eproto();
  friend void protobuf_AssignDesc_service_2fnotification_2fnotification_2eproto();
  friend void protobuf_ShutdownFile_service_2fnotification_2fnotification_2eproto();
  
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
  static UnregisterClientRequest* default_instance_;
};
// ===================================================================

class NotificationService_Stub;

class NotificationService : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline NotificationService() {};
 public:
  virtual ~NotificationService();
  
  typedef NotificationService_Stub Stub;
  
  static const ::google::protobuf::ServiceDescriptor* descriptor();
  
  virtual void SendNotification(::google::protobuf::RpcController* controller,
                       const ::bnet::protocol::notification::Notification* request,
                       ::bnet::protocol::NoData* response,
                       ::google::protobuf::Closure* done);
  virtual void RegisterClient(::google::protobuf::RpcController* controller,
                       const ::bnet::protocol::notification::RegisterClientRequest* request,
                       ::bnet::protocol::NoData* response,
                       ::google::protobuf::Closure* done);
  virtual void UnregisterClient(::google::protobuf::RpcController* controller,
                       const ::bnet::protocol::notification::UnregisterClientRequest* request,
                       ::bnet::protocol::NoData* response,
                       ::google::protobuf::Closure* done);
  virtual void FindClient(::google::protobuf::RpcController* controller,
                       const ::bnet::protocol::notification::FindClientRequest* request,
                       ::bnet::protocol::notification::FindClientResponse* response,
                       ::google::protobuf::Closure* done);
  
  // implements Service ----------------------------------------------
  
  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(NotificationService);
};

class NotificationService_Stub : public NotificationService {
 public:
  NotificationService_Stub(::google::protobuf::RpcChannel* channel);
  NotificationService_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~NotificationService_Stub();
  
  inline ::google::protobuf::RpcChannel* channel() { return channel_; }
  
  // implements NotificationService ------------------------------------------
  
  void SendNotification(::google::protobuf::RpcController* controller,
                       const ::bnet::protocol::notification::Notification* request,
                       ::bnet::protocol::NoData* response,
                       ::google::protobuf::Closure* done);
  void RegisterClient(::google::protobuf::RpcController* controller,
                       const ::bnet::protocol::notification::RegisterClientRequest* request,
                       ::bnet::protocol::NoData* response,
                       ::google::protobuf::Closure* done);
  void UnregisterClient(::google::protobuf::RpcController* controller,
                       const ::bnet::protocol::notification::UnregisterClientRequest* request,
                       ::bnet::protocol::NoData* response,
                       ::google::protobuf::Closure* done);
  void FindClient(::google::protobuf::RpcController* controller,
                       const ::bnet::protocol::notification::FindClientRequest* request,
                       ::bnet::protocol::notification::FindClientResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(NotificationService_Stub);
};


// -------------------------------------------------------------------

class NotificationListener_Stub;

class NotificationListener : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline NotificationListener() {};
 public:
  virtual ~NotificationListener();
  
  typedef NotificationListener_Stub Stub;
  
  static const ::google::protobuf::ServiceDescriptor* descriptor();
  
  virtual void OnNotificationReceived(::google::protobuf::RpcController* controller,
                       const ::bnet::protocol::notification::Notification* request,
                       ::bnet::protocol::NO_RESPONSE* response,
                       ::google::protobuf::Closure* done);
  
  // implements Service ----------------------------------------------
  
  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(NotificationListener);
};

class NotificationListener_Stub : public NotificationListener {
 public:
  NotificationListener_Stub(::google::protobuf::RpcChannel* channel);
  NotificationListener_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~NotificationListener_Stub();
  
  inline ::google::protobuf::RpcChannel* channel() { return channel_; }
  
  // implements NotificationListener ------------------------------------------
  
  void OnNotificationReceived(::google::protobuf::RpcController* controller,
                       const ::bnet::protocol::notification::Notification* request,
                       ::bnet::protocol::NO_RESPONSE* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(NotificationListener_Stub);
};


// ===================================================================


// ===================================================================

// Notification

// optional .bnet.protocol.EntityId sender_id = 1;
inline bool Notification::has_sender_id() const {
  return _has_bit(0);
}
inline void Notification::clear_sender_id() {
  if (sender_id_ != NULL) sender_id_->::bnet::protocol::EntityId::Clear();
  _clear_bit(0);
}
inline const ::bnet::protocol::EntityId& Notification::sender_id() const {
  return sender_id_ != NULL ? *sender_id_ : *default_instance_->sender_id_;
}
inline ::bnet::protocol::EntityId* Notification::mutable_sender_id() {
  _set_bit(0);
  if (sender_id_ == NULL) sender_id_ = new ::bnet::protocol::EntityId;
  return sender_id_;
}

// optional .bnet.protocol.EntityId sender_game_account = 2;
inline bool Notification::has_sender_game_account() const {
  return _has_bit(1);
}
inline void Notification::clear_sender_game_account() {
  if (sender_game_account_ != NULL) sender_game_account_->::bnet::protocol::EntityId::Clear();
  _clear_bit(1);
}
inline const ::bnet::protocol::EntityId& Notification::sender_game_account() const {
  return sender_game_account_ != NULL ? *sender_game_account_ : *default_instance_->sender_game_account_;
}
inline ::bnet::protocol::EntityId* Notification::mutable_sender_game_account() {
  _set_bit(1);
  if (sender_game_account_ == NULL) sender_game_account_ = new ::bnet::protocol::EntityId;
  return sender_game_account_;
}

// required .bnet.protocol.EntityId target_id = 3;
inline bool Notification::has_target_id() const {
  return _has_bit(2);
}
inline void Notification::clear_target_id() {
  if (target_id_ != NULL) target_id_->::bnet::protocol::EntityId::Clear();
  _clear_bit(2);
}
inline const ::bnet::protocol::EntityId& Notification::target_id() const {
  return target_id_ != NULL ? *target_id_ : *default_instance_->target_id_;
}
inline ::bnet::protocol::EntityId* Notification::mutable_target_id() {
  _set_bit(2);
  if (target_id_ == NULL) target_id_ = new ::bnet::protocol::EntityId;
  return target_id_;
}

// required string type = 4;
inline bool Notification::has_type() const {
  return _has_bit(3);
}
inline void Notification::clear_type() {
  if (type_ != &_default_type_) {
    type_->clear();
  }
  _clear_bit(3);
}
inline const ::std::string& Notification::type() const {
  return *type_;
}
inline void Notification::set_type(const ::std::string& value) {
  _set_bit(3);
  if (type_ == &_default_type_) {
    type_ = new ::std::string;
  }
  type_->assign(value);
}
inline void Notification::set_type(const char* value) {
  _set_bit(3);
  if (type_ == &_default_type_) {
    type_ = new ::std::string;
  }
  type_->assign(value);
}
inline void Notification::set_type(const char* value, size_t size) {
  _set_bit(3);
  if (type_ == &_default_type_) {
    type_ = new ::std::string;
  }
  type_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Notification::mutable_type() {
  _set_bit(3);
  if (type_ == &_default_type_) {
    type_ = new ::std::string;
  }
  return type_;
}

// repeated .bnet.protocol.attribute.Attribute attribute = 5;
inline int Notification::attribute_size() const {
  return attribute_.size();
}
inline void Notification::clear_attribute() {
  attribute_.Clear();
}
inline const ::bnet::protocol::attribute::Attribute& Notification::attribute(int index) const {
  return attribute_.Get(index);
}
inline ::bnet::protocol::attribute::Attribute* Notification::mutable_attribute(int index) {
  return attribute_.Mutable(index);
}
inline ::bnet::protocol::attribute::Attribute* Notification::add_attribute() {
  return attribute_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::bnet::protocol::attribute::Attribute >&
Notification::attribute() const {
  return attribute_;
}
inline ::google::protobuf::RepeatedPtrField< ::bnet::protocol::attribute::Attribute >*
Notification::mutable_attribute() {
  return &attribute_;
}

// -------------------------------------------------------------------

// FindClientRequest

// required .bnet.protocol.EntityId entity_id = 1;
inline bool FindClientRequest::has_entity_id() const {
  return _has_bit(0);
}
inline void FindClientRequest::clear_entity_id() {
  if (entity_id_ != NULL) entity_id_->::bnet::protocol::EntityId::Clear();
  _clear_bit(0);
}
inline const ::bnet::protocol::EntityId& FindClientRequest::entity_id() const {
  return entity_id_ != NULL ? *entity_id_ : *default_instance_->entity_id_;
}
inline ::bnet::protocol::EntityId* FindClientRequest::mutable_entity_id() {
  _set_bit(0);
  if (entity_id_ == NULL) entity_id_ = new ::bnet::protocol::EntityId;
  return entity_id_;
}

// -------------------------------------------------------------------

// FindClientResponse

// required uint32 label = 1;
inline bool FindClientResponse::has_label() const {
  return _has_bit(0);
}
inline void FindClientResponse::clear_label() {
  label_ = 0u;
  _clear_bit(0);
}
inline ::google::protobuf::uint32 FindClientResponse::label() const {
  return label_;
}
inline void FindClientResponse::set_label(::google::protobuf::uint32 value) {
  _set_bit(0);
  label_ = value;
}

// optional .bnet.protocol.ProcessId client_process_id = 2;
inline bool FindClientResponse::has_client_process_id() const {
  return _has_bit(1);
}
inline void FindClientResponse::clear_client_process_id() {
  if (client_process_id_ != NULL) client_process_id_->::bnet::protocol::ProcessId::Clear();
  _clear_bit(1);
}
inline const ::bnet::protocol::ProcessId& FindClientResponse::client_process_id() const {
  return client_process_id_ != NULL ? *client_process_id_ : *default_instance_->client_process_id_;
}
inline ::bnet::protocol::ProcessId* FindClientResponse::mutable_client_process_id() {
  _set_bit(1);
  if (client_process_id_ == NULL) client_process_id_ = new ::bnet::protocol::ProcessId;
  return client_process_id_;
}

// -------------------------------------------------------------------

// RegisterClientRequest

// required .bnet.protocol.EntityId entity_id = 1;
inline bool RegisterClientRequest::has_entity_id() const {
  return _has_bit(0);
}
inline void RegisterClientRequest::clear_entity_id() {
  if (entity_id_ != NULL) entity_id_->::bnet::protocol::EntityId::Clear();
  _clear_bit(0);
}
inline const ::bnet::protocol::EntityId& RegisterClientRequest::entity_id() const {
  return entity_id_ != NULL ? *entity_id_ : *default_instance_->entity_id_;
}
inline ::bnet::protocol::EntityId* RegisterClientRequest::mutable_entity_id() {
  _set_bit(0);
  if (entity_id_ == NULL) entity_id_ = new ::bnet::protocol::EntityId;
  return entity_id_;
}

// -------------------------------------------------------------------

// UnregisterClientRequest

// required .bnet.protocol.EntityId entity_id = 1;
inline bool UnregisterClientRequest::has_entity_id() const {
  return _has_bit(0);
}
inline void UnregisterClientRequest::clear_entity_id() {
  if (entity_id_ != NULL) entity_id_->::bnet::protocol::EntityId::Clear();
  _clear_bit(0);
}
inline const ::bnet::protocol::EntityId& UnregisterClientRequest::entity_id() const {
  return entity_id_ != NULL ? *entity_id_ : *default_instance_->entity_id_;
}
inline ::bnet::protocol::EntityId* UnregisterClientRequest::mutable_entity_id() {
  _set_bit(0);
  if (entity_id_ == NULL) entity_id_ = new ::bnet::protocol::EntityId;
  return entity_id_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace notification
}  // namespace protocol
}  // namespace bnet

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_service_2fnotification_2fnotification_2eproto__INCLUDED