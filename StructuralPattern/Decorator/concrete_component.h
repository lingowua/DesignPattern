//
//  concrete_component.h
//  Decorator
//
//  Created by lingowu on 2021/5/14.
//

#ifndef CONCRETE_COMPONENT_H
#define CONCRETE_COMPONENT_H

#include "component.h"

/********** 具体的咖啡 **********/
// 拿铁
class Latte : public ICoffee {
public:
    string Name() { return "拿铁";}
    double Cost() { return 30.0;}
};

// 卡布奇诺
class Cappuccino : public ICoffee {
public:
    string Name() { return "卡布奇诺";}
    double Cost() { return 28.5;}
};

#endif // CONCRETE_COMPONENT_H
