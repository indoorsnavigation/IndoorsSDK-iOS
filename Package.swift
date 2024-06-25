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
                      checksum: "8ba04aef2ec48911a04ad69030b09a1d8afb124eb0bda673956abf85906f4cc0"
                  )
      ]
  )
