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
                      checksum: "03e6d4e3cae55e5677c490aa067954ccd41dedfc4da5559261074831ba001348"
                  )
      ]
  )
