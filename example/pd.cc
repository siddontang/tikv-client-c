#include <iostream>

#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>

#include "proto/pdpb.grpc.pb.h"

using namespace std;

using grpc::Channel;
using grpc::ClientContext;
using grpc::ClientReader;
using grpc::ClientReaderWriter;
using grpc::ClientWriter;
using grpc::Status;

using pdpb::GetMembersRequest;
using pdpb::GetMembersResponse;
using pdpb::PD;

int main()
{
    auto channel = grpc::CreateChannel("127.0.0.1:2379", grpc::InsecureChannelCredentials());
    auto stub = PD::NewStub(channel);
    cout << "hello PD" << endl;

    ClientContext context;
    GetMembersRequest request;
    request.mutable_header()->set_cluster_id(uint64_t(0));
    GetMembersResponse response;
    Status status = stub->GetMembers(&context, request, &response);
    if(!status.ok()) {
        cout << "check bootstrap failed " << status.error_details() << endl;
        return -1;
    }

    auto size = response.members_size();
     cout << "get " << size << " members" << endl;

    for(auto i = 0; i < size; ++i) {
        auto member = response.members(i);
        cout << "member " << i << ": " << member.client_urls()[0] << endl;
    }

    return 0;
}