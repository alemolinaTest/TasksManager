#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class ComposeAppAddTaskUseCase, ComposeAppDomainTask, ComposeAppGetTaskByIdUseCase, ComposeAppGetTasksUseCase, ComposeAppKoin_coreBeanDefinition<T>, ComposeAppKoin_coreCallbacks<T>, ComposeAppKoin_coreExtensionManager, ComposeAppKoin_coreInstanceFactory<T>, ComposeAppKoin_coreInstanceFactoryCompanion, ComposeAppKoin_coreInstanceRegistry, ComposeAppKoin_coreKind, ComposeAppKoin_coreKoin, ComposeAppKoin_coreKoinApplication, ComposeAppKoin_coreKoinApplicationCompanion, ComposeAppKoin_coreKoinDefinition<R>, ComposeAppKoin_coreLevel, ComposeAppKoin_coreLockable, ComposeAppKoin_coreLogger, ComposeAppKoin_coreModule, ComposeAppKoin_coreParametersHolder, ComposeAppKoin_corePropertyRegistry, ComposeAppKoin_coreResolutionContext, ComposeAppKoin_coreScope, ComposeAppKoin_coreScopeDSL, ComposeAppKoin_coreScopeRegistry, ComposeAppKoin_coreScopeRegistryCompanion, ComposeAppKoin_coreSingleInstanceFactory<T>, ComposeAppKotlinArray<T>, ComposeAppKotlinByteArray, ComposeAppKotlinByteIterator, ComposeAppKotlinEnum<E>, ComposeAppKotlinEnumCompanion, ComposeAppKotlinException, ComposeAppKotlinIllegalStateException, ComposeAppKotlinLazyThreadSafetyMode, ComposeAppKotlinRuntimeException, ComposeAppKotlinThrowable, ComposeAppKotlinUnit, ComposeAppLocation, ComposeAppRemoveTaskUseCase, ComposeAppRuntimeAfterVersion, ComposeAppRuntimeBaseTransacterImpl, ComposeAppRuntimeExecutableQuery<__covariant RowType>, ComposeAppRuntimeQuery<__covariant RowType>, ComposeAppRuntimeTransacterImpl, ComposeAppRuntimeTransacterTransaction, ComposeAppTaskEntity, ComposeAppTaskEntityAdapter, ComposeAppTaskQueries, ComposeAppTaskViewModel, ComposeAppTasksDatabaseCompanion, ComposeAppToggleTaskUseCase, NSObject, UIViewController;

@protocol ComposeAppKoin_coreKoinComponent, ComposeAppKoin_coreKoinExtension, ComposeAppKoin_coreKoinScopeComponent, ComposeAppKoin_coreQualifier, ComposeAppKoin_coreScopeCallback, ComposeAppKotlinComparable, ComposeAppKotlinCoroutineContext, ComposeAppKotlinCoroutineContextElement, ComposeAppKotlinCoroutineContextKey, ComposeAppKotlinIterator, ComposeAppKotlinKAnnotatedElement, ComposeAppKotlinKClass, ComposeAppKotlinKClassifier, ComposeAppKotlinKDeclarationContainer, ComposeAppKotlinLazy, ComposeAppKotlinx_coroutines_coreCoroutineScope, ComposeAppKotlinx_coroutines_coreFlow, ComposeAppKotlinx_coroutines_coreFlowCollector, ComposeAppKotlinx_coroutines_coreSharedFlow, ComposeAppKotlinx_coroutines_coreStateFlow, ComposeAppPlatform, ComposeAppRuntimeCloseable, ComposeAppRuntimeColumnAdapter, ComposeAppRuntimeQueryListener, ComposeAppRuntimeQueryResult, ComposeAppRuntimeSqlCursor, ComposeAppRuntimeSqlDriver, ComposeAppRuntimeSqlPreparedStatement, ComposeAppRuntimeSqlSchema, ComposeAppRuntimeTransacter, ComposeAppRuntimeTransacterBase, ComposeAppRuntimeTransactionCallbacks, ComposeAppRuntimeTransactionWithReturn, ComposeAppRuntimeTransactionWithoutReturn, ComposeAppTaskRepository, ComposeAppTasksDatabase;

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
@interface ComposeAppBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface ComposeAppBase (ComposeAppBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface ComposeAppMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface ComposeAppMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorComposeAppKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface ComposeAppNumber : NSNumber
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
@interface ComposeAppByte : ComposeAppNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface ComposeAppUByte : ComposeAppNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface ComposeAppShort : ComposeAppNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface ComposeAppUShort : ComposeAppNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface ComposeAppInt : ComposeAppNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface ComposeAppUInt : ComposeAppNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface ComposeAppLong : ComposeAppNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface ComposeAppULong : ComposeAppNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface ComposeAppFloat : ComposeAppNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface ComposeAppDouble : ComposeAppNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface ComposeAppBoolean : ComposeAppNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface ComposeAppGreeting : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol ComposeAppPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface ComposeAppIOSPlatform : ComposeAppBase <ComposeAppPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinInit")))
@interface ComposeAppKoinInit : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ComposeAppKoin_coreKoin *)doInitAppDeclaration:(void (^)(ComposeAppKoin_coreKoinApplication *))appDeclaration __attribute__((swift_name("doInit(appDeclaration:)")));
@end

