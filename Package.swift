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
                      checksum: "94e987f35d8396bfef734bc935f9cba48f720ccf66ecc1aeb94b021672ec5d59"
                  )
      ]
  )
