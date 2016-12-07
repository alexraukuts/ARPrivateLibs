Pod::Spec.new do |s|

    s.platform              = :ios
    s.ios.deployment_target = '9.0'
    s.requires_arc          = true
    s.name                  = "ARPrivateLibs"
    s.version               = "0.0.9"
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
#s.source_files = "*"
    s.exclude_files = "Classes/Exclude"

#s.subspec 'ARFirstLib' do |l1|
#       l1.source_files = 'ARFirstLib/*'
#    end

#s.subspec 'Polaris' do |l2|


s.prepare_command = './prebuild_script.sh > PRE-BUILD_OUTPUT.log'





        s.source_files = 'Polaris/PolarisOfficeSDK.framework/Versions/A/Headers/*.h'
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
#s.xcconfig = {  'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/Polaris"',
#                        'HEADER_SEARCH_PATHS' => '"${PODS_ROOT}/Headers/Polaris"' }
        s.resources = 'Polaris/*.{bundle,plist}'
#    end
end
