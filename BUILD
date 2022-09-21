load("@build_bazel_rules_apple//apple:apple.bzl", "apple_xcframework")
load("@rules_foreign_cc//foreign_cc:defs.bzl", "cmake")

package(
    default_visibility = ["//visibility:public"],
)

cmake(
    name = "sockpp",
    lib_source = "@sockpp-git//:all_srcs",
    cache_entries = {
        "SOCKPP_BUILD_SHARED": "OFF",
        "SOCKPP_BUILD_STATIC": "ON",
    },
    out_static_libs = ["libsockpp.a"],
)

cc_library(
    name = "oscpp",
    hdrs = ["@oscpp-git//:all_srcs"],
)

cc_library(
    name = "cpp_core_lib",
    srcs = ["//src:helloworld.cpp"],
    hdrs = ["//src:helloworld.h"],
    alwayslink = 1,
)

cc_library(
    name = "socket_test",
    srcs = ["//src:socket_test.cpp"],
    hdrs = ["//src:socket_test.h"],
    deps = [
        "//:sockpp", 
        "//:oscpp",
    ],
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
