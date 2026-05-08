// swift-tools-version: 6.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "IndoorsSDK",
    platforms: [
        .iOS(.v12)
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
            url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoors-core/IndoorsCoreSDK-4.0.4.zip",
            checksum: "bd6a934f9b395964964a886133aa004326d15b0838c418e59c5493461d041fb1"
        ),
        .binaryTarget(
            name: "IndoorsMapSDK",
            url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoors-map/IndoorsMapSDK-4.0.4.zip",
            checksum: "a8d07b100f5904942d3f475eb74521a7dcab372cab544ab9ce8f1b5fc62607fd"
        ),
        .binaryTarget(
            name: "IndoorsModulesSDK",
            url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoors-modules/IndoorsModulesSDK-4.0.4.zip",
            checksum: "8ebfcf8380ffd84d8de30389f58be037fc09b7b3c2b44d7110401a0b2c8a925c"
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
