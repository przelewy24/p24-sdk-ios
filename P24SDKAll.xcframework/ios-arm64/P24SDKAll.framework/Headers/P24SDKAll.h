#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class PSDKACardChargeModule, PSDKAKotlinEnumCompanion, PSDKAKotlinEnum<E>, PSDKAEnvironment, PSDKAKotlinArray<T>, PSDKAP24, UIView, PSDKADownloadConfigStatus, PSDKATimeoutEvent, PSDKACardRequest, PSDKACardRequestBuilder, PSDKACardRequestEvent, PSDKACardRequestEventNeed3DS, PSDKACardRequestEventProcessCanceled, PSDKACardRequestEventProcessCompleted, PSDKACardRequestEventProcessError, PSDKACardRequestEventProcessStarted, PSDKABorderStyle, PSDKAButtonStyle, PSDKACardOrganization, PSDKACardTokenizeModule, PSDKAInputStyle, PSDKAFormStyle, PSDKATOSCheckbox, PSDKATermsOfServiceConfig, PSDKATokenizationMode, PSDKATokenizedCard, PSDKATokenizeCardRequestBuilder, PSDKATokenizeCardRequest, PSDKAConfig, PSDKAMakeGetRequest, PSDKADecodeFromJsonString, PSDKAP24Token, PSDKAEither<__covariant A, __covariant B>, PSDKAKotlinNothing, PSDKAKtor_client_coreHttpClient, PSDKAKotlinx_serialization_jsonJson, PSDKAResponse, PSDKABaseClient, PSDKAPostErrorNoConnection, PSDKAPostErrorServerError, PSDKAKtor_client_loggingLoggerCompanion, PSDKAKotlinx_serialization_jsonJsonElement, PSDKAKoin_coreModule, PSDKAKoin_coreKoinApplication, PSDKAKotlinCancellationException, PSDKAKotlinThrowable, PSDKAKotlinException, PSDKAKotlinRuntimeException, PSDKAKotlinIllegalStateException, PSDKAKtor_client_coreHttpClientEngineConfig, PSDKAKtor_client_coreHttpClientConfig<T>, PSDKAKtor_eventsEvents, PSDKAKtor_client_coreHttpReceivePipeline, PSDKAKtor_client_coreHttpRequestPipeline, PSDKAKtor_client_coreHttpResponsePipeline, PSDKAKtor_client_coreHttpSendPipeline, PSDKAKotlinx_serialization_coreSerializersModule, PSDKAKotlinx_serialization_jsonJsonDefault, PSDKAKotlinx_serialization_jsonJsonConfiguration, PSDKAKotlinx_serialization_jsonJsonElementCompanion, PSDKAKoin_coreKoinDefinition<R>, PSDKAKoin_coreScope, PSDKAKoin_coreParametersHolder, PSDKAKoin_coreInstanceFactory<T>, PSDKAKoin_coreSingleInstanceFactory<T>, PSDKAKoin_coreScopeDSL, PSDKAKoin_coreKoinApplicationCompanion, PSDKAKoin_coreLogger, PSDKAKoin_coreLevel, PSDKAKoin_coreKoin, PSDKAKotlinUnit, PSDKAKtor_client_coreHttpRequestData, PSDKAKtor_client_coreHttpResponseData, PSDKAKotlinx_coroutines_coreCoroutineDispatcher, PSDKAKtor_client_coreProxyConfig, PSDKAKtor_utilsAttributeKey<T>, PSDKAKtor_eventsEventDefinition<T>, PSDKAKtor_utilsPipelinePhase, PSDKAKtor_utilsPipeline<TSubject, TContext>, PSDKAKtor_client_coreHttpReceivePipelinePhases, PSDKAKtor_client_coreHttpResponse, PSDKAKtor_client_coreHttpRequestPipelinePhases, PSDKAKtor_client_coreHttpRequestBuilder, PSDKAKtor_client_coreHttpResponsePipelinePhases, PSDKAKtor_client_coreHttpResponseContainer, PSDKAKtor_client_coreHttpClientCall, PSDKAKtor_client_coreHttpSendPipelinePhases, PSDKAKoin_coreLockable, PSDKAKotlinLazyThreadSafetyMode, PSDKAKoin_coreParametersHolderCompanion, PSDKAKoin_coreBeanDefinition<T>, PSDKAKoin_coreInstanceFactoryCompanion, PSDKAKoin_coreInstanceContext, PSDKAKoin_coreInstanceRegistry, PSDKAKoin_corePropertyRegistry, PSDKAKoin_coreScopeRegistry, PSDKAKtor_httpUrl, PSDKAKtor_httpHttpMethod, PSDKAKtor_httpOutgoingContent, PSDKAKtor_httpHttpStatusCode, PSDKAKtor_utilsGMTDate, PSDKAKtor_httpHttpProtocolVersion, PSDKAKotlinAbstractCoroutineContextElement, PSDKAKotlinx_coroutines_coreCoroutineDispatcherKey, PSDKAKtor_httpHeadersBuilder, PSDKAKtor_client_coreHttpRequestBuilderCompanion, PSDKAKtor_httpURLBuilder, PSDKAKtor_utilsTypeInfo, PSDKAKtor_client_coreHttpClientCallCompanion, PSDKAKotlinx_serialization_coreSerialKind, PSDKAKoin_coreKind, PSDKAKoin_coreCallbacks<T>, PSDKAKoin_coreScopeRegistryCompanion, PSDKAKtor_httpUrlCompanion, PSDKAKtor_httpURLProtocol, PSDKAKtor_httpHttpMethodCompanion, PSDKAKtor_httpContentType, PSDKAKtor_httpHttpStatusCodeCompanion, PSDKAKtor_utilsGMTDateCompanion, PSDKAKtor_utilsWeekDay, PSDKAKtor_utilsMonth, PSDKAKtor_httpHttpProtocolVersionCompanion, PSDKAKotlinAbstractCoroutineContextKey<B, E>, PSDKAKtor_ioMemory, PSDKAKtor_ioChunkBuffer, PSDKAKtor_ioBuffer, PSDKAKotlinByteArray, PSDKAKtor_ioByteReadPacket, PSDKAKtor_utilsStringValuesBuilderImpl, PSDKAKtor_httpURLBuilderCompanion, PSDKAKtor_httpURLProtocolCompanion, PSDKAKtor_httpHeaderValueParam, PSDKAKtor_httpHeaderValueWithParametersCompanion, PSDKAKtor_httpHeaderValueWithParameters, PSDKAKtor_httpContentTypeCompanion, PSDKAKtor_utilsWeekDayCompanion, PSDKAKtor_utilsMonthCompanion, PSDKAKtor_ioMemoryCompanion, PSDKAKtor_ioBufferCompanion, PSDKAKtor_ioChunkBufferCompanion, PSDKAKotlinByteIterator, PSDKAKtor_ioInputCompanion, PSDKAKtor_ioInput, PSDKAKtor_ioByteReadPacketCompanion, PSDKAKotlinKTypeProjection, PSDKAKotlinKVariance, PSDKAKotlinKTypeProjectionCompanion;

