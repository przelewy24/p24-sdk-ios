// swift-tools-version: 5.6
import PackageDescription

let package = Package(
    name: "P24SDK",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "P24SDK",
            targets: ["P24SDKAll"]
        )
    ],
    targets: [
        .binaryTarget(
          name: "P24SDKAll",
          path: "P24SDKAll.xcframework"
        )
    ]
)