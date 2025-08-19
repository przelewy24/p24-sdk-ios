// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "P24SDK",
    platforms: [
        .ios(.v13) 
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
