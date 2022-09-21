#pragma once

#include "sockpp/udp_socket.h"

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus
  struct SocketResource;

  typedef struct SocketResource* SocketResourceRef;

  SocketResourceRef create_socket(const char* host, in_port_t port);
  void send_socket(const void* data, size_t size, const SocketResourceRef resource);
  void destory_socket(SocketResourceRef resource);
  
#ifdef __cplusplus
}  // extern "C"
#endif  // __cplusplus
