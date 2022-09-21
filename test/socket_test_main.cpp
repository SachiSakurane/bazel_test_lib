#include "src/socket_test.h"

#include <iostream>

constexpr const char* HOSTNAME = "localhost";
constexpr in_port_t SOCKET_PORT = 3333;

int main (int argc, char** argv) {
  std::cout << "sock_test" << std::endl;

  auto resource = create_socket(HOSTNAME, SOCKET_PORT);

  send_socket("/VMC/Ext/Blend/Val\x00\x00,sf\x00\x41\x00\x00\x00\x3f\x80\x00\x00", 32, resource);
  send_socket("/VMC/Ext/Blend/Apply\x00\x00\x00\x00,\x00\x00\x00", 28, resource);
  destory_socket(resource);

  return 0;
}