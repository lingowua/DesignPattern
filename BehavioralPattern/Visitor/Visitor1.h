//
//  Visitor.h
//  Visitor
//
//  Created by lingowu on 2021/5/14.
//

#ifndef VISITOR1_H
#define VISITOR1_H

#include <iostream> 
#include <string>
#include <vector>

using namespace std;

class Lobster;
class Watermelon;
class Steak;
class Banana;

// 抽象访问者类
class Visitor {
public:
    virtual ~Visitor() {}
    virtual void chooseFood(Lobster *lob)    = 0;
    virtual void chooseFood(Watermelon *wat) = 0;
    virtual void chooseFood(Steak *ste)      = 0;
    virtual void chooseFood(Banana *ban)     = 0;
};

// 抽象食物类
class Food {
public:
    virtual string name() = 0;
    // Food 中添加 accept 方法，接收访问者
    virtual void accept(Visitor *vis) = 0;
};

// 具体食物类
class Lobster : public Food {
public:
    string name() override { return "龙虾";}
    void accept(Visitor *vis) override { vis->chooseFood(this);}
};
class Watermelon : public Food {
public:
    string name() override { return "西瓜";}
    void accept(Visitor *vis) override { vis->chooseFood(this);}
};
class Steak : public Food {
public:
    string name() override { return "牛排";}
    void accept(Visitor *vis) override { vis->chooseFood(this);}
};
class Banana : public Food {
public:
    string name() override { return "香蕉";}
    void accept(Visitor *vis) override { vis->chooseFood(this);}
};


// 具体餐厅类
class Restaurant1 {
private:
    vector<Food *> arr;
public:
    Restaurant1() {
        arr.push_back(new Lobster());
        arr.push_back(new Watermelon());
        arr.push_back(new Steak());
        arr.push_back(new Banana());
        
    }
    void welcome(Visitor *visitor) {
        for (auto &it : arr) {
            it->accept(visitor);
        }
    }
};

// 具体访问者
class Mirror1 : public Visitor {
    void chooseFood(Lobster *lob)    override { cout << "Mirror1 不喜欢" << lob->name() << endl; };
    void chooseFood(Watermelon *wat) override { cout << "Mirror1 不喜欢" << wat->name() << endl; };
    void chooseFood(Steak *ste)      override { cout << "Mirror1 拿了  " << ste->name() << endl; };
    void chooseFood(Banana *ban)     override { cout << "Mirror1 拿了  " << ban->name() << endl; };
};

#endif // VISITOR1_H
