

Pod::Spec.new do |s|
  s.name             = 'PYBaseStringHandler'
  s.version          = '0.1.0'
  s.summary          = '对于string、AttributedString的链式调用处理。计算String、AttributedString的宽高。'

  s.description      = <<-DESC
对于string、AttributedString的链式调用处理。计算String、AttributedString的宽高。
                       DESC

  s.homepage         = 'https://github.com/LiPengYue/PYBaseStringHandler'

  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'LiPengYue' => 'pengyue.li@yi23.net' }
  s.source           = { :git => 'https://github.com/LiPengYue/PYBaseStringHandler.git', :tag => s.version.to_s }


  s.ios.deployment_target = '8.0'

  s.source_files = 'PYBaseStringHandler/Classes/**/*'

end
