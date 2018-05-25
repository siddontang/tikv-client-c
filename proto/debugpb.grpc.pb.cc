// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: debugpb.proto

#include "debugpb.pb.h"
#include "debugpb.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace debugpb {

static const char* Debug_method_names[] = {
  "/debugpb.Debug/Get",
  "/debugpb.Debug/RaftLog",
  "/debugpb.Debug/RegionInfo",
  "/debugpb.Debug/RegionSize",
  "/debugpb.Debug/ScanMvcc",
  "/debugpb.Debug/Compact",
  "/debugpb.Debug/InjectFailPoint",
  "/debugpb.Debug/RecoverFailPoint",
  "/debugpb.Debug/ListFailPoints",
  "/debugpb.Debug/GetMetrics",
  "/debugpb.Debug/CheckRegionConsistency",
  "/debugpb.Debug/ModifyTikvConfig",
};

std::unique_ptr< Debug::Stub> Debug::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Debug::Stub> stub(new Debug::Stub(channel));
  return stub;
}

Debug::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Get_(Debug_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RaftLog_(Debug_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RegionInfo_(Debug_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RegionSize_(Debug_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ScanMvcc_(Debug_method_names[4], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_Compact_(Debug_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_InjectFailPoint_(Debug_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RecoverFailPoint_(Debug_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListFailPoints_(Debug_method_names[8], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetMetrics_(Debug_method_names[9], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CheckRegionConsistency_(Debug_method_names[10], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ModifyTikvConfig_(Debug_method_names[11], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Debug::Stub::Get(::grpc::ClientContext* context, const ::debugpb::GetRequest& request, ::debugpb::GetResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Get_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::debugpb::GetResponse>* Debug::Stub::AsyncGetRaw(::grpc::ClientContext* context, const ::debugpb::GetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::GetResponse>::Create(channel_.get(), cq, rpcmethod_Get_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::debugpb::GetResponse>* Debug::Stub::PrepareAsyncGetRaw(::grpc::ClientContext* context, const ::debugpb::GetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::GetResponse>::Create(channel_.get(), cq, rpcmethod_Get_, context, request, false);
}

::grpc::Status Debug::Stub::RaftLog(::grpc::ClientContext* context, const ::debugpb::RaftLogRequest& request, ::debugpb::RaftLogResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_RaftLog_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::debugpb::RaftLogResponse>* Debug::Stub::AsyncRaftLogRaw(::grpc::ClientContext* context, const ::debugpb::RaftLogRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::RaftLogResponse>::Create(channel_.get(), cq, rpcmethod_RaftLog_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::debugpb::RaftLogResponse>* Debug::Stub::PrepareAsyncRaftLogRaw(::grpc::ClientContext* context, const ::debugpb::RaftLogRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::RaftLogResponse>::Create(channel_.get(), cq, rpcmethod_RaftLog_, context, request, false);
}

::grpc::Status Debug::Stub::RegionInfo(::grpc::ClientContext* context, const ::debugpb::RegionInfoRequest& request, ::debugpb::RegionInfoResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_RegionInfo_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::debugpb::RegionInfoResponse>* Debug::Stub::AsyncRegionInfoRaw(::grpc::ClientContext* context, const ::debugpb::RegionInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::RegionInfoResponse>::Create(channel_.get(), cq, rpcmethod_RegionInfo_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::debugpb::RegionInfoResponse>* Debug::Stub::PrepareAsyncRegionInfoRaw(::grpc::ClientContext* context, const ::debugpb::RegionInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::RegionInfoResponse>::Create(channel_.get(), cq, rpcmethod_RegionInfo_, context, request, false);
}

::grpc::Status Debug::Stub::RegionSize(::grpc::ClientContext* context, const ::debugpb::RegionSizeRequest& request, ::debugpb::RegionSizeResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_RegionSize_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::debugpb::RegionSizeResponse>* Debug::Stub::AsyncRegionSizeRaw(::grpc::ClientContext* context, const ::debugpb::RegionSizeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::RegionSizeResponse>::Create(channel_.get(), cq, rpcmethod_RegionSize_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::debugpb::RegionSizeResponse>* Debug::Stub::PrepareAsyncRegionSizeRaw(::grpc::ClientContext* context, const ::debugpb::RegionSizeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::RegionSizeResponse>::Create(channel_.get(), cq, rpcmethod_RegionSize_, context, request, false);
}

::grpc::ClientReader< ::debugpb::ScanMvccResponse>* Debug::Stub::ScanMvccRaw(::grpc::ClientContext* context, const ::debugpb::ScanMvccRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::debugpb::ScanMvccResponse>::Create(channel_.get(), rpcmethod_ScanMvcc_, context, request);
}

::grpc::ClientAsyncReader< ::debugpb::ScanMvccResponse>* Debug::Stub::AsyncScanMvccRaw(::grpc::ClientContext* context, const ::debugpb::ScanMvccRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::debugpb::ScanMvccResponse>::Create(channel_.get(), cq, rpcmethod_ScanMvcc_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::debugpb::ScanMvccResponse>* Debug::Stub::PrepareAsyncScanMvccRaw(::grpc::ClientContext* context, const ::debugpb::ScanMvccRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::debugpb::ScanMvccResponse>::Create(channel_.get(), cq, rpcmethod_ScanMvcc_, context, request, false, nullptr);
}

::grpc::Status Debug::Stub::Compact(::grpc::ClientContext* context, const ::debugpb::CompactRequest& request, ::debugpb::CompactResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Compact_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::debugpb::CompactResponse>* Debug::Stub::AsyncCompactRaw(::grpc::ClientContext* context, const ::debugpb::CompactRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::CompactResponse>::Create(channel_.get(), cq, rpcmethod_Compact_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::debugpb::CompactResponse>* Debug::Stub::PrepareAsyncCompactRaw(::grpc::ClientContext* context, const ::debugpb::CompactRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::CompactResponse>::Create(channel_.get(), cq, rpcmethod_Compact_, context, request, false);
}

::grpc::Status Debug::Stub::InjectFailPoint(::grpc::ClientContext* context, const ::debugpb::InjectFailPointRequest& request, ::debugpb::InjectFailPointResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_InjectFailPoint_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::debugpb::InjectFailPointResponse>* Debug::Stub::AsyncInjectFailPointRaw(::grpc::ClientContext* context, const ::debugpb::InjectFailPointRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::InjectFailPointResponse>::Create(channel_.get(), cq, rpcmethod_InjectFailPoint_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::debugpb::InjectFailPointResponse>* Debug::Stub::PrepareAsyncInjectFailPointRaw(::grpc::ClientContext* context, const ::debugpb::InjectFailPointRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::InjectFailPointResponse>::Create(channel_.get(), cq, rpcmethod_InjectFailPoint_, context, request, false);
}

::grpc::Status Debug::Stub::RecoverFailPoint(::grpc::ClientContext* context, const ::debugpb::RecoverFailPointRequest& request, ::debugpb::RecoverFailPointResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_RecoverFailPoint_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::debugpb::RecoverFailPointResponse>* Debug::Stub::AsyncRecoverFailPointRaw(::grpc::ClientContext* context, const ::debugpb::RecoverFailPointRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::RecoverFailPointResponse>::Create(channel_.get(), cq, rpcmethod_RecoverFailPoint_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::debugpb::RecoverFailPointResponse>* Debug::Stub::PrepareAsyncRecoverFailPointRaw(::grpc::ClientContext* context, const ::debugpb::RecoverFailPointRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::RecoverFailPointResponse>::Create(channel_.get(), cq, rpcmethod_RecoverFailPoint_, context, request, false);
}

::grpc::Status Debug::Stub::ListFailPoints(::grpc::ClientContext* context, const ::debugpb::ListFailPointsRequest& request, ::debugpb::ListFailPointsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListFailPoints_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::debugpb::ListFailPointsResponse>* Debug::Stub::AsyncListFailPointsRaw(::grpc::ClientContext* context, const ::debugpb::ListFailPointsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::ListFailPointsResponse>::Create(channel_.get(), cq, rpcmethod_ListFailPoints_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::debugpb::ListFailPointsResponse>* Debug::Stub::PrepareAsyncListFailPointsRaw(::grpc::ClientContext* context, const ::debugpb::ListFailPointsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::ListFailPointsResponse>::Create(channel_.get(), cq, rpcmethod_ListFailPoints_, context, request, false);
}

::grpc::Status Debug::Stub::GetMetrics(::grpc::ClientContext* context, const ::debugpb::GetMetricsRequest& request, ::debugpb::GetMetricsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetMetrics_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::debugpb::GetMetricsResponse>* Debug::Stub::AsyncGetMetricsRaw(::grpc::ClientContext* context, const ::debugpb::GetMetricsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::GetMetricsResponse>::Create(channel_.get(), cq, rpcmethod_GetMetrics_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::debugpb::GetMetricsResponse>* Debug::Stub::PrepareAsyncGetMetricsRaw(::grpc::ClientContext* context, const ::debugpb::GetMetricsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::GetMetricsResponse>::Create(channel_.get(), cq, rpcmethod_GetMetrics_, context, request, false);
}

::grpc::Status Debug::Stub::CheckRegionConsistency(::grpc::ClientContext* context, const ::debugpb::RegionConsistencyCheckRequest& request, ::debugpb::RegionConsistencyCheckResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CheckRegionConsistency_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::debugpb::RegionConsistencyCheckResponse>* Debug::Stub::AsyncCheckRegionConsistencyRaw(::grpc::ClientContext* context, const ::debugpb::RegionConsistencyCheckRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::RegionConsistencyCheckResponse>::Create(channel_.get(), cq, rpcmethod_CheckRegionConsistency_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::debugpb::RegionConsistencyCheckResponse>* Debug::Stub::PrepareAsyncCheckRegionConsistencyRaw(::grpc::ClientContext* context, const ::debugpb::RegionConsistencyCheckRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::RegionConsistencyCheckResponse>::Create(channel_.get(), cq, rpcmethod_CheckRegionConsistency_, context, request, false);
}

::grpc::Status Debug::Stub::ModifyTikvConfig(::grpc::ClientContext* context, const ::debugpb::ModifyTikvConfigRequest& request, ::debugpb::ModifyTikvConfigResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ModifyTikvConfig_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::debugpb::ModifyTikvConfigResponse>* Debug::Stub::AsyncModifyTikvConfigRaw(::grpc::ClientContext* context, const ::debugpb::ModifyTikvConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::ModifyTikvConfigResponse>::Create(channel_.get(), cq, rpcmethod_ModifyTikvConfig_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::debugpb::ModifyTikvConfigResponse>* Debug::Stub::PrepareAsyncModifyTikvConfigRaw(::grpc::ClientContext* context, const ::debugpb::ModifyTikvConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::debugpb::ModifyTikvConfigResponse>::Create(channel_.get(), cq, rpcmethod_ModifyTikvConfig_, context, request, false);
}

Debug::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Debug_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Debug::Service, ::debugpb::GetRequest, ::debugpb::GetResponse>(
          std::mem_fn(&Debug::Service::Get), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Debug_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Debug::Service, ::debugpb::RaftLogRequest, ::debugpb::RaftLogResponse>(
          std::mem_fn(&Debug::Service::RaftLog), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Debug_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Debug::Service, ::debugpb::RegionInfoRequest, ::debugpb::RegionInfoResponse>(
          std::mem_fn(&Debug::Service::RegionInfo), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Debug_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Debug::Service, ::debugpb::RegionSizeRequest, ::debugpb::RegionSizeResponse>(
          std::mem_fn(&Debug::Service::RegionSize), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Debug_method_names[4],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< Debug::Service, ::debugpb::ScanMvccRequest, ::debugpb::ScanMvccResponse>(
          std::mem_fn(&Debug::Service::ScanMvcc), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Debug_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Debug::Service, ::debugpb::CompactRequest, ::debugpb::CompactResponse>(
          std::mem_fn(&Debug::Service::Compact), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Debug_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Debug::Service, ::debugpb::InjectFailPointRequest, ::debugpb::InjectFailPointResponse>(
          std::mem_fn(&Debug::Service::InjectFailPoint), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Debug_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Debug::Service, ::debugpb::RecoverFailPointRequest, ::debugpb::RecoverFailPointResponse>(
          std::mem_fn(&Debug::Service::RecoverFailPoint), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Debug_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Debug::Service, ::debugpb::ListFailPointsRequest, ::debugpb::ListFailPointsResponse>(
          std::mem_fn(&Debug::Service::ListFailPoints), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Debug_method_names[9],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Debug::Service, ::debugpb::GetMetricsRequest, ::debugpb::GetMetricsResponse>(
          std::mem_fn(&Debug::Service::GetMetrics), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Debug_method_names[10],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Debug::Service, ::debugpb::RegionConsistencyCheckRequest, ::debugpb::RegionConsistencyCheckResponse>(
          std::mem_fn(&Debug::Service::CheckRegionConsistency), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Debug_method_names[11],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Debug::Service, ::debugpb::ModifyTikvConfigRequest, ::debugpb::ModifyTikvConfigResponse>(
          std::mem_fn(&Debug::Service::ModifyTikvConfig), this)));
}

Debug::Service::~Service() {
}

::grpc::Status Debug::Service::Get(::grpc::ServerContext* context, const ::debugpb::GetRequest* request, ::debugpb::GetResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Debug::Service::RaftLog(::grpc::ServerContext* context, const ::debugpb::RaftLogRequest* request, ::debugpb::RaftLogResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Debug::Service::RegionInfo(::grpc::ServerContext* context, const ::debugpb::RegionInfoRequest* request, ::debugpb::RegionInfoResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Debug::Service::RegionSize(::grpc::ServerContext* context, const ::debugpb::RegionSizeRequest* request, ::debugpb::RegionSizeResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Debug::Service::ScanMvcc(::grpc::ServerContext* context, const ::debugpb::ScanMvccRequest* request, ::grpc::ServerWriter< ::debugpb::ScanMvccResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Debug::Service::Compact(::grpc::ServerContext* context, const ::debugpb::CompactRequest* request, ::debugpb::CompactResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Debug::Service::InjectFailPoint(::grpc::ServerContext* context, const ::debugpb::InjectFailPointRequest* request, ::debugpb::InjectFailPointResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Debug::Service::RecoverFailPoint(::grpc::ServerContext* context, const ::debugpb::RecoverFailPointRequest* request, ::debugpb::RecoverFailPointResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Debug::Service::ListFailPoints(::grpc::ServerContext* context, const ::debugpb::ListFailPointsRequest* request, ::debugpb::ListFailPointsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Debug::Service::GetMetrics(::grpc::ServerContext* context, const ::debugpb::GetMetricsRequest* request, ::debugpb::GetMetricsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Debug::Service::CheckRegionConsistency(::grpc::ServerContext* context, const ::debugpb::RegionConsistencyCheckRequest* request, ::debugpb::RegionConsistencyCheckResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Debug::Service::ModifyTikvConfig(::grpc::ServerContext* context, const ::debugpb::ModifyTikvConfigRequest* request, ::debugpb::ModifyTikvConfigResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace debugpb

