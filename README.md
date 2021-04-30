# Upon SDK
云告U聚合平台SDK

版本更新说明：

- SKD版本：v1.0.0
- 更新第三方SDK

开发环境：

- 开发工具：xcode 11以上
- 部署目标：iOS 9.0及以上版本
- 支持架构：armv7 i386 x86_64 arm64

集成方式：

cocoapods集成，在podfile文件中添加:

```ruby
# 核心库，必须添加
pod 'UponSDKiOS'
# 各平台的adapter
pod 'UponSDKiOS/Upon(平台名)Adapter'
# 例如：百度，您需要添加如下：
pod 'UponSDKiOS/UponBaiduAdapter'
```

手动集成：参考[技术文档](http://doc.dev.uponad.com/#/UPON/iOS/ios_sdk_config_access)

下面是所有Adapter的pod列表：

| 平台           | pod                                  |
| -------------- | ------------------------------------ |
| 百度           | pod 'UponSDKiOS/UponBaiduAdapter'    |
| 头条（穿山甲） | pod 'UponSDKiOS/UponTouTiaoAdapter'  |
| 腾讯（优量汇） | pod 'UponSDKiOS/UponGDTAdapter'      |
| 快手           | pod 'UponSDKiOS/UponKuaiShouAdapter' |

变现增长就先U聚合，赶快加入我们吧！https://yungaoad.com/