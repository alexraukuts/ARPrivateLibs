Pod::Spec.new do |s|

  s.platform                = :ios
  s.ios.deployment_target   = '9.0'
  s.requires_arc            = true

  s.name            = "ARPrivateLibs"
  s.version         = "0.0.2"
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
  s.source_files    = "*"
  s.exclude_files   = "Classes/Exclude"
#  s.pod_target_xcconfig =  {
#    'SWIFT_VERSION' => '3.0',
#  }

end
