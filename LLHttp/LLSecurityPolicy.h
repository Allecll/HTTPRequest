//
//  LLSecurityPolicy.h
//  LLHttpRequest
//
//  Created by 刘磊 on 2020/11/23.
//

#import <Foundation/Foundation.h>
#import "LLRequestDefine.h"


@interface LLSecurityPolicy : NSObject

/**
 *  SSL Pinning证书的校验模式
 *  默认LLSSLPinningModeNone
 */
@property (nonatomic, readonly, assign) LLSSLPinningMode SSLPinningMode;

/**
 *  是否容许使用非法证书
 */
@property (nonatomic, assign) BOOL allowInvalidCertificates;

/**
 *  是否校验证书CN字段中的域名
 */
@property (nonatomic, assign) BOOL validatesDomainName;

/**
  * 证书
 */
@property (nonatomic, strong, nullable) NSSet <NSData *> *pinnedCertificates;


/**
 *  创建新的SecurityPolicy
 *
 *  @param pinningMode 校验模式
 *
 *  @return SecurityPolicy
 */
+ (nullable instancetype )policyWithPinningMode:(LLSSLPinningMode)pinningMode;


/**
 * 读取Bundle中的文件
 * @param bundle
 */
+ (nullable  NSSet *  )certificatesInBundle:( nullable NSBundle * )bundle;

@end

