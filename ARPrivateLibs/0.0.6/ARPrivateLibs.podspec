Pod::Spec.new do |s|

  s.platform                = :ios
  s.ios.deployment_target   = '9.0'
  s.requires_arc            = true

  s.name            = "ARPrivateLibs"
  s.version         = "0.0.6"
  s.summary         = "A description of ARPrivateLibs."
  s.description     = <<-DESC
                        SOME 11111111111  DESCRIPTION WILL BE HERE.
                    DESC
  s.homepage        = "https://github.com/alexraukuts/ARPrivateLibs"
  s.license         = { :type => "MIT", :file => "License.txt" }
  s.author          = "Alex"
  s.platform        = :ios
  s.platform        = :ios, "9.0"
  s.source          = { :git => "https://github.com/alexraukuts/ARPrivateLibs.git", :tag => "#{s.version}" }
#s.source_files    = "*"
  s.exclude_files   = "Classes/Exclude"

    s.subspec 'ARFirstLib' do |l1|
        l1.source_files = 'ARFirstLib/*'
    end

    s.subspec 'ARFirstLib' do |l2|
        l2.source_files         = 'Polaris/**/*'
        l2.resources            = 'Polaris/*.{bundle,plist}'
        l2.public_header_files  = 'Polaris/PolarisOfficeSDK.framework/Headers/*.h'
        l2.preserve_paths       = 'Polaris/PolarisOfficeSDK.framework'
        l2.vendored_frameworks  = 'Polaris/PolarisOfficeSDK.framework'
    end

end
