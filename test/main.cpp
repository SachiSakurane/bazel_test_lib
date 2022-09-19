#include "src/helloworld.h"

#include <iostream>

int main (int argc, char** argv) {
  std::cout << "test" << std::endl;

  auto machine = make_machine("watyuiwghcjbashjbvd");
  say_machine(machine);
  destory_machine(machine);

  return 0;
}
