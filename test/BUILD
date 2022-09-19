load("@build_bazel_rules_swift//swift:swift.bzl", "swift_binary")

# Exports all files in this package as targets to make it easier to depend on them.
exports_files(
    glob(["**"]),
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "helloworld-test",
    deps = ["//:cpp_core_lib"],
    srcs = ["main.cpp"],
    linkstatic = True,
)

swift_binary(
    name = "swift-test",
    srcs = ["main.swift"],
    module_name = "main",
    deps = ["//:swift_wrapped_cpp_core_lib"],
)
