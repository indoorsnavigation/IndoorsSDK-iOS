  // swift-tools-version: 5.5

import PackageDescription

let package = Package(
    name: "IndoorsSDK",
    products: [
        .library(
            name: "IndoorsSDK",
            targets: ["IndoorsSDK"]),
    ],
    dependencies: [
                .package(url: "https://github.com/maplibre/maplibre-gl-native-distribution", .exactItem("5.13.0"))
    ],
    targets: [
        .binaryTarget(
                    name: "IndoorsSDK",
                    url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoorssdk/indoorssdk-3.6.4.zip",
                    checksum: "f0e6c6b0639e058a0b403813927f8c15dab7b900cea500dbfc11a9a59d8d00b3"
                )
    ]
)
