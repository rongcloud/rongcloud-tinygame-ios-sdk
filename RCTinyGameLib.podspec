
Pod::Spec.new do |s|


    s.name         = "RCTinyGameLib"
    s.version      = "1.0.0"
    s.summary      = "Rong Cloud Tiny Game Lib."


    s.description  = <<-DESC
                        Rong Cloud Tiny Game Lib for iOS.
                        DESC


    s.homepage     = "https://www.rongcloud.cn/"
    s.license      = { :type => "Copyright", :text => "Copyright 2021 RongCloud" }
    s.author             = { "hanxiaoqing" => "https://www.rongcloud.cn/" }
    s.social_media_url   = "https://www.rongcloud.cn/"
    s.platform     = :ios, "13.0"
    s.source           = { :git => 'https://github.com/rongcloud/rongcloud-tinygame-ios-sdk.git', :tag => s.version.to_s }
    s.requires_arc = true
    s.static_framework = true
    
    s.xcconfig = {
        'VALID_ARCHS' =>  'arm64 x86_64 armv7',
    }
    
    s.pod_target_xcconfig = {
        'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
    }
    s.user_target_xcconfig = {
        'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
    }

    s.vendored_frameworks = 'RCTinyGameLib.xcframework', 'SudMGPSDK/SudMGP.xcframework'

    

end

