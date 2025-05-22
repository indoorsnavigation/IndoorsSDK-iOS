Pod::Spec.new do |s|
  s.name             = 'IndoorsCoreSDK'
  s.version          = '1.0.0'
  s.summary          = 'IndoorsCoreSDK - SDK для внутренней навигации'
  s.description      = <<-DESC
    IndoorsSDK предоставляет функционал для внутренней навигации, основанную на технолггии iBeacon.
  DESC

  s.homepage         = 'https://gitlab.indoorsnavi.pro/sdk/ios'
  s.license          =  s.license          = { :type => 'MIT', :file => 'LICENSE.md' }
  s.author           = { "Indoors Navigation" => "developer@indoorsnavi.pro" }
  s.source           = { :git => 'https://gitlab.indoorsnavi.pro/sdk/ios.git', :tag => s.version }
  s.vendored_frameworks = 'XCFramework/IndoorsCoreSDK.xcframework'
  
  s.swift_version    = '5.0'
  s.ios.deployment_target = '12.0'
end
