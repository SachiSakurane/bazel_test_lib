load("@build_bazel_rules_swift//swift:swift.bzl", "swift_binary")

cc_binary(
    name = "helloworld-test",
    deps = ["//:cpp_core_lib"],
    srcs = ["main.cpp"],
    linkstatic = True,
)

cc_binary(
    name = "sock-test",
    deps = ["//:socket_test"],
    srcs = ["socket_test_main.cpp"],
    linkstatic = True,
)

cc_binary(
    name = "oscpp-test",
    deps = ["//:socket_test"],
    srcs = ["oscpp_main.cpp"],
    linkstatic = True,
)

swift_binary(
    name = "swift-test",
    srcs = ["main.swift"],
    module_name = "main",
    deps = ["//:swift_wrapped_cpp_core_lib"],
)
