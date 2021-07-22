//
//  Observer.h
//  Observer
//
//  Created by lingowu on 2021/5/14.
//

#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>
#include <list>
#include <string>

using namespace std;

// 抽象观察者
class IObserver {
public:
    virtual ~IObserver() {}
    virtual void Update(float price) = 0;  // 更新价格
};

// 抽象主题
class ISubject {
public:
    virtual ~ISubject() {}
    virtual void Attach(IObserver *) = 0;  // 注册观察者
    virtual void Detach(IObserver *) = 0;  // 注销观察者
    virtual void Notify() = 0;  // 通知观察者
};

// 具体观察者
class ConcreteObserver : public IObserver {
public:
    ConcreteObserver(string name):name(name) { }
    void Update(float price) { cout << name << "\t观察到价格是  " << price << endl;}
private:
     string name;  // 名字
};

// 具体主题
class ConcreteSubject : public ISubject {
public:
    ConcreteSubject() { price = 10.0;}
    void SetPrice(float pri) { price = pri;}
    
    void Attach(IObserver *observer) { observers.push_back(observer);}
    void Detach(IObserver *observer) { observers.remove(observer);}

    void Notify() {
        list<IObserver *>::iterator it = observers.begin();
        while (it != observers.end()) {
            (*it)->Update(price);
            ++it;
        }
    }

private:
    list<IObserver *> observers;  // 观察者列表
    float price;  // 价格
};

#endif // OBSERVER_H
