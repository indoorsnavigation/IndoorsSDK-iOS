  // swift-tools-version: 5.5

  import PackageDescription

  let package = Package(
      name: "YourPackageName",
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
                      url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoorssdk/indoorssdk-none.zip",
                      checksum: "none"
                  )
      ]
  )
