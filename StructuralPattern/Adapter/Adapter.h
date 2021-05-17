//
//  Adapter.h
//  Adapter
//
//  Created by lingowu on 2021/5/12.
//

#ifndef ADAPTER_H
#define ADAPTER_H

#include "Target.h"
#include "Adaptee.h"

// 对象适配器
class Adapter : public Target {
private:
    Adaptee *adaptee;
public:
    Adapter(Adaptee *adaptee) : adaptee(adaptee) {}
    void Request() override {
        cout << "对象适配器： ";
        this->adaptee->SpecificRequest();
    }
};

// 类适配器
class cAdapter : public Target, public Adaptee {
    void Request() override {
        cout << "类适配器：   ";
        this->SpecificRequest();
    }
};

#endif // ADAPTER_H
