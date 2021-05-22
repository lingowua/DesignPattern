//
//  concrete_decorator.h
//  Decorator
//
//  Created by lingowu on 2021/5/14.
//

#ifndef CONCRETE_DECORATOR_H
#define CONCRETE_DECORATOR_H

#include "decorator.h"

/********** 具体的调味品 **********/
// 奶油
class Cream : public CondimentDecorator {
public:
    Cream(ICoffee *coffee) : CondimentDecorator(coffee) {}
    string Name() { return coffee->Name() + " Cream";}
    double Cost() { return coffee->Cost() + 3.5;}
};

// 摩卡
class Mocha : public CondimentDecorator {
public:
    Mocha(ICoffee *coffee) : CondimentDecorator(coffee) {}
    string Name() { return coffee->Name() + " Mocha";}
    double Cost() { return coffee->Cost() + 2.0;}
};

// 糖浆
class Syrup : public CondimentDecorator {
public:
    Syrup(ICoffee *coffee) : CondimentDecorator(coffee) {}
    string Name() { return coffee->Name() + " Syrup";}
    double Cost() { return coffee->Cost() + 3.0;}
};

#endif // CONCRETE_DECORATOR_H
