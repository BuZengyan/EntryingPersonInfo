//
//  StudentInfoModel.h
//  StudentInfoDemo
//
//  Created by zengyan.bu on 2017/12/8.
//  Copyright © 2017年 zengyan.bu. All rights reserved.
//  学生信息model

#import <Foundation/Foundation.h>

@interface StudentInfoModel : NSObject

@property (nonatomic, copy) NSString    *serialNumber;      ///     序号
@property (nonatomic, copy) NSString    *studentNumber;     ///     学号
@property (nonatomic, copy) NSString    *studentName;       ///     学生姓名
@property (nonatomic, copy) NSString    *studentSex;        ///      性别
@property (nonatomic, copy) NSString    *studentAge;        ///      年龄

@end
