workspace(name = "bazel_test_lib")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "new_git_repository")

http_archive(
    name = "rules_foreign_cc",
    sha256 = "2a4d07cd64b0719b39a7c12218a3e507672b82a97b98c6a89d38565894cf7c51",
    strip_prefix = "rules_foreign_cc-0.9.0",
    url = "https://github.com/bazelbuild/rules_foreign_cc/archive/refs/tags/0.9.0.tar.gz",
)

load("@rules_foreign_cc//foreign_cc:repositories.bzl", "rules_foreign_cc_dependencies")

# This sets up some common toolchains for building targets. For more details, please see
# https://bazelbuild.github.io/rules_foreign_cc/0.9.0/flatten.html#rules_foreign_cc_dependencies
rules_foreign_cc_dependencies()

_ALL_CONTENT = """\
filegroup(
    name = "all_srcs",
    srcs = glob(["**"]),
    visibility = ["//visibility:public"],
)
"""

# sockpp
new_git_repository(
    name = "sockpp-git",
    remote = "https://github.com/fpagliughi/sockpp",
    tag = "v0.7.1",
    build_file_content = _ALL_CONTENT,
)

# oscpp
new_git_repository(
    name = "oscpp-git",
    remote = "https://github.com/kaoskorobase/oscpp",
    commit = "805365c3b7b7a5c819866040ab434f011dfcfbf9",
    build_file_content = _ALL_CONTENT,
)

# Apple 
http_archive(
    name = "build_bazel_rules_apple",
    sha256 = "a19cf84dd060eda50be9ba5b0eca88377e0306ffbc1cc059df6a6947e48ac61a",
    url = "https://github.com/bazelbuild/rules_apple/releases/download/1.1.1/rules_apple.1.1.1.tar.gz",
)

load(
    "@build_bazel_rules_apple//apple:repositories.bzl",
    "apple_rules_dependencies",
)

apple_rules_dependencies()

load(
    "@build_bazel_rules_swift//swift:repositories.bzl",
    "swift_rules_dependencies",
)

swift_rules_dependencies()

load(
    "@build_bazel_rules_swift//swift:extras.bzl",
    "swift_rules_extra_dependencies",
)

swift_rules_extra_dependencies()

load(
    "@build_bazel_apple_support//lib:repositories.bzl",
    "apple_support_dependencies",
)

apple_support_dependencies()
