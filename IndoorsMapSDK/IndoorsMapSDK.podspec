Pod::Spec.new do |s|
    s.name             = 'IndoorsMapSDK'
    s.version          = '3.3.7'
    s.summary          = 'IndoorsMapSDK - SDK для внутренней навигации с поддержкой карт, AR, и MapLibre.'
    s.description      = <<-DESC
        IndoorsMapSDK предоставляет функционал для внутренней навигации, включая    поддержку карт и AR, с использованием MapLibre GL для отображения карт.
    DESC


    s.homepage         = 'https://gitlab.indoorsnavi.pro/sdk/ios'
    s.license          = { :type => 'MIT', :file => 'IndoorsMapSDK/LICENSE.md' }
    s.author           = { "Indoors Navigation" => "developer@indoorsnavi.pro" }
    s.source           = { :git => 'https://gitlab.indoorsnavi.pro/sdk/ios.git', :tag => s.version }
    s.vendored_frameworks = 'IndoorsMapSDK/XCFramework/IndoorsMapSDK.xcframework'
  
    s.swift_version    = '5.0'
    s.ios.deployment_target = '12.0'
  
  
    s.frameworks       = 'MapKit', 'CoreGraphics', 'CoreLocation', 'ARKit'
    s.dependency       'MapLibre', '~> 5.13.0'
    s.dependency       'IndoorsCoreSDK', '3.3.7'
    
    
    # Использование ARC
    s.requires_arc = true

    # Настройки для исключения архитектур (для симулятора)
    s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end
