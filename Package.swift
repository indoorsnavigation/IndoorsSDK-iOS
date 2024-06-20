// swift-tools-version: 5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

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
					url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoorssdk/indoorssdk-3.6.2.zip",
					checksum: "7c13d917e97cafb560dc0776dae11b4b5f5c29425206c66ee8528f255cbac9be"
				)
	]
)