// swift-tools-version: 6.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "IndoorsSDK",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(
            name: "IndoorsCoreSDK",
            targets: ["IndoorsCoreSDK"]
        ),
        .library(
            name: "IndoorsMapSDK",
            targets: ["IndoorsMapSDKWrapper"]
        ),
        .library(
            name: "IndoorsModulesSDK",
            targets: ["IndoorsModulesSDKWrapper"]
        )
    ],
    dependencies: [
        .package(
            url: "https://github.com/maplibre/maplibre-gl-native-distribution",
            .exact("6.16.0")
        )
    ],
    targets: [
        .binaryTarget(
            name: "IndoorsCoreSDK",
            url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoors-core/IndoorsCoreSDK-4.1.3.zip",
            checksum: "5a7b85a547c560f679f783c7e51ef32a125ce4ee95cb761142aefbcb3e5e25ef"
        ),
        .binaryTarget(
            name: "IndoorsMapSDK",
            url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoors-map/IndoorsMapSDK-4.1.3.zip",
            checksum: "160b419fda4bcebbe3a3dbaf75ebd6fc3bea5a71eebb3e46687958290437dc3c"
        ),
        .binaryTarget(
            name: "IndoorsModulesSDK",
            url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoors-modules/IndoorsModulesSDK-4.1.3.zip",
            checksum: "3f4b1acd63a5fb8377a26c28e1dd4c36eb121b1afa298153327363014ff068b6"
        ),

        .target(
            name: "IndoorsMapSDKWrapper",
            dependencies: [
                "IndoorsCoreSDK",
                "IndoorsMapSDK",
                .product(name: "MapLibre", package: "maplibre-gl-native-distribution")
            ],
            path: "Sources/IndoorsMapSDKWrapper"
        ),
        .target(
            name: "IndoorsModulesSDKWrapper",
            dependencies: [
                "IndoorsCoreSDK",
                "IndoorsMapSDK",
                "IndoorsModulesSDK",
                .product(name: "MapLibre", package: "maplibre-gl-native-distribution")
            ],
            path: "Sources/IndoorsModulesSDKWrapper"
        )
    ]
)
