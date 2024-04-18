
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNMoviesSdkSpec.h"

@interface MoviesSdk : NSObject <NativeMoviesSdkSpec>
#else
#import <React/RCTBridgeModule.h>

@interface MoviesSdk : NSObject <RCTBridgeModule>
#endif

@end
