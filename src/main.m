//
//  main.m
//  commandLine
//
//  Created by wzj on 2018/12/15.
//  Copyright © 2018年 wzj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MyObject.h"
#import "MyProperty.h"
#import "MyCategory.h"
#import "MyExtension.h"
#import "MyProtocol.h"


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        NSLog(@"main");
        {
            //调用静态方法
            int ret =[MyObject staticFun:1 param2:2];
            NSLog(@"staticFun: %d", ret);
            
            //构造对象
            MyObject* obj = [[MyObject alloc] init];
            
            //调用方法
            [obj setMember:123];
            ret = [obj member];
            NSLog(@"get member: %d", ret);
            
            //释放对象, 如果开启了“自动引用数”，系统会释放掉这个对象，不需要手动调用
            [obj release];
        }
        
        {
            int ret;
            MyProperty* obj = [MyProperty new];
            [obj setMyProperty:123];
            ret = [obj myProperty];
            NSLog(@"get member: %d", ret);
        }
        
        {
            NSString* str = @"my";
            NSLog(@"%@", [str myCategory]);
        }
        
        {
            MyExtension* ext = [MyExtension new];
            //[ext myPrivteFunc];
        }
        
        {
            TestProtocol* tp = [TestProtocol new];
            MyProtocolImpl* impl = [MyProtocolImpl new];
            [tp testProtocol:impl];
            
        }
    }
    
    return 0;
}



