//
//  MyCatalog.h
//  commandLine
//
//  Created by wzj on 2018/12/15.
//  Copyright © 2018年 wzj. All rights reserved.
//

#ifndef MyCategory_h
#define MyCategory_h

@interface NSString (Test)
-(NSString*) myCategory;
@end

@implementation NSString (Test)
-(NSString*) myCategory
{
    return @"test category";
}
@end



#endif /* MyCatalog_h */
