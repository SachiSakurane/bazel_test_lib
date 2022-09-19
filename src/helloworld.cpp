#include "helloworld.h"

#include <iostream>
#include <string>

struct SayMachine {
public:
  SayMachine(const char* _name) : name(_name) {}

  void say() const {
    std::cout << name << std::endl;
  }

private:
  const std::string name;
};

SayMachineRef make_machine(const char* name) {
  return new SayMachine{name};
}

void say_machine(const SayMachineRef machine) {
  machine->say();
}

void destory_machine(SayMachineRef machine) {
  delete machine;
}
