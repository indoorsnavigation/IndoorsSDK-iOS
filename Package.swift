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
                      url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoorssdk/indoorssdk-3.6.2.zip",
                      checksum: "7a2a2d6f2581ae6ff229d92c3b09931a1bdc2cc2b15db97ade05f39038c34dea"
                  )
      ]
  )
