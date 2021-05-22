//
//  component.h
//  Decorator
//
//  Created by lingowu on 2021/5/14.
//

#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

using namespace std;

// 咖啡的基类
class ICoffee {
public:
    virtual ~ICoffee() {}
    virtual string Name() = 0;  // 名称
    virtual double Cost() = 0;  // 价钱
};

#endif // COMPONENT_H
