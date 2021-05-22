//
//  decorator.h
//  Decorator
//
//  Created by lingowu on 2021/5/14.
//

#ifndef DECORATOR_H
#define DECORATOR_H

#include <iostream>
#include "component.h"
using namespace std;

// 调味品
class CondimentDecorator : public ICoffee {
public :
    CondimentDecorator(ICoffee *coffee) : coffee(coffee) {}
    string Name() { return coffee->Name();}
    double Cost() { return coffee->Cost();}
    void show() { cout << this->Name() << " : " << this->Cost() << endl;}
protected :
    ICoffee *coffee;
};

#endif // DECORATOR_H
