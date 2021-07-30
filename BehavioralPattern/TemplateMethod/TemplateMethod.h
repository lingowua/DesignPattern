//
//  TemplateMethod.h
//  TemplateMethod
//
//  Created by lingowu on 2021/5/14.
//

#ifndef TEMPLATEMETHOD_H
#define TEMPLATEMETHOD_H

#include <iostream> 
#include <string>

using namespace std;

class Company {
public:
    virtual ~Company() {}
    void Recruit() {
        cout << "校园招聘开启" << endl;
        CareerTalk();
        ReceiveResume();
        Interview();
        Offer();
        cout << "校园招聘结束" << endl;
    }
    void CareerTalk() { cout << "企业宣讲会" << endl;}
    void ReceiveResume() { cout << "接收简历" << endl;}

    virtual void Interview() = 0;
    virtual void Offer() = 0;
};

// 具体公司类
class Alibaba : public Company {
public:
    void Interview() override { cout << "阿里一面 -> 阿里二面 -> 阿里最终面" << endl;}
    void Offer() override { cout << "阿里发offer" << endl;}
};

class ByteDance : public Company {
public:
    void Interview() override { cout << "字节一面 -> 字节交叉面 -> 字节最终面" << endl;}
    void Offer() override { cout << "字节发offer" << endl;}
};

#endif // TEMPLATEMETHOD_H