@protocol PSDKASdkModule, PSDKAKotlinComparable, PSDKAKotlinx_coroutines_coreJob, PSDKACardRequestCallback, PSDKATokenizationCallback, PSDKAPostError, PSDKAKotlinCoroutineContext, PSDKAKotlinx_coroutines_coreCoroutineScope, PSDKAKotlinx_coroutines_coreFlow, PSDKAKotlinx_coroutines_coreMutableSharedFlow, PSDKAEvent, PSDKAKtor_client_loggingLogger, PSDKAKotlinLazy, PSDKAKotlinIterator, PSDKAKotlinx_coroutines_coreChildHandle, PSDKAKotlinx_coroutines_coreChildJob, PSDKAKotlinx_coroutines_coreDisposableHandle, PSDKAKotlinSequence, PSDKAKotlinx_coroutines_coreSelectClause0, PSDKAKotlinCoroutineContextKey, PSDKAKotlinCoroutineContextElement, PSDKAKtor_ioCloseable, PSDKAKtor_client_coreHttpClientEngine, PSDKAKtor_client_coreHttpClientEngineCapability, PSDKAKtor_utilsAttributes, PSDKAKotlinx_serialization_coreDeserializationStrategy, PSDKAKotlinx_serialization_coreSerializationStrategy, PSDKAKotlinx_serialization_coreSerialFormat, PSDKAKotlinx_serialization_coreStringFormat, PSDKAKotlinx_coroutines_coreFlowCollector, PSDKAKotlinx_coroutines_coreStateFlow, PSDKAKotlinx_coroutines_coreSharedFlow, PSDKAKoin_coreQualifier, PSDKAKotlinx_coroutines_coreParentJob, PSDKAKotlinx_coroutines_coreSelectInstance, PSDKAKotlinx_coroutines_coreSelectClause, PSDKAKtor_client_coreHttpClientPlugin, PSDKAKotlinSuspendFunction2, PSDKAKotlinx_serialization_coreDecoder, PSDKAKotlinx_serialization_coreSerialDescriptor, PSDKAKotlinx_serialization_coreEncoder, PSDKAKotlinx_serialization_coreSerializersModuleCollector, PSDKAKotlinx_serialization_coreKSerializer, PSDKAKotlinKClass, PSDKAKotlinx_serialization_jsonJsonNamingStrategy, PSDKAKoin_coreScopeCallback, PSDKAKoin_coreKoinScopeComponent, PSDKAKtor_httpHeaders, PSDKAKotlinContinuation, PSDKAKotlinContinuationInterceptor, PSDKAKotlinx_coroutines_coreRunnable, PSDKAKotlinFunction, PSDKAKtor_httpHttpMessage, PSDKAKtor_ioByteReadChannel, PSDKAKtor_httpHttpMessageBuilder, PSDKAKtor_client_coreHttpRequest, PSDKAKotlinx_serialization_coreCompositeDecoder, PSDKAKotlinAnnotation, PSDKAKotlinx_serialization_coreCompositeEncoder, PSDKAKotlinKDeclarationContainer, PSDKAKotlinKAnnotatedElement, PSDKAKotlinKClassifier, PSDKAKoin_coreKoinComponent, PSDKAKtor_httpParameters, PSDKAKotlinMapEntry, PSDKAKtor_utilsStringValues, PSDKAKtor_ioReadSession, PSDKAKotlinSuspendFunction1, PSDKAKotlinAppendable, PSDKAKtor_utilsStringValuesBuilder, PSDKAKtor_httpParametersBuilder, PSDKAKotlinKType, PSDKAKtor_ioObjectPool;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface PSDKABase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface PSDKABase (PSDKABaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface PSDKAMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface PSDKAMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorPSDKAKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface PSDKANumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface PSDKAByte : PSDKANumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface PSDKAUByte : PSDKANumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface PSDKAShort : PSDKANumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface PSDKAUShort : PSDKANumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface PSDKAInt : PSDKANumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface PSDKAUInt : PSDKANumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface PSDKALong : PSDKANumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface PSDKAULong : PSDKANumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface PSDKAFloat : PSDKANumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface PSDKADouble : PSDKANumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface PSDKABoolean : PSDKANumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dummy")))
@interface PSDKADummy : PSDKABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("SdkModule")))
@protocol PSDKASdkModule
@required
- (void)install __attribute__((swift_name("install()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardChargeModule")))
@interface PSDKACardChargeModule : PSDKABase <PSDKASdkModule>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cardChargeModule __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKACardChargeModule *shared __attribute__((swift_name("shared")));
- (void)install __attribute__((swift_name("install()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol PSDKAKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface PSDKAKotlinEnum<E> : PSDKABase <PSDKAKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PSDKAKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Environment")))
@interface PSDKAEnvironment : PSDKAKotlinEnum<PSDKAEnvironment *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSDKAEnvironment *production __attribute__((swift_name("production")));
@property (class, readonly) PSDKAEnvironment *sandbox __attribute__((swift_name("sandbox")));
+ (PSDKAKotlinArray<PSDKAEnvironment *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PSDKAEnvironment *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("P24")))
@interface PSDKAP24 : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)p24 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAP24 *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Browser")))
@interface PSDKABrowser : PSDKABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)loadUrlUrl:(NSString *)url __attribute__((swift_name("loadUrl(url:)")));
@property (readonly) UIView *view __attribute__((swift_name("view")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DownloadConfigStatus")))
@interface PSDKADownloadConfigStatus : PSDKAKotlinEnum<PSDKADownloadConfigStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSDKADownloadConfigStatus *success __attribute__((swift_name("success")));
@property (class, readonly) PSDKADownloadConfigStatus *fail __attribute__((swift_name("fail")));
+ (PSDKAKotlinArray<PSDKADownloadConfigStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PSDKADownloadConfigStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeoutEvent")))
@interface PSDKATimeoutEvent : PSDKAKotlinEnum<PSDKATimeoutEvent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSDKATimeoutEvent *toolongno3ds __attribute__((swift_name("toolongno3ds")));
@property (class, readonly) PSDKATimeoutEvent *toolongnosuccess __attribute__((swift_name("toolongnosuccess")));
+ (PSDKAKotlinArray<PSDKATimeoutEvent *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PSDKATimeoutEvent *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardRequest")))
@interface PSDKACardRequest : PSDKABase
- (void)cancel __attribute__((swift_name("cancel()")));
- (id<PSDKAKotlinx_coroutines_coreJob>)start __attribute__((swift_name("start()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardRequestBuilder")))
@interface PSDKACardRequestBuilder : PSDKABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PSDKACardRequest *)build __attribute__((swift_name("build()")));
- (PSDKACardRequestBuilder *)callbackCallback:(id<PSDKACardRequestCallback>)callback __attribute__((swift_name("callback(callback:)")));
- (PSDKACardRequestBuilder *)environmentEnvironment:(PSDKAEnvironment *)environment __attribute__((swift_name("environment(environment:)")));
- (PSDKACardRequestBuilder *)tokenToken:(NSString *)token __attribute__((swift_name("token(token:)")));
@end

__attribute__((swift_name("CardRequestCallback")))
@protocol PSDKACardRequestCallback
@required
- (void)invokeEvent:(PSDKACardRequestEvent *)event __attribute__((swift_name("invoke(event:)")));
@end

__attribute__((swift_name("CardRequestEvent")))
@interface PSDKACardRequestEvent : PSDKABase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardRequestEvent.Need3DS")))
@interface PSDKACardRequestEventNeed3DS : PSDKACardRequestEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)need3DS __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKACardRequestEventNeed3DS *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardRequestEvent.ProcessCanceled")))
@interface PSDKACardRequestEventProcessCanceled : PSDKACardRequestEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)processCanceled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKACardRequestEventProcessCanceled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardRequestEvent.ProcessCompleted")))
@interface PSDKACardRequestEventProcessCompleted : PSDKACardRequestEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)processCompleted __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKACardRequestEventProcessCompleted *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardRequestEvent.ProcessError")))
@interface PSDKACardRequestEventProcessError : PSDKACardRequestEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)processError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKACardRequestEventProcessError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardRequestEvent.ProcessStarted")))
@interface PSDKACardRequestEventProcessStarted : PSDKACardRequestEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)processStarted __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKACardRequestEventProcessStarted *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BorderStyle")))
@interface PSDKABorderStyle : PSDKABase
- (instancetype)initWithHexColor:(NSString * _Nullable)hexColor __attribute__((swift_name("init(hexColor:)"))) __attribute__((objc_designated_initializer));
- (PSDKABorderStyle *)doCopyHexColor:(NSString * _Nullable)hexColor __attribute__((swift_name("doCopy(hexColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ButtonStyle")))
@interface PSDKAButtonStyle : PSDKABase
- (instancetype)initWithLabel:(NSString * _Nullable)label hexColor:(NSString * _Nullable)hexColor labelHexColor:(NSString * _Nullable)labelHexColor __attribute__((swift_name("init(label:hexColor:labelHexColor:)"))) __attribute__((objc_designated_initializer));
- (PSDKAButtonStyle *)doCopyLabel:(NSString * _Nullable)label hexColor:(NSString * _Nullable)hexColor labelHexColor:(NSString * _Nullable)labelHexColor __attribute__((swift_name("doCopy(label:hexColor:labelHexColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSString * _Nullable labelColor __attribute__((swift_name("labelColor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardOrganization")))
@interface PSDKACardOrganization : PSDKAKotlinEnum<PSDKACardOrganization *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSDKACardOrganization *visa __attribute__((swift_name("visa")));
@property (class, readonly) PSDKACardOrganization *mastercard __attribute__((swift_name("mastercard")));
+ (PSDKAKotlinArray<PSDKACardOrganization *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PSDKACardOrganization *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardTokenizeModule")))
@interface PSDKACardTokenizeModule : PSDKABase <PSDKASdkModule>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cardTokenizeModule __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKACardTokenizeModule *shared __attribute__((swift_name("shared")));
- (void)install __attribute__((swift_name("install()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormStyle")))
@interface PSDKAFormStyle : PSDKABase
- (instancetype)initWithCardNumber:(PSDKAInputStyle * _Nullable)cardNumber cardHolder:(PSDKAInputStyle * _Nullable)cardHolder cvv:(PSDKAInputStyle * _Nullable)cvv expiryDate:(PSDKAInputStyle * _Nullable)expiryDate payButton:(PSDKAButtonStyle * _Nullable)payButton saveAndPayButton:(PSDKAButtonStyle * _Nullable)saveAndPayButton __attribute__((swift_name("init(cardNumber:cardHolder:cvv:expiryDate:payButton:saveAndPayButton:)"))) __attribute__((objc_designated_initializer));
- (PSDKAFormStyle *)doCopyCardNumber:(PSDKAInputStyle * _Nullable)cardNumber cardHolder:(PSDKAInputStyle * _Nullable)cardHolder cvv:(PSDKAInputStyle * _Nullable)cvv expiryDate:(PSDKAInputStyle * _Nullable)expiryDate payButton:(PSDKAButtonStyle * _Nullable)payButton saveAndPayButton:(PSDKAButtonStyle * _Nullable)saveAndPayButton __attribute__((swift_name("doCopy(cardNumber:cardHolder:cvv:expiryDate:payButton:saveAndPayButton:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PSDKAInputStyle * _Nullable cardHolder __attribute__((swift_name("cardHolder")));
@property (readonly) PSDKAInputStyle * _Nullable cardNumber __attribute__((swift_name("cardNumber")));
@property (readonly) PSDKAInputStyle * _Nullable cvv __attribute__((swift_name("cvv")));
@property (readonly) PSDKAInputStyle * _Nullable expiryDate __attribute__((swift_name("expiryDate")));
@property (readonly) PSDKAButtonStyle * _Nullable payButton __attribute__((swift_name("payButton")));
@property (readonly) PSDKAButtonStyle * _Nullable saveAndPayButton __attribute__((swift_name("saveAndPayButton")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputStyle")))
@interface PSDKAInputStyle : PSDKABase
- (instancetype)initWithPlaceholder:(NSString * _Nullable)placeholder label:(NSString * _Nullable)label border:(PSDKABorderStyle * _Nullable)border backgroundHexColor:(NSString * _Nullable)backgroundHexColor __attribute__((swift_name("init(placeholder:label:border:backgroundHexColor:)"))) __attribute__((objc_designated_initializer));
- (PSDKAInputStyle *)doCopyPlaceholder:(NSString * _Nullable)placeholder label:(NSString * _Nullable)label border:(PSDKABorderStyle * _Nullable)border backgroundHexColor:(NSString * _Nullable)backgroundHexColor __attribute__((swift_name("doCopy(placeholder:label:border:backgroundHexColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable background __attribute__((swift_name("background")));
@property (readonly) PSDKABorderStyle * _Nullable border __attribute__((swift_name("border")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSString * _Nullable placeholder __attribute__((swift_name("placeholder")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TOSCheckbox")))
@interface PSDKATOSCheckbox : PSDKABase
- (instancetype)initWithIsUserAllowedToChange:(BOOL)isUserAllowedToChange isChecked:(BOOL)isChecked __attribute__((swift_name("init(isUserAllowedToChange:isChecked:)"))) __attribute__((objc_designated_initializer));
- (PSDKATOSCheckbox *)doCopyIsUserAllowedToChange:(BOOL)isUserAllowedToChange isChecked:(BOOL)isChecked __attribute__((swift_name("doCopy(isUserAllowedToChange:isChecked:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isChecked __attribute__((swift_name("isChecked")));
@property (readonly) BOOL isUserAllowedToChange __attribute__((swift_name("isUserAllowedToChange")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TermsOfServiceConfig")))
@interface PSDKATermsOfServiceConfig : PSDKABase
- (instancetype)initWithIsVisible:(BOOL)isVisible checkbox:(PSDKATOSCheckbox *)checkbox __attribute__((swift_name("init(isVisible:checkbox:)"))) __attribute__((objc_designated_initializer));
- (PSDKATermsOfServiceConfig *)doCopyIsVisible:(BOOL)isVisible checkbox:(PSDKATOSCheckbox *)checkbox __attribute__((swift_name("doCopy(isVisible:checkbox:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PSDKATOSCheckbox *checkbox __attribute__((swift_name("checkbox")));
@property (readonly) BOOL isVisible __attribute__((swift_name("isVisible")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenizationMode")))
@interface PSDKATokenizationMode : PSDKAKotlinEnum<PSDKATokenizationMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSDKATokenizationMode *permanent __attribute__((swift_name("permanent")));
@property (class, readonly) PSDKATokenizationMode *temporary __attribute__((swift_name("temporary")));
+ (PSDKAKotlinArray<PSDKATokenizationMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PSDKATokenizationMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenizedCard")))
@interface PSDKATokenizedCard : PSDKABase
- (instancetype)initWithBin:(NSString *)bin hash:(NSString *)hash refId:(NSString *)refId mask:(NSString *)mask cardType:(NSString *)cardType cardDate:(NSString *)cardDate cardCountry:(NSString *)cardCountry bank:(NSString *)bank __attribute__((swift_name("init(bin:hash:refId:mask:cardType:cardDate:cardCountry:bank:)"))) __attribute__((objc_designated_initializer));
- (PSDKATokenizedCard *)doCopyBin:(NSString *)bin hash:(NSString *)hash refId:(NSString *)refId mask:(NSString *)mask cardType:(NSString *)cardType cardDate:(NSString *)cardDate cardCountry:(NSString *)cardCountry bank:(NSString *)bank __attribute__((swift_name("doCopy(bin:hash:refId:mask:cardType:cardDate:cardCountry:bank:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("TokenizationCallback")))
@protocol PSDKATokenizationCallback
@required
- (void)onCanceled __attribute__((swift_name("onCanceled()")));
- (void)onFailedErrors:(NSArray<NSString *> *)errors __attribute__((swift_name("onFailed(errors:)")));
- (void)onStarted __attribute__((swift_name("onStarted()")));
- (void)onSuccessTokenizedCard:(PSDKATokenizedCard *)tokenizedCard __attribute__((swift_name("onSuccess(tokenizedCard:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenizeCardRequest")))
@interface PSDKATokenizeCardRequest : PSDKABase
- (void)start __attribute__((swift_name("start()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenizeCardRequestBuilder")))
@interface PSDKATokenizeCardRequestBuilder : PSDKABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PSDKATokenizeCardRequestBuilder *)allowedTokenizationModesModes:(NSArray<PSDKATokenizationMode *> *)modes __attribute__((swift_name("allowedTokenizationModes(modes:)")));
- (PSDKATokenizeCardRequest *)build __attribute__((swift_name("build()")));
- (PSDKATokenizeCardRequestBuilder *)callbackCallback:(id<PSDKATokenizationCallback>)callback __attribute__((swift_name("callback(callback:)")));
- (PSDKATokenizeCardRequestBuilder *)environmentEnvironment:(PSDKAEnvironment *)environment __attribute__((swift_name("environment(environment:)")));
- (PSDKATokenizeCardRequestBuilder *)formStyleStyle:(PSDKAFormStyle *)style __attribute__((swift_name("formStyle(style:)")));
- (PSDKATokenizeCardRequestBuilder *)merchantIdId:(int32_t)id __attribute__((swift_name("merchantId(id:)")));
- (PSDKATokenizeCardRequestBuilder *)sessionIdId:(NSString *)id __attribute__((swift_name("sessionId(id:)")));
- (PSDKATokenizeCardRequestBuilder *)signSign:(NSString *)sign __attribute__((swift_name("sign(sign:)")));
- (PSDKATokenizeCardRequestBuilder *)termsOfServiceConfigConfig:(PSDKATermsOfServiceConfig *)config __attribute__((swift_name("termsOfServiceConfig(config:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config")))
@interface PSDKAConfig : PSDKABase
- (instancetype)initWithWebsocketUrl:(NSString *)websocketUrl timeoutTooLongNo3DS:(int64_t)timeoutTooLongNo3DS timeoutTooLongNoSuccess:(int64_t)timeoutTooLongNoSuccess __attribute__((swift_name("init(websocketUrl:timeoutTooLongNo3DS:timeoutTooLongNoSuccess:)"))) __attribute__((objc_designated_initializer));
- (PSDKAConfig *)doCopyWebsocketUrl:(NSString *)websocketUrl timeoutTooLongNo3DS:(int64_t)timeoutTooLongNo3DS timeoutTooLongNoSuccess:(int64_t)timeoutTooLongNoSuccess __attribute__((swift_name("doCopy(websocketUrl:timeoutTooLongNo3DS:timeoutTooLongNoSuccess:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t timeoutTooLongNo3DS __attribute__((swift_name("timeoutTooLongNo3DS")));
@property (readonly) int64_t timeoutTooLongNoSuccess __attribute__((swift_name("timeoutTooLongNoSuccess")));
@property (readonly) NSString *websocketUrl __attribute__((swift_name("websocketUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetConfig")))
@interface PSDKAGetConfig : PSDKABase
- (instancetype)initWithMakeGetRequest:(PSDKAMakeGetRequest *)makeGetRequest decodeFromJsonString:(PSDKADecodeFromJsonString *)decodeFromJsonString __attribute__((swift_name("init(makeGetRequest:decodeFromJsonString:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeEnvironment:(PSDKAEnvironment *)environment token:(PSDKAP24Token *)token completionHandler:(void (^)(PSDKAConfig * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(environment:token:completionHandler:)")));
@end

__attribute__((swift_name("Either")))
@interface PSDKAEither<__covariant A, __covariant B> : PSDKABase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EitherLeft")))
@interface PSDKAEitherLeft<A> : PSDKAEither<A, PSDKAKotlinNothing *>
- (instancetype)initWithValue:(A _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (readonly) A _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EitherRight")))
@interface PSDKAEitherRight<B> : PSDKAEither<PSDKAKotlinNothing *, B>
- (instancetype)initWithValue:(B _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (readonly) B _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("P24Token")))
@interface PSDKAP24Token : PSDKABase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (PSDKAP24Token *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseClient")))
@interface PSDKABaseClient : PSDKABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) PSDKAKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DecodeFromJsonString")))
@interface PSDKADecodeFromJsonString : PSDKABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)invokeJsonString:(NSString *)jsonString __attribute__((swift_name("invoke(jsonString:)")));
@property (readonly) PSDKAKotlinx_serialization_jsonJson *json __attribute__((swift_name("json")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EncodeToJsonString")))
@interface PSDKAEncodeToJsonString : PSDKABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)invokeValue:(id)value __attribute__((swift_name("invoke(value:)")));
@property (readonly) PSDKAKotlinx_serialization_jsonJson *json __attribute__((swift_name("json")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MakeGetRequest")))
@interface PSDKAMakeGetRequest : PSDKABase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeUrl:(NSString *)url params:(NSDictionary<NSString *, id> *)params cookies:(NSDictionary<NSString *, id> *)cookies completionHandler:(void (^)(PSDKAEither<PSDKAResponse *, id<PSDKAPostError>> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(url:params:cookies:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MakePostRequest")))
@interface PSDKAMakePostRequest : PSDKABase
- (instancetype)initWithBaseClient:(PSDKABaseClient *)baseClient __attribute__((swift_name("init(baseClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeUrl:(NSString *)url body:(NSString *)body cookies:(NSDictionary<NSString *, id> *)cookies completionHandler:(void (^)(PSDKAEither<PSDKAResponse *, id<PSDKAPostError>> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(url:body:cookies:completionHandler:)")));
@end

__attribute__((swift_name("PostError")))
@protocol PSDKAPostError
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostErrorNoConnection")))
@interface PSDKAPostErrorNoConnection : PSDKABase <PSDKAPostError>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)noConnection __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAPostErrorNoConnection *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostErrorServerError")))
@interface PSDKAPostErrorServerError : PSDKABase <PSDKAPostError>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)serverError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAPostErrorServerError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Response")))
@interface PSDKAResponse : PSDKABase
- (instancetype)initWithHeaders:(NSDictionary<NSString *, NSArray<NSString *> *> *)headers body:(NSString *)body statusCode:(int32_t)statusCode __attribute__((swift_name("init(headers:body:statusCode:)"))) __attribute__((objc_designated_initializer));
- (PSDKAResponse *)doCopyHeaders:(NSDictionary<NSString *, NSArray<NSString *> *> *)headers body:(NSString *)body statusCode:(int32_t)statusCode __attribute__((swift_name("doCopy(headers:body:statusCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *body __attribute__((swift_name("body")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *headers __attribute__((swift_name("headers")));
@property (readonly) int32_t statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol PSDKAKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<PSDKAKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("ViewModel")))
@interface PSDKAViewModel<S, E> : PSDKABase <PSDKAKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithInitialState:(S _Nullable)initialState __attribute__((swift_name("init(initialState:)"))) __attribute__((objc_designated_initializer));
- (void)dispose __attribute__((swift_name("dispose()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)emitEventEvent:(id _Nullable)event __attribute__((swift_name("emitEvent(event:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<PSDKAKotlinx_coroutines_coreFlow>)listenEvents __attribute__((swift_name("listenEvents()")));
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
- (void)onInit __attribute__((swift_name("onInit()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)setStateBlock:(S _Nullable (^)(S _Nullable))block __attribute__((swift_name("setState(block:)")));
- (void)setup __attribute__((swift_name("setup()")));
@property (readonly) id<PSDKAKotlinx_coroutines_coreMutableSharedFlow> _events __attribute__((swift_name("_events")));
@property (readonly) id<PSDKAKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<PSDKAKotlinx_coroutines_coreFlow> state __attribute__((swift_name("state")));
@end

__attribute__((swift_name("Event")))
@protocol PSDKAEvent
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventBus")))
@interface PSDKAEventBus : PSDKABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<PSDKAKotlinx_coroutines_coreFlow>)listen __attribute__((swift_name("listen()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postEvent:(id<PSDKAEvent>)event completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("post(event:completionHandler:)")));
@property (readonly) id<PSDKAKotlinx_coroutines_coreMutableSharedFlow> _events __attribute__((swift_name("_events")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_loggingLoggerCompanion")))
@interface PSDKAKtor_client_loggingLoggerCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_client_loggingLoggerCompanion *shared __attribute__((swift_name("shared")));
@end

@interface PSDKAKtor_client_loggingLoggerCompanion (Extensions)
@property (readonly) id<PSDKAKtor_client_loggingLogger> P24 __attribute__((swift_name("P24")));
@end

@interface PSDKAEnvironment (Extensions)
- (NSString *)getTokenizationUrl __attribute__((swift_name("getTokenizationUrl()")));
@end

@interface PSDKAP24 (Extensions)
- (PSDKACardRequestBuilder *)cardRequest __attribute__((swift_name("cardRequest()")));
- (void)installModules:(NSArray<id<PSDKASdkModule>> *)modules __attribute__((swift_name("install(modules:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EncodeToJsonStringKt")))
@interface PSDKAEncodeToJsonStringKt : PSDKABase
+ (PSDKAKotlinx_serialization_jsonJsonElement *)toJsonElement:(NSDictionary<id, id> *)receiver __attribute__((swift_name("toJsonElement(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoggerKt")))
@interface PSDKALoggerKt : PSDKABase
+ (void)logKey:(NSString *)key message:(NSString *)message __attribute__((swift_name("log(key:message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoParameterExceptionKt")))
@interface PSDKANoParameterExceptionKt : PSDKABase
+ (id _Nullable)orThrow:(id _Nullable)receiver parameterName:(NSString *)parameterName __attribute__((swift_name("orThrow(_:parameterName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformModuleKt")))
@interface PSDKAPlatformModuleKt : PSDKABase
@property (class, readonly) PSDKAKoin_coreModule *platformModule __attribute__((swift_name("platformModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformModuleKt_")))
@interface PSDKAPlatformModuleKt_ : PSDKABase
@property (class, readonly) PSDKAKoin_coreModule *platformModule __attribute__((swift_name("platformModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RandomString_iosKt")))
@interface PSDKARandomString_iosKt : PSDKABase
+ (NSString *)randomString __attribute__((swift_name("randomString()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkModuleKt")))
@interface PSDKASdkModuleKt : PSDKABase
+ (id<PSDKAKotlinLazy>)sdkInject __attribute__((swift_name("sdkInject()")));
@property (class, readonly) PSDKAKoin_coreKoinApplication *sdkContext __attribute__((swift_name("sdkContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface PSDKAKotlinEnumCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface PSDKAKotlinArray<T> : PSDKABase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(PSDKAInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<PSDKAKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol PSDKAKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<PSDKAKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<PSDKAKotlinCoroutineContextElement> _Nullable)getKey:(id<PSDKAKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<PSDKAKotlinCoroutineContext>)minusKeyKey:(id<PSDKAKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<PSDKAKotlinCoroutineContext>)plusContext:(id<PSDKAKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol PSDKAKotlinCoroutineContextElement <PSDKAKotlinCoroutineContext>
@required
@property (readonly) id<PSDKAKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol PSDKAKotlinx_coroutines_coreJob <PSDKAKotlinCoroutineContextElement>
@required
- (id<PSDKAKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<PSDKAKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(PSDKAKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (PSDKAKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<PSDKAKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(PSDKAKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<PSDKAKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(PSDKAKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<PSDKAKotlinx_coroutines_coreJob>)plusOther:(id<PSDKAKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<PSDKAKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<PSDKAKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<PSDKAKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface PSDKAKotlinThrowable : PSDKABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PSDKAKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PSDKAKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (PSDKAKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PSDKAKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface PSDKAKotlinException : PSDKAKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PSDKAKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PSDKAKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface PSDKAKotlinRuntimeException : PSDKAKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PSDKAKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PSDKAKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface PSDKAKotlinIllegalStateException : PSDKAKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PSDKAKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PSDKAKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface PSDKAKotlinCancellationException : PSDKAKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PSDKAKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PSDKAKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface PSDKAKotlinNothing : PSDKABase
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol PSDKAKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface PSDKAKtor_client_coreHttpClient : PSDKABase <PSDKAKotlinx_coroutines_coreCoroutineScope, PSDKAKtor_ioCloseable>
- (instancetype)initWithEngine:(id<PSDKAKtor_client_coreHttpClientEngine>)engine userConfig:(PSDKAKtor_client_coreHttpClientConfig<PSDKAKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (PSDKAKtor_client_coreHttpClient *)configBlock:(void (^)(PSDKAKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<PSDKAKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PSDKAKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<PSDKAKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<PSDKAKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) PSDKAKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) PSDKAKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) PSDKAKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) PSDKAKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) PSDKAKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) PSDKAKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol PSDKAKotlinx_serialization_coreSerialFormat
@required
@property (readonly) PSDKAKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol PSDKAKotlinx_serialization_coreStringFormat <PSDKAKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<PSDKAKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<PSDKAKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface PSDKAKotlinx_serialization_jsonJson : PSDKABase <PSDKAKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) PSDKAKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<PSDKAKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(PSDKAKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<PSDKAKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (PSDKAKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<PSDKAKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<PSDKAKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (PSDKAKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) PSDKAKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) PSDKAKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol PSDKAKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<PSDKAKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol PSDKAKotlinx_coroutines_coreSharedFlow <PSDKAKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol PSDKAKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol PSDKAKotlinx_coroutines_coreMutableSharedFlow <PSDKAKotlinx_coroutines_coreSharedFlow, PSDKAKotlinx_coroutines_coreFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<PSDKAKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((swift_name("Ktor_client_loggingLogger")))
@protocol PSDKAKtor_client_loggingLogger
@required
- (void)logMessage:(NSString *)message __attribute__((swift_name("log(message:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface PSDKAKotlinx_serialization_jsonJsonElement : PSDKABase
@property (class, readonly, getter=companion) PSDKAKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface PSDKAKoin_coreModule : PSDKABase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (PSDKAKoin_coreKoinDefinition<id> *)factoryQualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(PSDKAKoin_coreScope *, PSDKAKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(PSDKAKotlinArray<PSDKAKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(NSArray<PSDKAKoin_coreModule *> *)module __attribute__((swift_name("includes(module_:)")));
- (void)indexPrimaryTypeInstanceFactory:(PSDKAKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexPrimaryType(instanceFactory:)")));
- (void)indexSecondaryTypesInstanceFactory:(PSDKAKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexSecondaryTypes(instanceFactory:)")));
- (NSArray<PSDKAKoin_coreModule *> *)plusModules:(NSArray<PSDKAKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<PSDKAKoin_coreModule *> *)plusModule:(PSDKAKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)prepareForCreationAtStartInstanceFactory:(PSDKAKoin_coreSingleInstanceFactory<id> *)instanceFactory __attribute__((swift_name("prepareForCreationAtStart(instanceFactory:)")));
- (void)scopeScopeSet:(void (^)(PSDKAKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (void)scopeQualifier:(id<PSDKAKoin_coreQualifier>)qualifier scopeSet:(void (^)(PSDKAKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (PSDKAKoin_coreKoinDefinition<id> *)singleQualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(PSDKAKoin_coreScope *, PSDKAKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) PSDKAMutableSet<PSDKAKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSMutableArray<PSDKAKoin_coreModule *> *includedModules __attribute__((swift_name("includedModules")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@property (readonly) PSDKAMutableDictionary<NSString *, PSDKAKoin_coreInstanceFactory<id> *> *mappings __attribute__((swift_name("mappings")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol PSDKAKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication")))
@interface PSDKAKoin_coreKoinApplication : PSDKABase
@property (class, readonly, getter=companion) PSDKAKoin_coreKoinApplicationCompanion *companion __attribute__((swift_name("companion")));
- (void)allowOverrideOverride:(BOOL)override __attribute__((swift_name("allowOverride(override:)")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (PSDKAKoin_coreKoinApplication *)loggerLogger:(PSDKAKoin_coreLogger *)logger __attribute__((swift_name("logger(logger:)")));
- (PSDKAKoin_coreKoinApplication *)modulesModules:(PSDKAKotlinArray<PSDKAKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules:)")));
- (PSDKAKoin_coreKoinApplication *)modulesModules_:(NSArray<PSDKAKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules_:)")));
- (PSDKAKoin_coreKoinApplication *)modulesModules__:(PSDKAKoin_coreModule *)modules __attribute__((swift_name("modules(modules__:)")));
- (PSDKAKoin_coreKoinApplication *)printLoggerLevel:(PSDKAKoin_coreLevel *)level __attribute__((swift_name("printLogger(level:)")));
- (PSDKAKoin_coreKoinApplication *)propertiesValues:(NSDictionary<NSString *, id> *)values __attribute__((swift_name("properties(values:)")));
@property (readonly) PSDKAKoin_coreKoin *koin __attribute__((swift_name("koin")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol PSDKAKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol PSDKAKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol PSDKAKotlinx_coroutines_coreChildHandle <PSDKAKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(PSDKAKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<PSDKAKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol PSDKAKotlinx_coroutines_coreChildJob <PSDKAKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<PSDKAKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol PSDKAKotlinSequence
@required
- (id<PSDKAKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol PSDKAKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) PSDKAKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<PSDKAKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(PSDKAKotlinThrowable *) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<PSDKAKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol PSDKAKotlinx_coroutines_coreSelectClause0 <PSDKAKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol PSDKAKotlinCoroutineContextKey
@required
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol PSDKAKtor_client_coreHttpClientEngine <PSDKAKotlinx_coroutines_coreCoroutineScope, PSDKAKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(PSDKAKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(PSDKAKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(PSDKAKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) PSDKAKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) PSDKAKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<PSDKAKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface PSDKAKtor_client_coreHttpClientEngineConfig : PSDKABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property PSDKAKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface PSDKAKtor_client_coreHttpClientConfig<T> : PSDKABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PSDKAKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(PSDKAKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<PSDKAKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(PSDKAKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(PSDKAKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol PSDKAKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol PSDKAKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(PSDKAKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(PSDKAKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(PSDKAKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(PSDKAKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(PSDKAKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(PSDKAKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(PSDKAKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(PSDKAKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<PSDKAKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface PSDKAKtor_eventsEvents : PSDKABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(PSDKAKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<PSDKAKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(PSDKAKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(PSDKAKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface PSDKAKtor_utilsPipeline<TSubject, TContext> : PSDKABase
- (instancetype)initWithPhases:(PSDKAKotlinArray<PSDKAKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(PSDKAKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PSDKAKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(PSDKAKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(PSDKAKtor_utilsPipelinePhase *)reference phase:(PSDKAKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(PSDKAKtor_utilsPipelinePhase *)reference phase:(PSDKAKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(PSDKAKtor_utilsPipelinePhase *)phase block:(id<PSDKAKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<PSDKAKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(PSDKAKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(PSDKAKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(PSDKAKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(PSDKAKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<PSDKAKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<PSDKAKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface PSDKAKtor_client_coreHttpReceivePipeline : PSDKAKtor_utilsPipeline<PSDKAKtor_client_coreHttpResponse *, PSDKAKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(PSDKAKotlinArray<PSDKAKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(PSDKAKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PSDKAKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PSDKAKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface PSDKAKtor_client_coreHttpRequestPipeline : PSDKAKtor_utilsPipeline<id, PSDKAKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(PSDKAKotlinArray<PSDKAKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(PSDKAKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PSDKAKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PSDKAKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface PSDKAKtor_client_coreHttpResponsePipeline : PSDKAKtor_utilsPipeline<PSDKAKtor_client_coreHttpResponseContainer *, PSDKAKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(PSDKAKotlinArray<PSDKAKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(PSDKAKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PSDKAKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PSDKAKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface PSDKAKtor_client_coreHttpSendPipeline : PSDKAKtor_utilsPipeline<id, PSDKAKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(PSDKAKotlinArray<PSDKAKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(PSDKAKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PSDKAKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PSDKAKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol PSDKAKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<PSDKAKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<PSDKAKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol PSDKAKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<PSDKAKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<PSDKAKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface PSDKAKotlinx_serialization_coreSerializersModule : PSDKABase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<PSDKAKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PSDKAKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<PSDKAKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<PSDKAKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PSDKAKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PSDKAKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PSDKAKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PSDKAKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface PSDKAKotlinx_serialization_jsonJsonDefault : PSDKAKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface PSDKAKotlinx_serialization_jsonJsonConfiguration : PSDKABase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowTrailingComma __attribute__((swift_name("allowTrailingComma")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<PSDKAKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol PSDKAKotlinx_coroutines_coreStateFlow <PSDKAKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface PSDKAKotlinx_serialization_jsonJsonElementCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<PSDKAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinDefinition")))
@interface PSDKAKoin_coreKoinDefinition<R> : PSDKABase
- (instancetype)initWithModule:(PSDKAKoin_coreModule *)module factory:(PSDKAKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("init(module:factory:)"))) __attribute__((objc_designated_initializer));
- (PSDKAKoin_coreKoinDefinition<R> *)doCopyModule:(PSDKAKoin_coreModule *)module factory:(PSDKAKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("doCopy(module:factory:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PSDKAKoin_coreInstanceFactory<R> *factory __attribute__((swift_name("factory")));
@property (readonly) PSDKAKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((swift_name("Koin_coreQualifier")))
@protocol PSDKAKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Koin_coreLockable")))
@interface PSDKAKoin_coreLockable : PSDKABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface PSDKAKoin_coreScope : PSDKAKoin_coreLockable
- (instancetype)initWithScopeQualifier:(id<PSDKAKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(PSDKAKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (PSDKAKoin_coreScope *)doCopyScopeQualifier:(id<PSDKAKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(PSDKAKoin_coreKoin *)_koin __attribute__((swift_name("doCopy(scopeQualifier:id:isRoot:_koin:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<PSDKAKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id)getQualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier parameters:(PSDKAKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<PSDKAKotlinKClass>)clazz qualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier parameters:(PSDKAKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<PSDKAKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (PSDKAKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullQualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier parameters:(PSDKAKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<PSDKAKotlinKClass>)clazz qualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier parameters:(PSDKAKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (PSDKAKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()"))) __attribute__((deprecated("No need to use getSource(). You can an use get() directly.")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<PSDKAKotlinLazy>)injectQualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier mode:(PSDKAKotlinLazyThreadSafetyMode *)mode parameters:(PSDKAKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<PSDKAKotlinLazy>)injectOrNullQualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier mode:(PSDKAKotlinLazyThreadSafetyMode *)mode parameters:(PSDKAKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(PSDKAKotlinArray<PSDKAKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<PSDKAKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(PSDKAKotlinArray<PSDKAKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) NSMutableArray<PSDKAKoin_coreParametersHolder *> *_parameterStack __attribute__((swift_name("_parameterStack")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) PSDKAKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<PSDKAKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface PSDKAKoin_coreParametersHolder : PSDKABase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values __attribute__((swift_name("init(_values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PSDKAKoin_coreParametersHolderCompanion *companion __attribute__((swift_name("companion")));
- (PSDKAKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<PSDKAKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<PSDKAKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (PSDKAKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface PSDKAKoin_coreInstanceFactory<T> : PSDKAKoin_coreLockable
- (instancetype)initWithBeanDefinition:(PSDKAKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) PSDKAKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(PSDKAKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(PSDKAKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (T _Nullable)getContext:(PSDKAKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isCreatedContext:(PSDKAKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) PSDKAKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface PSDKAKoin_coreSingleInstanceFactory<T> : PSDKAKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(PSDKAKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(PSDKAKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(PSDKAKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(PSDKAKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(PSDKAKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface PSDKAKoin_coreScopeDSL : PSDKABase
- (instancetype)initWithScopeQualifier:(id<PSDKAKoin_coreQualifier>)scopeQualifier module:(PSDKAKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (PSDKAKoin_coreKoinDefinition<id> *)factoryQualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(PSDKAKoin_coreScope *, PSDKAKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (PSDKAKoin_coreKoinDefinition<id> *)scopedQualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(PSDKAKoin_coreScope *, PSDKAKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
@property (readonly) PSDKAKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<PSDKAKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication.Companion")))
@interface PSDKAKoin_coreKoinApplicationCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKoin_coreKoinApplicationCompanion *shared __attribute__((swift_name("shared")));
- (PSDKAKoin_coreKoinApplication *)doInit __attribute__((swift_name("doInit()")));
@end

__attribute__((swift_name("Koin_coreLogger")))
@interface PSDKAKoin_coreLogger : PSDKABase
- (instancetype)initWithLevel:(PSDKAKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)displayLevel:(PSDKAKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("display(level:msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(PSDKAKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(PSDKAKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLvl:(PSDKAKoin_coreLevel *)lvl msg_:(NSString *)msg __attribute__((swift_name("log(lvl:msg_:)")));
- (void)warnMsg:(NSString *)msg __attribute__((swift_name("warn(msg:)")));
@property PSDKAKoin_coreLevel *level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface PSDKAKoin_coreLevel : PSDKAKotlinEnum<PSDKAKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSDKAKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) PSDKAKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) PSDKAKoin_coreLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) PSDKAKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) PSDKAKoin_coreLevel *none __attribute__((swift_name("none")));
+ (PSDKAKotlinArray<PSDKAKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface PSDKAKoin_coreKoin : PSDKABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (PSDKAKoin_coreScope *)createScopeT:(id<PSDKAKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (PSDKAKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (PSDKAKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (PSDKAKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<PSDKAKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<PSDKAKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id)getQualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier parameters:(PSDKAKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<PSDKAKotlinKClass>)clazz qualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier parameters:(PSDKAKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (PSDKAKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (PSDKAKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<PSDKAKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullQualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier parameters:(PSDKAKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<PSDKAKotlinKClass>)clazz qualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier parameters:(PSDKAKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (PSDKAKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (PSDKAKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<PSDKAKotlinLazy>)injectQualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier mode:(PSDKAKotlinLazyThreadSafetyMode *)mode parameters:(PSDKAKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<PSDKAKotlinLazy>)injectOrNullQualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier mode:(PSDKAKotlinLazyThreadSafetyMode *)mode parameters:(PSDKAKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<PSDKAKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("loadModules(modules:allowOverride:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(PSDKAKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<PSDKAKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) PSDKAKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) PSDKAKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) PSDKAKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) PSDKAKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol PSDKAKotlinx_coroutines_coreParentJob <PSDKAKotlinx_coroutines_coreJob>
@required
- (PSDKAKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface PSDKAKotlinUnit : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol PSDKAKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<PSDKAKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<PSDKAKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface PSDKAKtor_client_coreHttpRequestData : PSDKABase
- (instancetype)initWithUrl:(PSDKAKtor_httpUrl *)url method:(PSDKAKtor_httpHttpMethod *)method headers:(id<PSDKAKtor_httpHeaders>)headers body:(PSDKAKtor_httpOutgoingContent *)body executionContext:(id<PSDKAKotlinx_coroutines_coreJob>)executionContext attributes:(id<PSDKAKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<PSDKAKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PSDKAKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) PSDKAKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<PSDKAKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<PSDKAKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) PSDKAKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) PSDKAKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface PSDKAKtor_client_coreHttpResponseData : PSDKABase
- (instancetype)initWithStatusCode:(PSDKAKtor_httpHttpStatusCode *)statusCode requestTime:(PSDKAKtor_utilsGMTDate *)requestTime headers:(id<PSDKAKtor_httpHeaders>)headers version:(PSDKAKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<PSDKAKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<PSDKAKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<PSDKAKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) PSDKAKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) PSDKAKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) PSDKAKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface PSDKAKotlinAbstractCoroutineContextElement : PSDKABase <PSDKAKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<PSDKAKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<PSDKAKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol PSDKAKotlinContinuationInterceptor <PSDKAKotlinCoroutineContextElement>
@required
- (id<PSDKAKotlinContinuation>)interceptContinuationContinuation:(id<PSDKAKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<PSDKAKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface PSDKAKotlinx_coroutines_coreCoroutineDispatcher : PSDKAKotlinAbstractCoroutineContextElement <PSDKAKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<PSDKAKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PSDKAKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<PSDKAKotlinCoroutineContext>)context block:(id<PSDKAKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<PSDKAKotlinCoroutineContext>)context block:(id<PSDKAKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<PSDKAKotlinContinuation>)interceptContinuationContinuation:(id<PSDKAKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<PSDKAKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (PSDKAKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (PSDKAKotlinx_coroutines_coreCoroutineDispatcher *)plusOther_:(PSDKAKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<PSDKAKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface PSDKAKtor_client_coreProxyConfig : PSDKABase
- (instancetype)initWithUrl:(PSDKAKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PSDKAKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol PSDKAKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(PSDKAKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) PSDKAKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface PSDKAKtor_utilsAttributeKey<T> : PSDKABase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface PSDKAKtor_eventsEventDefinition<T> : PSDKABase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface PSDKAKtor_utilsPipelinePhase : PSDKABase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol PSDKAKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol PSDKAKotlinSuspendFunction2 <PSDKAKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface PSDKAKtor_client_coreHttpReceivePipelinePhases : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PSDKAKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) PSDKAKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) PSDKAKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol PSDKAKtor_httpHttpMessage
@required
@property (readonly) id<PSDKAKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface PSDKAKtor_client_coreHttpResponse : PSDKABase <PSDKAKtor_httpHttpMessage, PSDKAKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PSDKAKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<PSDKAKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) PSDKAKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) PSDKAKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) PSDKAKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface PSDKAKtor_client_coreHttpRequestPipelinePhases : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PSDKAKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) PSDKAKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) PSDKAKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) PSDKAKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) PSDKAKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol PSDKAKtor_httpHttpMessageBuilder
@required
@property (readonly) PSDKAKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface PSDKAKtor_client_coreHttpRequestBuilder : PSDKABase <PSDKAKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) PSDKAKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (PSDKAKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<PSDKAKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<PSDKAKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<PSDKAKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (PSDKAKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(PSDKAKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (PSDKAKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(PSDKAKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(PSDKAKtor_httpURLBuilder *, PSDKAKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<PSDKAKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property PSDKAKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<PSDKAKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) PSDKAKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property PSDKAKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) PSDKAKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface PSDKAKtor_client_coreHttpResponsePipelinePhases : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PSDKAKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) PSDKAKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) PSDKAKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) PSDKAKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) PSDKAKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface PSDKAKtor_client_coreHttpResponseContainer : PSDKABase
- (instancetype)initWithExpectedType:(PSDKAKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (PSDKAKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(PSDKAKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PSDKAKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface PSDKAKtor_client_coreHttpClientCall : PSDKABase <PSDKAKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(PSDKAKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(PSDKAKtor_client_coreHttpClient *)client requestData:(PSDKAKtor_client_coreHttpRequestData *)requestData responseData:(PSDKAKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PSDKAKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(PSDKAKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(PSDKAKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<PSDKAKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<PSDKAKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) PSDKAKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<PSDKAKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<PSDKAKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property PSDKAKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface PSDKAKtor_client_coreHttpSendPipelinePhases : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PSDKAKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) PSDKAKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) PSDKAKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) PSDKAKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) PSDKAKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol PSDKAKotlinx_serialization_coreDecoder
@required
- (id<PSDKAKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<PSDKAKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (PSDKAKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<PSDKAKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<PSDKAKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) PSDKAKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol PSDKAKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<PSDKAKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PSDKAKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<PSDKAKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) PSDKAKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol PSDKAKotlinx_serialization_coreEncoder
@required
- (id<PSDKAKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<PSDKAKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<PSDKAKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<PSDKAKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<PSDKAKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) PSDKAKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol PSDKAKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<PSDKAKotlinKClass>)kClass provider:(id<PSDKAKotlinx_serialization_coreKSerializer> (^)(NSArray<id<PSDKAKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<PSDKAKotlinKClass>)kClass serializer:(id<PSDKAKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<PSDKAKotlinKClass>)baseClass actualClass:(id<PSDKAKotlinKClass>)actualClass actualSerializer:(id<PSDKAKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<PSDKAKotlinKClass>)baseClass defaultDeserializerProvider:(id<PSDKAKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<PSDKAKotlinKClass>)baseClass defaultDeserializerProvider:(id<PSDKAKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<PSDKAKotlinKClass>)baseClass defaultSerializerProvider:(id<PSDKAKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol PSDKAKotlinx_serialization_coreKSerializer <PSDKAKotlinx_serialization_coreSerializationStrategy, PSDKAKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol PSDKAKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol PSDKAKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol PSDKAKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol PSDKAKotlinKClass <PSDKAKotlinKDeclarationContainer, PSDKAKotlinKAnnotatedElement, PSDKAKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol PSDKAKotlinx_serialization_jsonJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface PSDKAKotlinLazyThreadSafetyMode : PSDKAKotlinEnum<PSDKAKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSDKAKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) PSDKAKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) PSDKAKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (PSDKAKotlinArray<PSDKAKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PSDKAKotlinLazyThreadSafetyMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol PSDKAKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(PSDKAKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreParametersHolder.Companion")))
@interface PSDKAKoin_coreParametersHolderCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKoin_coreParametersHolderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_PARAMS __attribute__((swift_name("MAX_PARAMS")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface PSDKAKoin_coreBeanDefinition<T> : PSDKABase
- (instancetype)initWithScopeQualifier:(id<PSDKAKoin_coreQualifier>)scopeQualifier primaryType:(id<PSDKAKotlinKClass>)primaryType qualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(PSDKAKoin_coreScope *, PSDKAKoin_coreParametersHolder *))definition kind:(PSDKAKoin_coreKind *)kind secondaryTypes:(NSArray<id<PSDKAKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (PSDKAKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<PSDKAKoin_coreQualifier>)scopeQualifier primaryType:(id<PSDKAKotlinKClass>)primaryType qualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(PSDKAKoin_coreScope *, PSDKAKoin_coreParametersHolder *))definition kind:(PSDKAKoin_coreKind *)kind secondaryTypes:(NSArray<id<PSDKAKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<PSDKAKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<PSDKAKotlinKClass>)clazz qualifier:(id<PSDKAKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<PSDKAKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property PSDKAKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(PSDKAKoin_coreScope *, PSDKAKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) PSDKAKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<PSDKAKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<PSDKAKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<PSDKAKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<PSDKAKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface PSDKAKoin_coreInstanceFactoryCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface PSDKAKoin_coreInstanceContext : PSDKABase
- (instancetype)initWithKoin:(PSDKAKoin_coreKoin *)koin scope:(PSDKAKoin_coreScope *)scope parameters:(PSDKAKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(koin:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) PSDKAKoin_coreKoin *koin __attribute__((swift_name("koin")));
@property (readonly) PSDKAKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) PSDKAKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol PSDKAKoin_coreKoinComponent
@required
- (PSDKAKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol PSDKAKoin_coreKoinScopeComponent <PSDKAKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()")));
@property (readonly) PSDKAKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface PSDKAKoin_coreInstanceRegistry : PSDKABase
- (instancetype)initWith_koin:(PSDKAKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(PSDKAKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) PSDKAKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, PSDKAKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface PSDKAKoin_corePropertyRegistry : PSDKABase
- (instancetype)initWith_koin:(PSDKAKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface PSDKAKoin_coreScopeRegistry : PSDKABase
- (instancetype)initWith_koin:(PSDKAKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PSDKAKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<PSDKAKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) PSDKAKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<PSDKAKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface PSDKAKtor_httpUrl : PSDKABase
@property (class, readonly, getter=companion) PSDKAKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<PSDKAKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) PSDKAKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface PSDKAKtor_httpHttpMethod : PSDKABase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PSDKAKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (PSDKAKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol PSDKAKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<PSDKAKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol PSDKAKtor_httpHeaders <PSDKAKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface PSDKAKtor_httpOutgoingContent : PSDKABase
- (id _Nullable)getPropertyKey:(PSDKAKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(PSDKAKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<PSDKAKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) PSDKALong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) PSDKAKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<PSDKAKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) PSDKAKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface PSDKAKtor_httpHttpStatusCode : PSDKABase <PSDKAKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PSDKAKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(PSDKAKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (PSDKAKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (PSDKAKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface PSDKAKtor_utilsGMTDate : PSDKABase <PSDKAKotlinComparable>
@property (class, readonly, getter=companion) PSDKAKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(PSDKAKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (PSDKAKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(PSDKAKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(PSDKAKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) PSDKAKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) PSDKAKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface PSDKAKtor_httpHttpProtocolVersion : PSDKABase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PSDKAKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (PSDKAKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol PSDKAKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<PSDKAKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface PSDKAKotlinAbstractCoroutineContextKey<B, E> : PSDKABase <PSDKAKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<PSDKAKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<PSDKAKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface PSDKAKotlinx_coroutines_coreCoroutineDispatcherKey : PSDKAKotlinAbstractCoroutineContextKey<id<PSDKAKotlinContinuationInterceptor>, PSDKAKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<PSDKAKotlinCoroutineContextKey>)baseKey safeCast:(id<PSDKAKotlinCoroutineContextElement> _Nullable (^)(id<PSDKAKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol PSDKAKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol PSDKAKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(PSDKAKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(PSDKALong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(PSDKAKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(PSDKALong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(PSDKAKtor_ioChunkBuffer *)dst completionHandler:(void (^)(PSDKAInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(PSDKAKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(PSDKAKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(PSDKAInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(PSDKAInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(PSDKAInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(PSDKABoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(PSDKAByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(PSDKADouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(PSDKAFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(PSDKAKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(PSDKAKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(PSDKAInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(PSDKALong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(PSDKAKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(PSDKAKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<PSDKAKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(PSDKAShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<PSDKAKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<PSDKAKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(PSDKABoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) PSDKAKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol PSDKAKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<PSDKAKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<PSDKAKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<PSDKAKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<PSDKAKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface PSDKAKtor_utilsStringValuesBuilderImpl : PSDKABase <PSDKAKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<PSDKAKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<PSDKAKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<PSDKAKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<PSDKAKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) PSDKAMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface PSDKAKtor_httpHeadersBuilder : PSDKAKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<PSDKAKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface PSDKAKtor_client_coreHttpRequestBuilderCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface PSDKAKtor_httpURLBuilder : PSDKABase
- (instancetype)initWithProtocol:(PSDKAKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<PSDKAKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PSDKAKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (PSDKAKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<PSDKAKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<PSDKAKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property PSDKAKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface PSDKAKtor_utilsTypeInfo : PSDKABase
- (instancetype)initWithType:(id<PSDKAKotlinKClass>)type reifiedType:(id<PSDKAKotlinKType>)reifiedType kotlinType:(id<PSDKAKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (PSDKAKtor_utilsTypeInfo *)doCopyType:(id<PSDKAKotlinKClass>)type reifiedType:(id<PSDKAKotlinKType>)reifiedType kotlinType:(id<PSDKAKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PSDKAKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<PSDKAKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<PSDKAKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface PSDKAKtor_client_coreHttpClientCallCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PSDKAKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol PSDKAKtor_client_coreHttpRequest <PSDKAKtor_httpHttpMessage, PSDKAKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<PSDKAKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) PSDKAKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) PSDKAKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) PSDKAKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) PSDKAKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol PSDKAKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<PSDKAKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PSDKAKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PSDKAKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) PSDKAKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol PSDKAKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface PSDKAKotlinx_serialization_coreSerialKind : PSDKABase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol PSDKAKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<PSDKAKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PSDKAKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PSDKAKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<PSDKAKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) PSDKAKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface PSDKAKoin_coreKind : PSDKAKotlinEnum<PSDKAKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSDKAKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) PSDKAKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) PSDKAKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (PSDKAKotlinArray<PSDKAKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface PSDKAKoin_coreCallbacks<T> : PSDKABase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (PSDKAKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface PSDKAKoin_coreScopeRegistryCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface PSDKAKtor_httpUrlCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol PSDKAKtor_httpParameters <PSDKAKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface PSDKAKtor_httpURLProtocol : PSDKABase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PSDKAKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (PSDKAKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface PSDKAKtor_httpHttpMethodCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (PSDKAKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<PSDKAKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) PSDKAKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) PSDKAKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) PSDKAKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) PSDKAKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) PSDKAKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) PSDKAKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) PSDKAKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol PSDKAKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface PSDKAKtor_httpHeaderValueWithParameters : PSDKABase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<PSDKAKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PSDKAKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<PSDKAKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface PSDKAKtor_httpContentType : PSDKAKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<PSDKAKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<PSDKAKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PSDKAKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(PSDKAKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (PSDKAKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (PSDKAKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface PSDKAKtor_httpHttpStatusCodeCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (PSDKAKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) PSDKAKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<PSDKAKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface PSDKAKtor_utilsGMTDateCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PSDKAKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface PSDKAKtor_utilsWeekDay : PSDKAKotlinEnum<PSDKAKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PSDKAKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PSDKAKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) PSDKAKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) PSDKAKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) PSDKAKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) PSDKAKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) PSDKAKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) PSDKAKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (PSDKAKotlinArray<PSDKAKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface PSDKAKtor_utilsMonth : PSDKAKotlinEnum<PSDKAKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PSDKAKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PSDKAKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) PSDKAKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) PSDKAKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) PSDKAKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) PSDKAKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) PSDKAKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) PSDKAKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) PSDKAKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) PSDKAKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) PSDKAKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) PSDKAKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) PSDKAKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (PSDKAKotlinArray<PSDKAKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface PSDKAKtor_httpHttpProtocolVersionCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (PSDKAKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (PSDKAKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) PSDKAKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) PSDKAKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) PSDKAKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) PSDKAKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) PSDKAKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface PSDKAKtor_ioMemory : PSDKABase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PSDKAKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(PSDKAKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(PSDKAKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (PSDKAKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (PSDKAKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface PSDKAKtor_ioBuffer : PSDKABase
- (instancetype)initWithMemory:(PSDKAKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) PSDKAKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (PSDKAKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(PSDKAKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) PSDKAKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface PSDKAKtor_ioChunkBuffer : PSDKAKtor_ioBuffer
- (instancetype)initWithMemory:(PSDKAKtor_ioMemory *)memory origin:(PSDKAKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<PSDKAKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
- (instancetype)initWithMemory:(PSDKAKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PSDKAKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (PSDKAKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (PSDKAKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<PSDKAKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) PSDKAKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) PSDKAKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface PSDKAKotlinByteArray : PSDKABase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(PSDKAByte *(^)(PSDKAInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (PSDKAKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface PSDKAKtor_ioInput : PSDKABase <PSDKAKtor_ioCloseable>
- (instancetype)initWithHead:(PSDKAKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<PSDKAKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) PSDKAKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PSDKAKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(PSDKAKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int32_t)peekToBuffer:(PSDKAKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int64_t)peekToDestination:(PSDKAKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<PSDKAKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<PSDKAKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<PSDKAKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface PSDKAKtor_ioByteReadPacket : PSDKAKtor_ioInput
- (instancetype)initWithHead:(PSDKAKtor_ioChunkBuffer *)head pool:(id<PSDKAKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(PSDKAKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<PSDKAKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PSDKAKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (PSDKAKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PSDKAKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(PSDKAKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol PSDKAKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (PSDKAKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol PSDKAKotlinSuspendFunction1 <PSDKAKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol PSDKAKotlinAppendable
@required
- (id<PSDKAKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<PSDKAKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<PSDKAKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface PSDKAKtor_httpURLBuilderCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol PSDKAKtor_httpParametersBuilder <PSDKAKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((swift_name("KotlinKType")))
@protocol PSDKAKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<PSDKAKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<PSDKAKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface PSDKAKtor_httpURLProtocolCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (PSDKAKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) PSDKAKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) PSDKAKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) PSDKAKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) PSDKAKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) PSDKAKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, PSDKAKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface PSDKAKtor_httpHeaderValueParam : PSDKABase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (PSDKAKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface PSDKAKtor_httpHeaderValueWithParametersCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<PSDKAKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface PSDKAKtor_httpContentTypeCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (PSDKAKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) PSDKAKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface PSDKAKtor_utilsWeekDayCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (PSDKAKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (PSDKAKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface PSDKAKtor_utilsMonthCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (PSDKAKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (PSDKAKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface PSDKAKtor_ioMemoryCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PSDKAKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface PSDKAKtor_ioBufferCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PSDKAKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol PSDKAKtor_ioObjectPool <PSDKAKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface PSDKAKtor_ioChunkBufferCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PSDKAKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<PSDKAKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<PSDKAKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface PSDKAKotlinByteIterator : PSDKABase <PSDKAKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PSDKAByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface PSDKAKtor_ioInputCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface PSDKAKtor_ioByteReadPacketCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PSDKAKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface PSDKAKotlinKTypeProjection : PSDKABase
- (instancetype)initWithVariance:(PSDKAKotlinKVariance * _Nullable)variance type:(id<PSDKAKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PSDKAKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (PSDKAKotlinKTypeProjection *)doCopyVariance:(PSDKAKotlinKVariance * _Nullable)variance type:(id<PSDKAKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PSDKAKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) PSDKAKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface PSDKAKotlinKVariance : PSDKAKotlinEnum<PSDKAKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSDKAKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) PSDKAKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) PSDKAKotlinKVariance *out __attribute__((swift_name("out")));
+ (PSDKAKotlinArray<PSDKAKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PSDKAKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface PSDKAKotlinKTypeProjectionCompanion : PSDKABase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PSDKAKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (PSDKAKotlinKTypeProjection *)contravariantType:(id<PSDKAKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (PSDKAKotlinKTypeProjection *)covariantType:(id<PSDKAKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (PSDKAKotlinKTypeProjection *)invariantType:(id<PSDKAKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) PSDKAKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
