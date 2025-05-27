// swift-tools-version: 6.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "IndoorsSDK",
    products: [
        .library(
            name: "IndoorsCoreSDK",
            targets: ["IndoorsCoreSDK"]
        )
        ,
        .library(
            name: "IndoorsMapSDK",
            targets: ["IndoorsMapSDKWrapper"]
        ),
        .library(
            name: "IndoorsModulesSDK",
            targets: ["IndoorsModulesSDKWrapper"]
        )
    ],
    targets: [
        // Бинарные зависимости
        .binaryTarget(
            name: "IndoorsCoreSDK",
            url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoors-core/IndoorsCoreSDK-3.3.8.zip",
            checksum: "0e46bafdbdfbbeb46c159dce49153df14c4fb1a06d016d57f6122d8dc3401b64"
        )
        ,
        .binaryTarget(
            name: "IndoorsMapSDK",
            url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoors-map/IndoorsMapSDK-3.3.8.zip",
            checksum: "bcb2697809183f87d624c70fd8b701ffae5958a47c080b437a9a59b782f67596"
        ),
        .binaryTarget(
            name: "IndoorsModulesSDK",
            url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoors-modules/IndoorsModulesSDK-3.3.8.zip",
            checksum: "e11e476f25cd40155682ebb653f7b9f02fa1d3e4c9cd844165a51462f978424b"
        ),


        .target(
            name: "IndoorsMapSDKWrapper",
            dependencies: [
                "IndoorsCoreSDK",
                "IndoorsMapSDK"
            ],
            path: "Sources/IndoorsMapSDKWrapper"
        ),
        .target(
            name: "IndoorsModulesSDKWrapper",
            dependencies: [
                "IndoorsCoreSDK",
                "IndoorsMapSDK",
                "IndoorsModulesSDK"
            ],
            path: "Sources/IndoorsModulesSDKWrapper"
        )
    ]
)
