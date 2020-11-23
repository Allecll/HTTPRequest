//
//  LLRequestDefine.h
//  LLHttpRequest
//
//  Created by 刘磊 on 2020/11/23.
//

#ifndef LLRequestDefine_h
#define LLRequestDefine_h

/**
 *  http请求类型
 */
typedef NS_ENUM(NSInteger, LLRequestMethodType) {
    /**
     *  GET Method
     */
    LLRequestMethodGET,
    /**
     *  POST Method
     */
    LLRequestMethodPOST,
    /**
     *  PATCH Method
     */
    LLRequestMethodPATCH
    
    
};

/**
 *  http请求数据类型
 */
typedef NS_ENUM(NSInteger,LLRequestSerializerType) {
    /**
     *  HTTP
     */
    LLRequestSerializerTypeHTTP = 0,
    
    /**
     *  JSON
     */
    LLRequestSerializerTypeJSON    = 1,
};

/**
 *  http请求返回数据类型
 */
typedef  NS_ENUM(NSUInteger, KKResponseSerializerType) {
    /**
     *  HTTP Type返回
     */
    LLResponseSerializerTypeHTTP    =    0,
    /**
     *  JSON Type返回
     */
    LLResponseSerializerTypeJSON    =    1,
};

/**
 *
 */
typedef NS_ENUM(NSUInteger, LLSSLPinningMode) {
    /**
     *  不校验证书
     */
    LLSSLPinningModeNone,
    /**
     *  校验证书中的PublicKey
    */
    LLSSLPiningModePublicKey,
    /**
     *  校验整个证书链
     */
    LLSSLPinningModeCertificate,
};

#endif /* LLRequestDefine_h */
