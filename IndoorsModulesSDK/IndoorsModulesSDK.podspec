Pod::Spec.new do |s|
    s.name             = 'IndoorsModulesSDK'
    s.version          = '3.3.9'
    s.summary          = 'IndoorsModulesSDK - SDK для дополнительных возможностей карты'
    s.description      = <<-DESC
            IndoorsModulesSDK предоставляет функционал бронирования, трекинга на карте и других возможностей.
    DESC


    s.homepage         = 'https://github.com/indoorsnavigation/IndoorsSDK-iOS'
    s.license          = { :type => 'MIT', :file => 'IndoorsModulesSDK/LICENSE.md' }
    s.author           = { "Indoors Navigation" => "developer@indoorsnavi.pro" }
    s.source           = { :git => 'https://github.com/indoorsnavigation/IndoorsSDK-iOS.git', :tag => s.version }
    s.vendored_frameworks = 'IndoorsModulesSDK/XCFramework/IndoorsModulesSDK.xcframework'
  
    s.swift_version    = '5.0'
    s.ios.deployment_target = '12.0'
  
  
    s.frameworks       = 'MapKit', 'CoreGraphics', 'CoreLocation', 'ARKit'
    s.dependency       'MapLibre', '~> 5.13.0'
    s.dependency       'IndoorsCoreSDK', '3.3.9'
    s.dependency       'IndoorsMapSDK', '3.3.9'
    
    # Использование ARC
    s.requires_arc = true

    # Настройки для исключения архитектур (для симулятора)
    s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end
