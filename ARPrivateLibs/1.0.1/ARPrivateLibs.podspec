Pod::Spec.new do |s|

    s.platform              = :ios
    s.ios.deployment_target = '9.0'
    s.requires_arc          = true
    s.name                  = "ARPrivateLibs"
    s.version               = "1.0.1"
    s.summary               = "A description of ARPrivateLibs."
    s.description           = <<-DESC
                                SOME 11111111111  DESCRIPTION WILL BE HERE.
                            DESC
    s.homepage = "https://github.com/alexraukuts/ARPrivateLibs"
    s.license  = {
        :type => "Copyright",
        :text => <<-LICENSE
                    Copyright 2016 AR, Inc. All rights reserved.
                 LICENSE
    }
    s.author = "Alex"
    s.source = { :git => "https://github.com/alexraukuts/ARPrivateLibs.git", :tag => "#{s.version}" }
    s.exclude_files = "Classes/Exclude"

    s.prepare_command = './prebuild_script.sh > PRE-BUILD_OUTPUT.log'

    s.source_files = 'Polaris/PolarisOfficeSDK.framework/Versions/A/Headers/*'
    s.public_header_files = 'Polaris/PolarisOfficeSDK.framework/Versions/A/Headers/*.h'

    s.resources = 'Polaris/*.{bundle,plist}'
    s.vendored_frameworks = 'Polaris/PolarisOfficeSDK.framework'
    s.frameworks =
                    'SystemConfiguration',
                    'Security',
                    'CoreTelephony',
                    'AudioToolbox',
                    'MessageUI',
                    'MobileCoreServices',
                    'AVFoundation',
                    'MediaPlayer',
                    'CFNetwork',
                    'UIKit',
                    'CoreGraphics',
                    'EventKit',
                    'EventKitUI',
                    'PolarisOfficeSDK',
                    'QuartzCore',
                    'Foundation',
                    'AssetsLibrary'
    s.library = 'sqlite3',
                    'z',
                    'xml2',
                    'c++'
    s.xcconfig = {  'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/ARPrivateLibs/Polaris"',
                    'HEADER_SEARCH_PATHS' => '"${PODS_ROOT}/ARPrivateLibs/Polaris/**"' }
end
