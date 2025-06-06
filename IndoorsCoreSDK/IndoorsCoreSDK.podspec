Pod::Spec.new do |s|
  s.name             = 'IndoorsCoreSDK'
  s.version          = '3.3.9'
  s.summary          = 'IndoorsCoreSDK - SDK для внутренней навигации'
  s.description      = <<-DESC
    IndoorsSDK предоставляет функционал для внутренней навигации, основанную на технолггии iBeacon.
  DESC

  s.homepage         = 'https://github.com/indoorsnavigation/IndoorsSDK-iOS'
  s.license = { :type => 'MIT', :file => 'IndoorsCoreSDK/LICENSE.md' }
  s.author           = { "Indoors Navigation" => "developer@indoorsnavi.pro" }
  s.source           = { :git => 'https://github.com/indoorsnavigation/IndoorsSDK-iOS.git', :tag => s.version }
  s.vendored_frameworks = 'IndoorsCoreSDK/XCFramework/IndoorsCoreSDK.xcframework'
  
  s.swift_version    = '5.0'
  s.ios.deployment_target = '12.0'
end
