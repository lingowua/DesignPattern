//
//  Visitor.h
//  Visitor
//
//  Created by lingowu on 2021/5/14.
//

#ifndef VISITOR_H
#define VISITOR_H

#include <iostream> 
#include <string>

using namespace std;

// 抽象访问者类
class IVisitor {
public:
    virtual ~IVisitor() {}
    virtual void chooseLobster(string lobster) = 0;
    virtual void chooseWatermelon(string watermelon) = 0;
    virtual void chooseSteak(string steak) = 0;
    virtual void chooseBanana(string banana) = 0;
};

// 具体餐厅类
class Restaurant {
private:
    string lobster = "龙虾";
    string watermelon = "西瓜";
    string steak = "牛排";
    string banana = "香蕉";
public:
    void welcome(IVisitor *visitor) {
        visitor->chooseLobster(lobster);
        visitor->chooseWatermelon(watermelon);
        visitor->chooseSteak(steak);
        visitor->chooseBanana(banana);
    }
};

// 具体访问者
class Mirror : public IVisitor {
    void chooseLobster(string lobster)       override { cout << "Mirror 拿了  " << lobster << endl;}
    void chooseWatermelon(string watermelon) override { cout << "Mirror 拿了  " << watermelon << endl;}
    void chooseSteak(string steak)           override { cout << "Mirror 不喜欢" << steak << endl;}
    void chooseBanana(string banana)         override { cout << "Mirror 不喜欢" << banana << endl;}
};

#endif // VISITOR_H
