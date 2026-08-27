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
            url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoors-core/IndoorsCoreSDK-4.1.6.zip",
            checksum: "f72f9f759068f5b6c6aea99cda16977f4e34c0b59f535eeca2ac37b30980d14f"
        ),
        .binaryTarget(
            name: "IndoorsMapSDK",
            url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoors-map/IndoorsMapSDK-4.1.6.zip",
            checksum: "cca264ca8d4a569995cd1d0a53595ccab01da9ddb2dec285a939e087146eafee"
        ),
        .binaryTarget(
            name: "IndoorsModulesSDK",
            url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoors-modules/IndoorsModulesSDK-4.1.6.zip",
            checksum: "befa9d557128cd12e5071b2d3d2513f0f288b1f5341d6980ba583118a6e2fa22"
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
