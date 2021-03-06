//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>
#import "SSPurchaseManagerDelegate.h"

@class SSXPCConnection;

@interface SSPurchaseManager : NSObject
{
    NSObject<OS_dispatch_queue> *_completionBlockQueue;
    id <SSPurchaseManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_managerIdentifier;
    SSXPCConnection *_requestConnection;
    SSXPCConnection *_responseConnection;
}

- (void)_reconnectForDaemonLaunch;
@property(readonly) NSString *managerIdentifier;
//- (void)insertPurchases:(id)arg1 afterPurchase:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)_newEncodedArrayWithPurchases:(id)arg1;
//- (void)_sendCompletionBlock:(CDUnknownBlockType)arg1 forStandardReply:(id)arg2;
- (id)_newEncodedArrayWithPurchaseIdentifiers:(id)arg1;
- (BOOL)_resultForReply:(id)arg1 error:(id *)arg2;
- (void)_handleMessage:(id)arg1 fromConnection:(id)arg2;
//- (void)_sendCompletionBlock:(CDUnknownBlockType)arg1 forGetPurchasesReply:(id)arg2;
//- (void)_sendMessage:(long long)arg1 withPurchaseIdentifiers:(id)arg2 afterPurchase:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
//- (void)_sendMessage:(long long)arg1 withPurchases:(id)arg2 afterPurchase:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_connectToDaemon;
- (id)_responseConnection;
- (id)_requestConnection;
@property id <SSPurchaseManagerDelegate> delegate;
- (id)init;
- (void)dealloc;
//- (void)movePurchases:(id)arg1 afterPurchase:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
//- (void)cancelPurchases:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
//- (void)addPurchases:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
//- (void)getPurchasesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithManagerIdentifier:(id)arg1;

@end

