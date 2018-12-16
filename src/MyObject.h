//
//  Myobject.h
//  commandLine
//
//  Created by wzj on 2018/12/15.
//  Copyright © 2018年 wzj. All rights reserved.
//

#import <Foundation/Foundation.h>

//声明
@interface MyObject : NSObject
{
    //默认为protected, 其它的对象无法访问
    int member;
}
// +表示静态函数, -表示成员函数。
// c++/java程序员对这两种类型的函数应该很熟悉了

//p1为第1个参数， p2为第二个参数； param2相当于p2的昵称，
//调用这个函数时，也必须这样写。 比如 [MyObject staticFun: 1 param2:2];
//参数之间是用空白符分开的， c/c++/java都是用逗号分开的
+(int) staticFun: (int) p1 param2: (int) p2;

//init是默认构造函数，返回instancetype类型的函数，都可以理解为构造函数
//instancetype可以理解为当前对象的类型
//如果不需要初始化，也可以省略掉默认构造方法
//objective-c创建创建对象时，会默认将内存清0
-(instancetype) init;

//销毁对象时，会调用这个方法。
//如果没有需要手动释放的资源，可以省略掉这个函数
-(void) dealloc;

-(int) member;

-(void) setMember: (int) value;


@end

//实现
@implementation MyObject
+(int) staticFun: (int) p1 param2: (int) p2
{
    return p1 + p2;
}

//init是默认构造函数，返回instancetype类型的函数，都可以理解为构造函数
//如果不需要初始化，也可以省略掉默认构造方法
-(instancetype) init
{
    NSLog(@"default constructor");
    return self;
}

//普通成员函数
-(int) member
{
    return self->member;
}

- (void) setMember: (int) value
{
    self->member = value;
}

-(void) dealloc
{
    [super dealloc];
    NSLog(@"default deconstructor");
}

@end




