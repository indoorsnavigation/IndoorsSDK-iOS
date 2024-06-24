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
                      url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoorssdk/indoorssdk-3.6.2.zip",
                      checksum: "c1e4045ff8fa60d062ad902eb773363c64bee06c1e6a449a959e37882a7729c4"
                  )
      ]
  )
