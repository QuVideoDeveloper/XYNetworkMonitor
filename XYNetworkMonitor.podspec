
Pod::Spec.new do |s|
  s.name             = 'XYNetworkMonitor'
  s.version          = '0.5.2'
  s.summary          = 'XiaoYing - XYNetworkMonitor.'
  s.description      = <<-DESC
XiaoYing pod 库 - XYNetworkMonitor
                       DESC
  s.homepage         = 'https://github.com/QuVideoDeveloper/XYNetworkMonitor'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'gitsource' => 'gitsource@quvideo.com' }
  s.source           = { :git => 'https://github.com/QuVideoDeveloper/XYNetworkMonitor.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.0'

  s.vendored_frameworks = "XYNetworkMonitor.xcframework"
  s.source_files = "XYNetworkMonitor.xcframework/ios-arm64_armv7/XYNetworkMonitor.framework/Headers/**/*.h"  
  s.dependency 'AFNetworking', '~>4.0.1'
  
end
