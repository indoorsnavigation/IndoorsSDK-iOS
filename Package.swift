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
                      checksum: "08a382097726e3d051e95069f84921132c753a1c5409f3a1982d4e06aacaa8c3"
                  )
      ]
  )
