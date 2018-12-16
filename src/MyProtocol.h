//
//  MyProtocol.h
//  commandLine
//
//  Created by wzj on 2018/12/15.
//  Copyright © 2018年 wzj. All rights reserved.
//

#ifndef MyProtocol_h
#define MyProtocol_h

@protocol MyProtocol
-(void) myProtocol;
@end

@interface MyProtocolImpl: NSObject<MyProtocol>
@end
@implementation MyProtocolImpl
-(void) myProtocol
{
    NSLog(@"invoke protocol");
}
@end



@interface TestProtocol : NSObject
-(void) testProtocol:(id<MyProtocol>) callback;
@end

@implementation TestProtocol
-(void) testProtocol:(id<MyProtocol>) callback
{
    [callback myProtocol];
}

@end



#endif /* MyProtocol_h */
