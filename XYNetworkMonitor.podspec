
Pod::Spec.new do |s|

  def self.smart_version
    tag = `git describe --abbrev=0 --tags 2>/dev/null`.strip
    if $?.success? then tag else "0.0.1" end
  end

  s.name             = 'XYNetworkMonitor'
  s.version          = '0.5.0'
  s.summary          = 'XiaoYing - XYNetworkMonitor.'

  s.description      = <<-DESC
XiaoYing pod 库 - XYNetworkMonitor
                       DESC

  s.homepage         = 'http://gitlab.quvideo.com/ioscomponentgroup/XYNetworkMonitor'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'huakucha' => 'yuan1.liu@quvideo.com' }
  s.source           = { :git => 'git@gitlab.quvideo.com:ioscomponentgroup/XYNetworkMonitor.git', :tag => s.version.to_s }
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.ios.deployment_target = '10.0'

  s.source_files = 'XYNetworkMonitor/Classes/**/*'

#  s.dependency 'XYCategory'
  s.dependency 'AFNetworking'
  
end
