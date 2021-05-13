Pod::Spec.new do |spec|
  spec.name         = "UponSDKiOS"
  spec.version      = "1.0.0"
  spec.summary      = "云告U聚合SDK"
  spec.description  = <<-DESC
                      云告U聚合SDK，优化广告收益的得力助手。
                   DESC

  spec.homepage     = "https://github.com/LongYunGit/Upon"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author             = { "zhangbao" => "zhangbao@ly.group" }
  spec.platform     = :ios, "9.0"
  spec.source       = { :git => "https://github.com/LongYunGit/Upon.git", :tag => "#{spec.version}" }
  spec.frameworks   = "Foundation", "UIKit", "SystemConfiguration", "MobileCoreServices", "AdSupport", "WebKit", "CoreTelephony", "CoreMotion"
  spec.libraries    = 'sqlite3'
  spec.requires_arc = true
  spec.user_target_xcconfig =   {'OTHER_LDFLAGS' => ['-lObjC']}
  spec.default_subspecs = 'UponSDK'
  
  spec.subspec 'UponSDK' do |ss|
      ss.ios.deployment_target = '9.0'
      ss.vendored_frameworks = 'Frameworks/{UponSDK,UponYunGaoAdapter}.framework'
      ss.dependency "YGNet", "0.0.3"
      ss.dependency "YGAdSDK", "0.0.6"
  end
  
  spec.subspec 'UponBaiduAdapter' do |ss|
      ss.ios.deployment_target = '9.0'
      ss.vendored_frameworks = 'Frameworks/UponBaiduAdapter.framework'
      ss.dependency "BaiduMobAdSDK", "4.771"
      ss.dependency "UponSDKiOS/UponSDK", "#{spec.version}"
  end
  
  spec.subspec 'UponGDTAdapter' do |ss|
      ss.ios.deployment_target = '9.0'
      ss.user_target_xcconfig =   { 'VALID_ARCHS' => 'armv7 x86_64 arm64' }
      ss.pod_target_xcconfig =   { 'VALID_ARCHS' => 'armv7 x86_64 arm64' }
      ss.vendored_frameworks = 'Frameworks/UponGDTAdapter.framework'
      ss.dependency "GDTMobSDK", "4.12.61"
      ss.dependency "UponSDKiOS/UponSDK", "#{spec.version}"
  end
  
  spec.subspec 'UponKuaiShouAdapter' do |ss|
      ss.ios.deployment_target = '9.0'
      ss.vendored_frameworks = 'Frameworks/UponKuaiShouAdapter.framework'
      ss.dependency "KSAdSDK", "3.3.9.1"
      ss.dependency "UponSDKiOS/UponSDK", "#{spec.version}"
  end
  
  spec.subspec 'UponTouTiaoAdapter' do |ss|
      ss.ios.deployment_target = '9.0'
      ss.vendored_frameworks = 'Frameworks/UponTouTiaoAdapter.framework'
      ss.dependency "Ads-CN", "3.6.1.1"
      ss.dependency "UponSDKiOS/UponSDK", "#{spec.version}"
  end
  

end
