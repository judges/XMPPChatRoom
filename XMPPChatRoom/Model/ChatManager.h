//
//  DataManager.h
//  XMPPChatRoom
//
//  Created by hsusmita on 17/06/15.
//  Copyright (c) 2015 Susmita Horrow. All rights reserved.
//

typedef  void(^RequestCompletionBlock)(NSArray *result,BOOL success, NSError *error) ;

@interface ChatManager : NSObject

+ (instancetype)sharedManager;

- (void)registerUsername:(NSString *)name
             andPassword:(NSString *)password
     withCompletionBlock:(RequestCompletionBlock)block;

- (void)authenticateUsername:(NSString *)name
                 andPassword:(NSString *)password
         withCompletionBlock:(RequestCompletionBlock)block;

- (void)connectAndAuthenticateWithCompletionBlock:(RequestCompletionBlock)block;

- (void)goOnline;
- (void)goOffline;
- (void)teardownStream;
- (void)fetchUsers;
- (void)logoutWithCompletionBlock:(RequestCompletionBlock)completionBlock;
- (NSFetchedResultsController *)friendsListFetcher;

@end
