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
                      url: "https://software.indoorsnavi.pro/artifactory/ios/pro.indoorsnavi/indoorssdk/indoorssdk-.zip",
                      checksum: "ab6f28fda7caa23de4dc804bb89c16feb60381bf9ae05d3768c77c88e8d100ae"
                  )
      ]
  )
