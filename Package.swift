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
                    checksum: "210abb7215f3c8aa787b1c33117b2fe7924dcabd1a63689889f60bdb88851d87"
                )
    ]
)
