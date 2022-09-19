#pragma once

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus
  struct SayMachine;

  typedef struct SayMachine* SayMachineRef;

  SayMachineRef make_machine(const char* name);
  void say_machine(const SayMachineRef machine);
  void destory_machine(SayMachineRef machine);

#ifdef __cplusplus
}  // extern "C"
#endif  // __cplusplus
