Pod::Spec.new do |spec|

  spec.name         = "BatteryStationSDK"
  spec.version      = "0.0.1"
  spec.summary      = "A short description of BatteryStationSDK"
  spec.description  = <<-DESCRIPTION
                      pod spec create xx
                      DESCRIPTION

  spec.homepage     = "https://github.com/songbigong"
  spec.license      = "None"
  spec.author       = { "LeonSoong" => "460715538@qq.com" }
  spec.source       = { :git => "https://github.com/songbigong/BatteryStationSDK.git", :tag => spec.version }

  spec.static_framework = true
  spec.requires_arc = true
  spec.platform     = :ios, '9.0'
  spec.ios.vendored_frameworks = ['BatteryStationSDK.framework','TencentOpenAPI.framework','Alipay/AlipaySDK.framework']
  spec.resources  = ['BatteryStationSDKBundle.bundle','Alipay/AlipaySDK.bundle']
  spec.frameworks = 'MapKit','CoreTelephony','SystemConfiguration','CoreText','CFNetwork','CoreLocation','CoreMotion','UIKit'
  spec.libraries  = "c++","z","iconv.2.4.0"
  spec.user_target_xcconfig = { 'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES' }
  
  spec.dependency 'SVProgressHUD'
  spec.dependency 'SDWebImage','~> 4.4.2'
  spec.dependency 'MJRefresh'
  spec.dependency 'BaiduMobStatCodeless'
  spec.dependency 'Charts', '= 3.2.1'
  spec.dependency 'Masonry'
  spec.dependency 'AMap3DMap', '= 6.5.0'
  spec.dependency 'AMapSearch'
  spec.dependency 'AMapNavi'
  spec.dependency 'WechatOpenSDK'
  spec.dependency 'MJExtension'
  spec.dependency 'DZNEmptyDataSet'
  spec.dependency 'WebViewJavascriptBridge', '~> 6.0'
  spec.dependency 'IQKeyboardManager'

end
