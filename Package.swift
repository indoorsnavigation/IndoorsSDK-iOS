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
            url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoors-core/IndoorsCoreSDK-4.1.0.zip",
            checksum: "bfa67802269318fd0c9c83274b016a12e65c7c7a76b9275747f80005375dc969"
        ),
        .binaryTarget(
            name: "IndoorsMapSDK",
            url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoors-map/IndoorsMapSDK-4.1.0.zip",
            checksum: "924c3d1c04d74ce0bdfbe258d84915ad7b293a05d84cfeb564eb2370e0dede61"
        ),
        .binaryTarget(
            name: "IndoorsModulesSDK",
            url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoors-modules/IndoorsModulesSDK-4.1.0.zip",
            checksum: "707cd30b529fa6ee0f14a08a876643632825a817a4688adce4a8abd7d0bf5c17"
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
