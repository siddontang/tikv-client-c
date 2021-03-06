// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: import_kvpb.proto

#include "import_kvpb.pb.h"
#include "import_kvpb.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace import_kvpb {

static const char* ImportKV_method_names[] = {
  "/import_kvpb.ImportKV/Open",
  "/import_kvpb.ImportKV/Write",
  "/import_kvpb.ImportKV/Close",
};

std::unique_ptr< ImportKV::Stub> ImportKV::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ImportKV::Stub> stub(new ImportKV::Stub(channel));
  return stub;
}

ImportKV::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Open_(ImportKV_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Write_(ImportKV_method_names[1], ::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  , rpcmethod_Close_(ImportKV_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ImportKV::Stub::Open(::grpc::ClientContext* context, const ::import_kvpb::OpenRequest& request, ::import_kvpb::OpenResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Open_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::import_kvpb::OpenResponse>* ImportKV::Stub::AsyncOpenRaw(::grpc::ClientContext* context, const ::import_kvpb::OpenRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::import_kvpb::OpenResponse>::Create(channel_.get(), cq, rpcmethod_Open_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::import_kvpb::OpenResponse>* ImportKV::Stub::PrepareAsyncOpenRaw(::grpc::ClientContext* context, const ::import_kvpb::OpenRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::import_kvpb::OpenResponse>::Create(channel_.get(), cq, rpcmethod_Open_, context, request, false);
}

::grpc::ClientWriter< ::import_kvpb::WriteRequest>* ImportKV::Stub::WriteRaw(::grpc::ClientContext* context, ::import_kvpb::WriteResponse* response) {
  return ::grpc::internal::ClientWriterFactory< ::import_kvpb::WriteRequest>::Create(channel_.get(), rpcmethod_Write_, context, response);
}

::grpc::ClientAsyncWriter< ::import_kvpb::WriteRequest>* ImportKV::Stub::AsyncWriteRaw(::grpc::ClientContext* context, ::import_kvpb::WriteResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::import_kvpb::WriteRequest>::Create(channel_.get(), cq, rpcmethod_Write_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::import_kvpb::WriteRequest>* ImportKV::Stub::PrepareAsyncWriteRaw(::grpc::ClientContext* context, ::import_kvpb::WriteResponse* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::import_kvpb::WriteRequest>::Create(channel_.get(), cq, rpcmethod_Write_, context, response, false, nullptr);
}

::grpc::Status ImportKV::Stub::Close(::grpc::ClientContext* context, const ::import_kvpb::CloseRequest& request, ::import_kvpb::CloseResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Close_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::import_kvpb::CloseResponse>* ImportKV::Stub::AsyncCloseRaw(::grpc::ClientContext* context, const ::import_kvpb::CloseRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::import_kvpb::CloseResponse>::Create(channel_.get(), cq, rpcmethod_Close_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::import_kvpb::CloseResponse>* ImportKV::Stub::PrepareAsyncCloseRaw(::grpc::ClientContext* context, const ::import_kvpb::CloseRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::import_kvpb::CloseResponse>::Create(channel_.get(), cq, rpcmethod_Close_, context, request, false);
}

ImportKV::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ImportKV_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ImportKV::Service, ::import_kvpb::OpenRequest, ::import_kvpb::OpenResponse>(
          std::mem_fn(&ImportKV::Service::Open), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ImportKV_method_names[1],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< ImportKV::Service, ::import_kvpb::WriteRequest, ::import_kvpb::WriteResponse>(
          std::mem_fn(&ImportKV::Service::Write), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ImportKV_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ImportKV::Service, ::import_kvpb::CloseRequest, ::import_kvpb::CloseResponse>(
          std::mem_fn(&ImportKV::Service::Close), this)));
}

ImportKV::Service::~Service() {
}

::grpc::Status ImportKV::Service::Open(::grpc::ServerContext* context, const ::import_kvpb::OpenRequest* request, ::import_kvpb::OpenResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ImportKV::Service::Write(::grpc::ServerContext* context, ::grpc::ServerReader< ::import_kvpb::WriteRequest>* reader, ::import_kvpb::WriteResponse* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ImportKV::Service::Close(::grpc::ServerContext* context, const ::import_kvpb::CloseRequest* request, ::import_kvpb::CloseResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace import_kvpb

