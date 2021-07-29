//
//  Strategy.h
//  Strategy
//
//  Created by lingowu on 2021/5/14.
//

#ifndef STRATEGY_H
#define STRATEGY_H

#include <iostream>
#include <string>

using namespace std;

class ITransport {
public:
    virtual ~ITransport() {}
    virtual void Run() = 0;
};


class Bike : public ITransport{
public:
    void Run() override {
        cout << "自行车" << endl;
    }
};

class Car : public ITransport{
public:
    void Run() override {
        cout << "开车" << endl;
    }
};

class Train : public ITransport {
public:
    void Run() override {
        cout << "坐火车" << endl;
    }
};


class Tourists {
private:
    string name;
    ITransport *tran = nullptr;
public:
    Tourists(string na, ITransport *tra):name(na), tran(tra) {}

    void Travel() {
        cout << name << "的旅游方式：";
        if (nullptr != tran) tran->Run();
    }
};


#endif // STRATEGY_H
