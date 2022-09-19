// swift-tools-version: 5.6
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "swift_wrapper_lib_package_manager",
    platforms: [
        .iOS(.v14), .macCatalyst(.v14)
    ],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "CppCoreLib",
            targets: ["CppCoreLib"]),
    ],
    dependencies: [],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .binaryTarget(
            name: "CppCoreLib",
            path: "bazel-bin/CppCoreLib.xcframework.zip"
        ),
    ]
)
