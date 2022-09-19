load("@build_bazel_rules_apple//apple:apple.bzl", "apple_xcframework")

package(
    default_visibility = ["//visibility:public"],
)

cc_library(
    name = "cpp_core_lib",
    srcs = ["//src:helloworld.cpp"],
    hdrs = ["//src:helloworld.h"],
    alwayslink = 1,
)

apple_xcframework(
    name = "CppCoreLib",
    bundle_id = "moi.poi.SwiftWithBazel.CppCoreLib",
    bundle_name = "CppCoreLib",
    infoplists = [
        "//resources:Info.plist",
    ],
    ios = {
        "simulator": [
            "arm64",
            "x86_64",
        ],
        "device": [
            "arm64",
            "arm64e",
        ],
    },
    minimum_os_versions = {
        "ios": "11.0",
    },
    public_hdrs = [
        "//src:helloworld.h",
    ],
    deps = [
        "//:cpp_core_lib",
    ],
)
