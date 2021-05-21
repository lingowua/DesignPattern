//
//  Protype.h
//  Protype
//
//  Created by lingowu on 2021/5/12.
//

#ifndef Protype_h
#define Protype_h

#include <iostream>

using namespace std;

// 猴子
class Monkey {
public:
    virtual ~Monkey(){}
    virtual Monkey* Clone() = 0;  // 克隆
    virtual void Play() = 0;  // 玩耍
};

// 孙悟空
class WuKong : public Monkey {
public:
    WuKong(string name):name(name) {}
    ~WuKong() {}

    // 拷贝构造函数
    WuKong(const WuKong &other) { name = other.name;}
    // 调用拷贝构造函数
    Monkey* Clone() { return new WuKong(*this);}
    void Play() { cout << name << "玩金箍棒" << endl;}

private:
    string name;
};

#endif /* Protype_h */