__attribute__((swift_name("TaskRepository")))
@protocol ComposeAppTaskRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addTaskTitle:(NSString *)title description:(NSString *)description latitude:(NSString *)latitude longitude:(NSString *)longitude completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("addTask(title:description:latitude:longitude:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)completeTaskTaskId:(int32_t)taskId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("completeTask(taskId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteTaskId:(int32_t)id completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteTask(id:completionHandler:)")));
- (id<ComposeAppKotlinx_coroutines_coreFlow>)getAllTasks __attribute__((swift_name("getAllTasks()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTaskByIdId:(int32_t)id completionHandler:(void (^)(ComposeAppDomainTask * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getTaskById(id:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TaskRepositoryImpl")))
@interface ComposeAppTaskRepositoryImpl : ComposeAppBase <ComposeAppTaskRepository>
- (instancetype)initWithDatabase:(id<ComposeAppTasksDatabase>)database __attribute__((swift_name("init(database:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addTaskTitle:(NSString *)title description:(NSString *)description latitude:(NSString *)latitude longitude:(NSString *)longitude completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("addTask(title:description:latitude:longitude:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)completeTaskTaskId:(int32_t)taskId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("completeTask(taskId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteTaskId:(int32_t)id completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteTask(id:completionHandler:)")));
- (id<ComposeAppKotlinx_coroutines_coreFlow>)getAllTasks __attribute__((swift_name("getAllTasks()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTaskByIdId:(int32_t)id completionHandler:(void (^)(ComposeAppDomainTask * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getTaskById(id:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TaskEntity")))
@interface ComposeAppTaskEntity : ComposeAppBase
- (instancetype)initWithId:(int32_t)id titulo:(NSString *)titulo description:(NSString * _Nullable)description latitude:(NSString * _Nullable)latitude longitude:(NSString * _Nullable)longitude isCompleted:(int64_t)isCompleted __attribute__((swift_name("init(id:titulo:description:latitude:longitude:isCompleted:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppTaskEntity *)doCopyId:(int32_t)id titulo:(NSString *)titulo description:(NSString * _Nullable)description latitude:(NSString * _Nullable)latitude longitude:(NSString * _Nullable)longitude isCompleted:(int64_t)isCompleted __attribute__((swift_name("doCopy(id:titulo:description:latitude:longitude:isCompleted:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) int64_t isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) NSString * _Nullable latitude __attribute__((swift_name("latitude")));
@property (readonly) NSString * _Nullable longitude __attribute__((swift_name("longitude")));
@property (readonly) NSString *titulo __attribute__((swift_name("titulo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TaskEntity.Adapter")))
@interface ComposeAppTaskEntityAdapter : ComposeAppBase
- (instancetype)initWithIdAdapter:(id<ComposeAppRuntimeColumnAdapter>)idAdapter __attribute__((swift_name("init(idAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<ComposeAppRuntimeColumnAdapter> idAdapter __attribute__((swift_name("idAdapter")));
@end

__attribute__((swift_name("RuntimeBaseTransacterImpl")))
@interface ComposeAppRuntimeBaseTransacterImpl : ComposeAppBase
- (instancetype)initWithDriver:(id<ComposeAppRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)createArgumentsCount:(int32_t)count __attribute__((swift_name("createArguments(count:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)notifyQueriesIdentifier:(int32_t)identifier tableProvider:(void (^)(ComposeAppKotlinUnit *(^)(NSString *)))tableProvider __attribute__((swift_name("notifyQueries(identifier:tableProvider:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)postTransactionCleanupTransaction:(ComposeAppRuntimeTransacterTransaction *)transaction enclosing:(ComposeAppRuntimeTransacterTransaction * _Nullable)enclosing thrownException:(ComposeAppKotlinThrowable * _Nullable)thrownException returnValue:(id _Nullable)returnValue __attribute__((swift_name("postTransactionCleanup(transaction:enclosing:thrownException:returnValue:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<ComposeAppRuntimeSqlDriver> driver __attribute__((swift_name("driver")));
@end

__attribute__((swift_name("RuntimeTransacterBase")))
@protocol ComposeAppRuntimeTransacterBase
@required
@end

__attribute__((swift_name("RuntimeTransacter")))
@protocol ComposeAppRuntimeTransacter <ComposeAppRuntimeTransacterBase>
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<ComposeAppRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<ComposeAppRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end

__attribute__((swift_name("RuntimeTransacterImpl")))
@interface ComposeAppRuntimeTransacterImpl : ComposeAppRuntimeBaseTransacterImpl <ComposeAppRuntimeTransacter>
- (instancetype)initWithDriver:(id<ComposeAppRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<ComposeAppRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<ComposeAppRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TaskQueries")))
@interface ComposeAppTaskQueries : ComposeAppRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<ComposeAppRuntimeSqlDriver>)driver TaskEntityAdapter:(ComposeAppTaskEntityAdapter *)TaskEntityAdapter __attribute__((swift_name("init(driver:TaskEntityAdapter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDriver:(id<ComposeAppRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)deleteAllTasks __attribute__((swift_name("deleteAllTasks()")));
- (void)deleteTaskByIdId:(int32_t)id __attribute__((swift_name("deleteTaskById(id:)")));
- (ComposeAppRuntimeQuery<ComposeAppTaskEntity *> *)getAllTasks __attribute__((swift_name("getAllTasks()")));
- (ComposeAppRuntimeQuery<id> *)getAllTasksMapper:(id (^)(ComposeAppInt *, NSString *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, ComposeAppLong *))mapper __attribute__((swift_name("getAllTasks(mapper:)")));
- (ComposeAppRuntimeQuery<ComposeAppTaskEntity *> *)getTaskByIdId:(int32_t)id __attribute__((swift_name("getTaskById(id:)")));
- (ComposeAppRuntimeQuery<id> *)getTaskByIdId:(int32_t)id mapper:(id (^)(ComposeAppInt *, NSString *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, ComposeAppLong *))mapper __attribute__((swift_name("getTaskById(id:mapper:)")));
- (void)insertTaskTitulo:(NSString *)titulo description:(NSString * _Nullable)description latitude:(NSString * _Nullable)latitude longitude:(NSString * _Nullable)longitude isCompleted:(int64_t)isCompleted __attribute__((swift_name("insertTask(titulo:description:latitude:longitude:isCompleted:)")));
- (void)updateTaskCompleteStatusId:(int32_t)id __attribute__((swift_name("updateTaskCompleteStatus(id:)")));
@end

__attribute__((swift_name("TasksDatabase")))
@protocol ComposeAppTasksDatabase <ComposeAppRuntimeTransacter>
@required
@property (readonly) ComposeAppTaskQueries *taskQueries __attribute__((swift_name("taskQueries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TasksDatabaseCompanion")))
@interface ComposeAppTasksDatabaseCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppTasksDatabaseCompanion *shared __attribute__((swift_name("shared")));
- (id<ComposeAppTasksDatabase>)invokeDriver:(id<ComposeAppRuntimeSqlDriver>)driver TaskEntityAdapter:(ComposeAppTaskEntityAdapter *)TaskEntityAdapter __attribute__((swift_name("invoke(driver:TaskEntityAdapter:)")));
@property (readonly) id<ComposeAppRuntimeSqlSchema> Schema __attribute__((swift_name("Schema")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddTaskUseCase")))
@interface ComposeAppAddTaskUseCase : ComposeAppBase
- (instancetype)initWithRepository:(id<ComposeAppTaskRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeTitle:(NSString *)title description:(NSString *)description latitude:(NSString *)latitude longitude:(NSString *)longitude completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(title:description:latitude:longitude:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTaskByIdUseCase")))
@interface ComposeAppGetTaskByIdUseCase : ComposeAppBase
- (instancetype)initWithRepository:(id<ComposeAppTaskRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeTaskId:(int32_t)taskId completionHandler:(void (^)(ComposeAppDomainTask * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(taskId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTasksUseCase")))
@interface ComposeAppGetTasksUseCase : ComposeAppBase
- (instancetype)initWithRepository:(id<ComposeAppTaskRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (id<ComposeAppKotlinx_coroutines_coreFlow>)invoke __attribute__((swift_name("invoke()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoveTaskUseCase")))
@interface ComposeAppRemoveTaskUseCase : ComposeAppBase
- (instancetype)initWithRepository:(id<ComposeAppTaskRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeId:(int32_t)id completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(id:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ToggleTaskUseCase")))
@interface ComposeAppToggleTaskUseCase : ComposeAppBase
- (instancetype)initWithRepository:(id<ComposeAppTaskRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeId:(int32_t)id completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(id:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DomainTask")))
@interface ComposeAppDomainTask : ComposeAppBase
- (instancetype)initWithId:(int32_t)id titulo:(NSString *)titulo latitude:(NSString * _Nullable)latitude longitude:(NSString * _Nullable)longitude description:(NSString * _Nullable)description isCompleted:(BOOL)isCompleted __attribute__((swift_name("init(id:titulo:latitude:longitude:description:isCompleted:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppDomainTask *)doCopyId:(int32_t)id titulo:(NSString *)titulo latitude:(NSString * _Nullable)latitude longitude:(NSString * _Nullable)longitude description:(NSString * _Nullable)description isCompleted:(BOOL)isCompleted __attribute__((swift_name("doCopy(id:titulo:latitude:longitude:description:isCompleted:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) NSString * _Nullable latitude __attribute__((swift_name("latitude")));
@property (readonly) NSString * _Nullable longitude __attribute__((swift_name("longitude")));
@property (readonly) NSString *titulo __attribute__((swift_name("titulo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location")))
@interface ComposeAppLocation : ComposeAppBase
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("init(latitude:longitude:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppLocation *)doCopyLatitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("doCopy(latitude:longitude:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@end

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("LocationProvider")))
@interface ComposeAppLocationProvider : NSObject
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseDriverFactory")))
@interface ComposeAppDatabaseDriverFactory : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<ComposeAppRuntimeSqlDriver>)createDriver __attribute__((swift_name("createDriver()")));
@end

__attribute__((swift_name("TaskViewModel")))
@interface ComposeAppTaskViewModel : ComposeAppBase
- (instancetype)initWithGetTasksUseCase:(ComposeAppGetTasksUseCase *)getTasksUseCase addTaskUseCase:(ComposeAppAddTaskUseCase *)addTaskUseCase removeTaskUseCase:(ComposeAppRemoveTaskUseCase *)removeTaskUseCase toggleTaskUseCase:(ComposeAppToggleTaskUseCase *)toggleTaskUseCase getTaskByIdUseCase:(ComposeAppGetTaskByIdUseCase *)getTaskByIdUseCase locationProvider:(NSObject *)locationProvider __attribute__((swift_name("init(getTasksUseCase:addTaskUseCase:removeTaskUseCase:toggleTaskUseCase:getTaskByIdUseCase:locationProvider:)"))) __attribute__((objc_designated_initializer));
- (void)addTaskTitle:(NSString *)title description:(NSString *)description __attribute__((swift_name("addTask(title:description:)")));
- (void)getTaskByIdTaskId:(int32_t)taskId __attribute__((swift_name("getTaskById(taskId:)")));
- (void)removeTaskId:(int32_t)id __attribute__((swift_name("removeTask(id:)")));
- (void)toggleTaskId:(int32_t)id __attribute__((swift_name("toggleTask(id:)")));
@property (readonly) id<ComposeAppKotlinx_coroutines_coreStateFlow> isLoading __attribute__((swift_name("isLoading")));
@property (readonly) id<ComposeAppKotlinx_coroutines_coreStateFlow> task __attribute__((swift_name("task")));
@property (readonly) id<ComposeAppKotlinx_coroutines_coreStateFlow> tasks __attribute__((swift_name("tasks")));
@end

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol ComposeAppKoin_coreKoinComponent
@required
- (ComposeAppKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TaskViewModelFactory")))
@interface ComposeAppTaskViewModelFactory : ComposeAppBase <ComposeAppKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ComposeAppTaskViewModel *)create __attribute__((swift_name("create()")));
@end

@interface ComposeAppTaskEntity (Extensions)
- (ComposeAppDomainTask *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface ComposeAppDomainTask (Extensions)
- (ComposeAppTaskEntity *)toTaskEntity __attribute__((swift_name("toTaskEntity()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdaptersKt")))
@interface ComposeAppAdaptersKt : ComposeAppBase
@property (class, readonly) id<ComposeAppRuntimeColumnAdapter> idAdapter __attribute__((swift_name("idAdapter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainViewControllerKt")))
@interface ComposeAppMainViewControllerKt : ComposeAppBase
+ (UIViewController *)MainViewControllerViewModel:(ComposeAppTaskViewModel *)viewModel __attribute__((swift_name("MainViewController(viewModel:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface ComposeAppPlatform_iosKt : ComposeAppBase
+ (id<ComposeAppPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonModule_iosKt")))
@interface ComposeAppCommonModule_iosKt : ComposeAppBase
+ (ComposeAppKoin_coreModule *)commonModule __attribute__((swift_name("commonModule()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateViewModelScopeKt")))
@interface ComposeAppCreateViewModelScopeKt : ComposeAppBase
+ (id<ComposeAppKotlinx_coroutines_coreCoroutineScope>)createViewModelScope __attribute__((swift_name("createViewModelScope()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DoInitKoinKt")))
@interface ComposeAppDoInitKoinKt : ComposeAppBase
+ (void)doInitKoin __attribute__((swift_name("doInitKoin()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformModuleKt")))
@interface ComposeAppPlatformModuleKt : ComposeAppBase
+ (ComposeAppKoin_coreModule *)platformModule __attribute__((swift_name("platformModule()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModelModule_iosKt")))
@interface ComposeAppViewModelModule_iosKt : ComposeAppBase
@property (class, readonly) ComposeAppKoin_coreModule *viewModelModule __attribute__((swift_name("viewModelModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface ComposeAppKoin_coreKoin : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (ComposeAppKoin_coreScope *)createScopeT:(id<ComposeAppKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (ComposeAppKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (ComposeAppKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (ComposeAppKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<ComposeAppKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<ComposeAppKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id)getQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<ComposeAppKotlinKClass>)clazz qualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (ComposeAppKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (ComposeAppKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<ComposeAppKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<ComposeAppKotlinKClass>)clazz qualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (ComposeAppKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (ComposeAppKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<ComposeAppKotlinLazy>)injectQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier mode:(ComposeAppKotlinLazyThreadSafetyMode *)mode parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<ComposeAppKotlinLazy>)injectOrNullQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier mode:(ComposeAppKotlinLazyThreadSafetyMode *)mode parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<ComposeAppKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride createEagerInstances:(BOOL)createEagerInstances __attribute__((swift_name("loadModules(modules:allowOverride:createEagerInstances:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(ComposeAppKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<ComposeAppKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) ComposeAppKoin_coreExtensionManager *extensionManager __attribute__((swift_name("extensionManager")));
@property (readonly) ComposeAppKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) ComposeAppKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) ComposeAppKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) ComposeAppKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication")))
@interface ComposeAppKoin_coreKoinApplication : ComposeAppBase
@property (class, readonly, getter=companion) ComposeAppKoin_coreKoinApplicationCompanion *companion __attribute__((swift_name("companion")));
- (void)allowOverrideOverride:(BOOL)override __attribute__((swift_name("allowOverride(override:)")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (ComposeAppKoin_coreKoinApplication *)loggerLogger:(ComposeAppKoin_coreLogger *)logger __attribute__((swift_name("logger(logger:)")));
- (ComposeAppKoin_coreKoinApplication *)modulesModules:(ComposeAppKotlinArray<ComposeAppKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules:)")));
- (ComposeAppKoin_coreKoinApplication *)modulesModules_:(NSArray<ComposeAppKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules_:)")));
- (ComposeAppKoin_coreKoinApplication *)modulesModules__:(ComposeAppKoin_coreModule *)modules __attribute__((swift_name("modules(modules__:)")));
- (ComposeAppKoin_coreKoinApplication *)printLoggerLevel:(ComposeAppKoin_coreLevel *)level __attribute__((swift_name("printLogger(level:)")));
- (ComposeAppKoin_coreKoinApplication *)propertiesValues:(NSDictionary<NSString *, id> *)values __attribute__((swift_name("properties(values:)")));
@property (readonly) ComposeAppKoin_coreKoin *koin __attribute__((swift_name("koin")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface ComposeAppKotlinThrowable : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (ComposeAppKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface ComposeAppKotlinException : ComposeAppKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface ComposeAppKotlinRuntimeException : ComposeAppKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface ComposeAppKotlinIllegalStateException : ComposeAppKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface ComposeAppKotlinCancellationException : ComposeAppKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ComposeAppKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol ComposeAppKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<ComposeAppKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("RuntimeColumnAdapter")))
@protocol ComposeAppRuntimeColumnAdapter
@required
- (id)decodeDatabaseValue:(id _Nullable)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (id _Nullable)encodeValue:(id)value __attribute__((swift_name("encode(value:)")));
@end

__attribute__((swift_name("RuntimeCloseable")))
@protocol ComposeAppRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol ComposeAppRuntimeSqlDriver <ComposeAppRuntimeCloseable>
@required
- (void)addListenerQueryKeys:(ComposeAppKotlinArray<NSString *> *)queryKeys listener:(id<ComposeAppRuntimeQueryListener>)listener __attribute__((swift_name("addListener(queryKeys:listener:)")));
- (ComposeAppRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (id<ComposeAppRuntimeQueryResult>)executeIdentifier:(ComposeAppInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<ComposeAppRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<ComposeAppRuntimeQueryResult>)executeQueryIdentifier:(ComposeAppInt * _Nullable)identifier sql:(NSString *)sql mapper:(id<ComposeAppRuntimeQueryResult> (^)(id<ComposeAppRuntimeSqlCursor>))mapper parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<ComposeAppRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:mapper:parameters:binders:)")));
- (id<ComposeAppRuntimeQueryResult>)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
- (void)notifyListenersQueryKeys:(ComposeAppKotlinArray<NSString *> *)queryKeys __attribute__((swift_name("notifyListeners(queryKeys:)")));
- (void)removeListenerQueryKeys:(ComposeAppKotlinArray<NSString *> *)queryKeys listener:(id<ComposeAppRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(queryKeys:listener:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface ComposeAppKotlinUnit : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol ComposeAppRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface ComposeAppRuntimeTransacterTransaction : ComposeAppBase <ComposeAppRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<ComposeAppRuntimeQueryResult>)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) ComposeAppRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol ComposeAppRuntimeTransactionWithoutReturn <ComposeAppRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<ComposeAppRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol ComposeAppRuntimeTransactionWithReturn <ComposeAppRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<ComposeAppRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end

__attribute__((swift_name("RuntimeExecutableQuery")))
@interface ComposeAppRuntimeExecutableQuery<__covariant RowType> : ComposeAppBase
- (instancetype)initWithMapper:(RowType (^)(id<ComposeAppRuntimeSqlCursor>))mapper __attribute__((swift_name("init(mapper:)"))) __attribute__((objc_designated_initializer));
- (id<ComposeAppRuntimeQueryResult>)executeMapper:(id<ComposeAppRuntimeQueryResult> (^)(id<ComposeAppRuntimeSqlCursor>))mapper __attribute__((swift_name("execute(mapper:)")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
@property (readonly) RowType (^mapper)(id<ComposeAppRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end

__attribute__((swift_name("RuntimeQuery")))
@interface ComposeAppRuntimeQuery<__covariant RowType> : ComposeAppRuntimeExecutableQuery<RowType>
- (instancetype)initWithMapper:(RowType (^)(id<ComposeAppRuntimeSqlCursor>))mapper __attribute__((swift_name("init(mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<ComposeAppRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (void)removeListenerListener:(id<ComposeAppRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@end

__attribute__((swift_name("RuntimeSqlSchema")))
@protocol ComposeAppRuntimeSqlSchema
@required
- (id<ComposeAppRuntimeQueryResult>)createDriver:(id<ComposeAppRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (id<ComposeAppRuntimeQueryResult>)migrateDriver:(id<ComposeAppRuntimeSqlDriver>)driver oldVersion:(int64_t)oldVersion newVersion:(int64_t)newVersion callbacks:(ComposeAppKotlinArray<ComposeAppRuntimeAfterVersion *> *)callbacks __attribute__((swift_name("migrate(driver:oldVersion:newVersion:callbacks:)")));
@property (readonly) int64_t version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol ComposeAppKotlinx_coroutines_coreSharedFlow <ComposeAppKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol ComposeAppKotlinx_coroutines_coreStateFlow <ComposeAppKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface ComposeAppKoin_coreModule : ComposeAppBase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (ComposeAppKoin_coreKoinDefinition<id> *)factoryQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(ComposeAppKoin_coreScope *, ComposeAppKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(ComposeAppKotlinArray<ComposeAppKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(id)module __attribute__((swift_name("includes(module_:)")));
- (void)indexPrimaryTypeInstanceFactory:(ComposeAppKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexPrimaryType(instanceFactory:)")));
- (void)indexSecondaryTypesInstanceFactory:(ComposeAppKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexSecondaryTypes(instanceFactory:)")));
- (NSArray<ComposeAppKoin_coreModule *> *)plusModules:(NSArray<ComposeAppKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<ComposeAppKoin_coreModule *> *)plusModule:(ComposeAppKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)prepareForCreationAtStartInstanceFactory:(ComposeAppKoin_coreSingleInstanceFactory<id> *)instanceFactory __attribute__((swift_name("prepareForCreationAtStart(instanceFactory:)")));
- (void)scopeScopeSet:(void (^)(ComposeAppKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (void)scopeQualifier:(id<ComposeAppKoin_coreQualifier>)qualifier scopeSet:(void (^)(ComposeAppKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (ComposeAppKoin_coreKoinDefinition<id> *)singleQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(ComposeAppKoin_coreScope *, ComposeAppKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) ComposeAppMutableSet<ComposeAppKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSMutableArray<ComposeAppKoin_coreModule *> *includedModules __attribute__((swift_name("includedModules")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@property (readonly) ComposeAppMutableDictionary<NSString *, ComposeAppKoin_coreInstanceFactory<id> *> *mappings __attribute__((swift_name("mappings")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol ComposeAppKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<ComposeAppKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Koin_coreLockable")))
@interface ComposeAppKoin_coreLockable : ComposeAppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface ComposeAppKoin_coreScope : ComposeAppKoin_coreLockable
- (instancetype)initWithScopeQualifier:(id<ComposeAppKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(ComposeAppKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<ComposeAppKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (id)getQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<ComposeAppKotlinKClass>)clazz qualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<ComposeAppKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (ComposeAppKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<ComposeAppKotlinKClass>)clazz qualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (ComposeAppKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()")));
- (id<ComposeAppKotlinLazy>)injectQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier mode:(ComposeAppKotlinLazyThreadSafetyMode *)mode parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<ComposeAppKotlinLazy>)injectOrNullQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier mode:(ComposeAppKotlinLazyThreadSafetyMode *)mode parameters:(ComposeAppKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(ComposeAppKotlinArray<ComposeAppKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<ComposeAppKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(ComposeAppKotlinArray<ComposeAppKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) ComposeAppKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<ComposeAppKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property id _Nullable sourceValue __attribute__((swift_name("sourceValue")));
@end

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol ComposeAppKoin_coreKoinScopeComponent <ComposeAppKoin_coreKoinComponent>
@required
@property (readonly) ComposeAppKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("Koin_coreQualifier")))
@protocol ComposeAppKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol ComposeAppKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol ComposeAppKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol ComposeAppKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol ComposeAppKotlinKClass <ComposeAppKotlinKDeclarationContainer, ComposeAppKotlinKAnnotatedElement, ComposeAppKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface ComposeAppKoin_coreParametersHolder : ComposeAppBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values useIndexedValues:(ComposeAppBoolean * _Nullable)useIndexedValues __attribute__((swift_name("init(_values:useIndexedValues:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<ComposeAppKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<ComposeAppKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (ComposeAppKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t index __attribute__((swift_name("index")));
@property (readonly) ComposeAppBoolean * _Nullable useIndexedValues __attribute__((swift_name("useIndexedValues")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol ComposeAppKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol ComposeAppKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface ComposeAppKotlinEnum<E> : ComposeAppBase <ComposeAppKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface ComposeAppKotlinLazyThreadSafetyMode : ComposeAppKotlinEnum<ComposeAppKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) ComposeAppKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) ComposeAppKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (ComposeAppKotlinArray<ComposeAppKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppKotlinLazyThreadSafetyMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Koin_coreLogger")))
@interface ComposeAppKoin_coreLogger : ComposeAppBase
- (instancetype)initWithLevel:(ComposeAppKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)displayLevel:(ComposeAppKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("display(level:msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(ComposeAppKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(ComposeAppKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLvl:(ComposeAppKoin_coreLevel *)lvl msg_:(NSString *)msg __attribute__((swift_name("log(lvl:msg_:)")));
- (void)warnMsg:(NSString *)msg __attribute__((swift_name("warn(msg:)")));
@property ComposeAppKoin_coreLevel *level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreExtensionManager")))
@interface ComposeAppKoin_coreExtensionManager : ComposeAppBase
- (instancetype)initWith_koin:(ComposeAppKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (id<ComposeAppKoin_coreKoinExtension>)getExtensionId:(NSString *)id __attribute__((swift_name("getExtension(id:)")));
- (id<ComposeAppKoin_coreKoinExtension> _Nullable)getExtensionOrNullId:(NSString *)id __attribute__((swift_name("getExtensionOrNull(id:)")));
- (void)registerExtensionId:(NSString *)id extension:(id<ComposeAppKoin_coreKoinExtension>)extension __attribute__((swift_name("registerExtension(id:extension:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface ComposeAppKoin_coreInstanceRegistry : ComposeAppBase
- (instancetype)initWith_koin:(ComposeAppKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(ComposeAppKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) ComposeAppKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, ComposeAppKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface ComposeAppKoin_corePropertyRegistry : ComposeAppBase
- (instancetype)initWith_koin:(ComposeAppKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface ComposeAppKoin_coreScopeRegistry : ComposeAppBase
- (instancetype)initWith_koin:(ComposeAppKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ComposeAppKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<ComposeAppKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) ComposeAppKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<ComposeAppKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication.Companion")))
@interface ComposeAppKoin_coreKoinApplicationCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKoin_coreKoinApplicationCompanion *shared __attribute__((swift_name("shared")));
- (ComposeAppKoin_coreKoinApplication *)doInit __attribute__((swift_name("doInit()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface ComposeAppKotlinArray<T> : ComposeAppBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(ComposeAppInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<ComposeAppKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface ComposeAppKoin_coreLevel : ComposeAppKotlinEnum<ComposeAppKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) ComposeAppKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) ComposeAppKoin_coreLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) ComposeAppKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) ComposeAppKoin_coreLevel *none __attribute__((swift_name("none")));
+ (ComposeAppKotlinArray<ComposeAppKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppKoin_coreLevel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol ComposeAppKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("RuntimeQueryListener")))
@protocol ComposeAppRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end

__attribute__((swift_name("RuntimeQueryResult")))
@protocol ComposeAppRuntimeQueryResult
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol ComposeAppRuntimeSqlPreparedStatement
@required
- (void)bindBooleanIndex:(int32_t)index boolean:(ComposeAppBoolean * _Nullable)boolean __attribute__((swift_name("bindBoolean(index:boolean:)")));
- (void)bindBytesIndex:(int32_t)index bytes:(ComposeAppKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(ComposeAppDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(ComposeAppLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol ComposeAppRuntimeSqlCursor
@required
- (ComposeAppBoolean * _Nullable)getBooleanIndex:(int32_t)index __attribute__((swift_name("getBoolean(index:)")));
- (ComposeAppKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (ComposeAppDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (ComposeAppLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (id<ComposeAppRuntimeQueryResult>)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuntimeAfterVersion")))
@interface ComposeAppRuntimeAfterVersion : ComposeAppBase
- (instancetype)initWithAfterVersion:(int64_t)afterVersion block:(void (^)(id<ComposeAppRuntimeSqlDriver>))block __attribute__((swift_name("init(afterVersion:block:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int64_t afterVersion __attribute__((swift_name("afterVersion")));
@property (readonly) void (^block)(id<ComposeAppRuntimeSqlDriver>) __attribute__((swift_name("block")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinDefinition")))
@interface ComposeAppKoin_coreKoinDefinition<R> : ComposeAppBase
- (instancetype)initWithModule:(ComposeAppKoin_coreModule *)module factory:(ComposeAppKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("init(module:factory:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppKoin_coreKoinDefinition<R> *)doCopyModule:(ComposeAppKoin_coreModule *)module factory:(ComposeAppKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("doCopy(module:factory:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ComposeAppKoin_coreInstanceFactory<R> *factory __attribute__((swift_name("factory")));
@property (readonly) ComposeAppKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface ComposeAppKoin_coreInstanceFactory<T> : ComposeAppKoin_coreLockable
- (instancetype)initWithBeanDefinition:(ComposeAppKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) ComposeAppKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(ComposeAppKoin_coreResolutionContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(ComposeAppKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(ComposeAppKoin_coreResolutionContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(ComposeAppKoin_coreResolutionContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) ComposeAppKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface ComposeAppKoin_coreSingleInstanceFactory<T> : ComposeAppKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(ComposeAppKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(ComposeAppKoin_coreResolutionContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(ComposeAppKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(ComposeAppKoin_coreResolutionContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(ComposeAppKoin_coreResolutionContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface ComposeAppKoin_coreScopeDSL : ComposeAppBase
- (instancetype)initWithScopeQualifier:(id<ComposeAppKoin_coreQualifier>)scopeQualifier module:(ComposeAppKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppKoin_coreKoinDefinition<id> *)factoryQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(ComposeAppKoin_coreScope *, ComposeAppKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (ComposeAppKoin_coreKoinDefinition<id> *)scopedQualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(ComposeAppKoin_coreScope *, ComposeAppKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
@property (readonly) ComposeAppKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<ComposeAppKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol ComposeAppKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<ComposeAppKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<ComposeAppKotlinCoroutineContextElement> _Nullable)getKey:(id<ComposeAppKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<ComposeAppKotlinCoroutineContext>)minusKeyKey:(id<ComposeAppKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<ComposeAppKotlinCoroutineContext>)plusContext:(id<ComposeAppKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol ComposeAppKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(ComposeAppKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface ComposeAppKotlinEnumCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Koin_coreKoinExtension")))
@protocol ComposeAppKoin_coreKoinExtension
@required
- (void)onClose __attribute__((swift_name("onClose()")));
- (void)onRegisterKoin:(ComposeAppKoin_coreKoin *)koin __attribute__((swift_name("onRegister(koin:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface ComposeAppKoin_coreScopeRegistryCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol ComposeAppKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface ComposeAppKotlinByteArray : ComposeAppBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(ComposeAppByte *(^)(ComposeAppInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (ComposeAppKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface ComposeAppKoin_coreBeanDefinition<T> : ComposeAppBase
- (instancetype)initWithScopeQualifier:(id<ComposeAppKoin_coreQualifier>)scopeQualifier primaryType:(id<ComposeAppKotlinKClass>)primaryType qualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(ComposeAppKoin_coreScope *, ComposeAppKoin_coreParametersHolder *))definition kind:(ComposeAppKoin_coreKind *)kind secondaryTypes:(NSArray<id<ComposeAppKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<ComposeAppKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<ComposeAppKotlinKClass>)clazz qualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<ComposeAppKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property ComposeAppKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(ComposeAppKoin_coreScope *, ComposeAppKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) ComposeAppKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<ComposeAppKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<ComposeAppKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<ComposeAppKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<ComposeAppKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface ComposeAppKoin_coreInstanceFactoryCompanion : ComposeAppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ComposeAppKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreResolutionContext")))
@interface ComposeAppKoin_coreResolutionContext : ComposeAppBase
- (instancetype)initWithLogger:(ComposeAppKoin_coreLogger *)logger scope:(ComposeAppKoin_coreScope *)scope clazz:(id<ComposeAppKotlinKClass>)clazz qualifier:(id<ComposeAppKoin_coreQualifier> _Nullable)qualifier parameters:(ComposeAppKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(logger:scope:clazz:qualifier:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<ComposeAppKotlinKClass> clazz __attribute__((swift_name("clazz")));
@property (readonly) NSString *debugTag __attribute__((swift_name("debugTag")));
@property (readonly) ComposeAppKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) ComposeAppKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) id<ComposeAppKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) ComposeAppKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol ComposeAppKotlinCoroutineContextElement <ComposeAppKotlinCoroutineContext>
@required
@property (readonly) id<ComposeAppKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol ComposeAppKotlinCoroutineContextKey
@required
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface ComposeAppKotlinByteIterator : ComposeAppBase <ComposeAppKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ComposeAppByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface ComposeAppKoin_coreKind : ComposeAppKotlinEnum<ComposeAppKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ComposeAppKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) ComposeAppKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) ComposeAppKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (ComposeAppKotlinArray<ComposeAppKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ComposeAppKoin_coreKind *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface ComposeAppKoin_coreCallbacks<T> : ComposeAppBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (ComposeAppKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
