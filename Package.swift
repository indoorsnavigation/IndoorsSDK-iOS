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
                      url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoorssdk/indoorssdk-3.6.3.zip",
                      checksum: "d197ab4d3ce0c8b6eed11caad7c67fab35096c41ed5c100cbdfbc1b114d66b1d"
                  )
      ]
  )
