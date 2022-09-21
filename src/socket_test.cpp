#include "socket_test.h"

#include <iostream>
#include <string>
#include <memory>

#include "sockpp/version.h"

struct SocketResource {
  sockpp::socket_initializer initializer;
  sockpp::udp_socket socket;
};

SocketResourceRef create_socket(const char* host, in_port_t port) {
  std::cout << sockpp::SOCKPP_VERSION << std::endl;

  SocketResourceRef resources = new SocketResource;

  if (!resources->socket.connect(sockpp::inet_address(std::string{host}, port))) {
    std::cout << "Error connecting to server at " << host << ":" << port << "\n\t" << resources->socket.last_error_str() << std::endl;
    return nullptr;
  }

  std::cout << "Created UDP socket at: " << resources->socket.address() << std::endl;

  return resources;
}

void send_socket(const void* data, size_t size, const SocketResourceRef resource) {
  if (resource) {
    resource->socket.send(data, size);
  }
}

void destory_socket(SocketResourceRef resource) {
  if (resource == nullptr) {
    return;
  }

  delete resource;
}
