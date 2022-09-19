import CppCoreLib

public class WrappedSayMachine {
  var machine: SayMachineRef

  public init(name: String) {
    self.machine = make_machine(name)
  }

  deinit {
    destory_machine(machine)
  }

  public func say() {
    say_machine(machine)
  }
}
