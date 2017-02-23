/**
 * @file rpc_datapath.cc
 * @brief Performance-critical Rpc datapath functions
 */

#include <iostream>

#include "rpc.h"
#include "util/udp_client.h"

namespace ERpc {
template <class Transport_>
bool Rpc<Transport_>::send_request(Session *session, Buffer pkt_buffer) {
  assert(session != nullptr);
  assert(is_session_ptr_client(session));
  assert(pkt_buffer.is_valid() && check_pkthdr(pkt_buffer));

  return false;
}

template <class Transport_>
void Rpc<Transport_>::send_response(Session *session, Buffer pkt_buffer) {
  assert(session != nullptr && pkt_buffer != nullptr);
  assert(is_session_ptr_server(session));
  assert(pkt_buffer->is_valid());
};

}  // End ERpc