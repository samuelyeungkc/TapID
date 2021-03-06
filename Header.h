@interface TouchUnlockController : NSObject
-(void) vibrate;
-(void) initVar;

@property (getter=isUnlockingNow) BOOL isUnlocking;

@property BOOL canLock;
-(void) deviceCanLockNow : (bool)can;
-(bool) canDeviceBeLocked;
-(unsigned long long int)processTapping;

@property NSUInteger currentTapNum;

-(void) displayMsg : (NSString*) str;

@end
