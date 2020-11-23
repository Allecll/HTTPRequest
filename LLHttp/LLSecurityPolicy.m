//
//  LLSecurityPolicy.m
//  LLHttpRequest
//
//  Created by 刘磊 on 2020/11/23.
//

#import "LLSecurityPolicy.h"

@interface LLSecurityPolicy ()

@property (readwrite, nonatomic, assign) LLSSLPinningMode SSLPinningMode;

@end

@implementation LLSecurityPolicy

+ (instancetype)policyWithPinningMode:(LLSSLPinningMode)pinningMode {
    LL
}

@end
