//
//  main.cpp
//  Observer
//
//  Created by lingowu on 2021/5/14.
//

#include <iostream>
#include "Observer.h"

#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }

int main() {
    // 创建主题、观察者
    ConcreteSubject *subject = new ConcreteSubject();
    IObserver *observer1 = new ConcreteObserver("Mirror");
    IObserver *observer2 = new ConcreteObserver("Grey");

    // 注册观察者
    subject->Attach(observer1);
    subject->Attach(observer2);

    // 更改价格，并通知观察者
    subject->SetPrice(12.5);
    subject->Notify();

    // 注销观察者
    subject->Detach(observer2);
    // 再次更改状态，并通知观察者
    subject->SetPrice(15.0);
    subject->Notify();

    SAFE_DELETE(observer1);
    SAFE_DELETE(observer2);
    SAFE_DELETE(subject);

    return 0;
}
