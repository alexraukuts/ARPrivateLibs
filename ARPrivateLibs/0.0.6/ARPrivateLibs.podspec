Pod::Spec.new do |s|

    s.platform              = :ios
    s.ios.deployment_target = '9.0'
    s.requires_arc          = true
    s.name                  = "ARPrivateLibs"
    s.version               = "0.0.6"
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

    s.subspec 'ARFirstLib' do |l1|
        l1.source_files = 'ARFirstLib/*'
    end

    s.subspec 'ARFirstLib' do |l2|

        l2.source_files = 'Polaris/PolarisOfficeSDK.framework/Versions/A/Headers/*.h'
        l2.vendored_frameworks = 'Polaris/PolarisOfficeSDK.framework'
        #l2.frameworks = 'UIKit', 'Foundation', 'SystemConfiguration', 'MobileCoreServices', 'CoreLocation', 'CoreBluetooth'
        l2.xcconfig = {  'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/Polaris"',
                        'HEADER_SEARCH_PATHS' => '"${PODS_ROOT}/Headers/Polaris"' }
        l2.resources            = 'Polaris/*.{bundle,plist}'
    end
end
