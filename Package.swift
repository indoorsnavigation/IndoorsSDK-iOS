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
                      checksum: "a8384381c392d026311ea3f1e25aabddc3918d08fceb3124fb1ce2f2efac6fcc"
                  )
      ]
  )
