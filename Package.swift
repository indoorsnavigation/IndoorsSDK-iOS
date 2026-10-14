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
            url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoors-core/IndoorsCoreSDK-4.1.8.zip",
            checksum: "89122ea35b0e139748b1d91b12234bc06bdb62a949c8fb8f45d4315049cf4a82"
        ),
        .binaryTarget(
            name: "IndoorsMapSDK",
            url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoors-map/IndoorsMapSDK-4.1.8.zip",
            checksum: "74b89d489644a0678d8a905314a8d9bf801fff71a77d70c2ecca4a35202f5009"
        ),
        .binaryTarget(
            name: "IndoorsModulesSDK",
            url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoors-modules/IndoorsModulesSDK-4.1.8.zip",
            checksum: "9708304bbaf28d8fa310187156f29f78912f53aecbe62636f92625e73a7c68b7"
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
