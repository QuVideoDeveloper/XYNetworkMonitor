
Pod::Spec.new do |s|
  s.name             = 'XYNetworkMonitor'
  s.version          = '0.5.0'
  s.summary          = 'XiaoYing - XYNetworkMonitor.'
  s.description      = <<-DESC
XiaoYing pod 库 - XYNetworkMonitor
                       DESC
  s.homepage         = 'https://github.com/QuVideoDeveloper/XYNetworkMonitor'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'gitsource' => 'gitsource@quvideo.com' }
  s.source           = { :git => 'https://github.com/QuVideoDeveloper/XYNetworkMonitor.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.0'

  s.vendored_frameworks = "*.{xcframework, framework}"
  s.source_files = "*.{xcframework, framework}/ios-arm64_i386_x86_64-simulator/**/*.h"  
  s.dependency 'AFNetworking', '~>4.0.1'
  
end
