//
//  MyProperty.h
//  commandLine
//
//  Created by wzj on 2018/12/15.
//  Copyright © 2018年 wzj. All rights reserved.
//
#import <Foundation/Foundation.h>

#ifndef MyProperty_h
#define MyProperty_h
@interface MyProperty : NSObject
@property int myProperty;
@property (retain) __strong NSString* str;
@end

@implementation MyProperty
@end


@interface MyProperty2 : NSObject
{
    int _myProperty;
}
-(int) myProperty;
-(void) setMyProperty:(int)myProperty;
@end

@implementation MyProperty2
-(int) myProperty
{
    return self->_myProperty;
}
-(void) setMyProperty:(int)myProperty
{
    self->_myProperty = myProperty;
}
@end

#endif /* MyProperty_h */
