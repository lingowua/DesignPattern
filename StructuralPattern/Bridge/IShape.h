//
//  IShape.h
//  Bridge
//
//  Created by lingowu on 2021/5/12.
//

#ifndef IShape_h
#define IShape_h

#include <string>
#include "IColor.h"

using namespace std;

class IShape {
private:
    IColor *color;
public:
    virtual ~IShape() {}
    void setColor(IColor *col) { color = col;}
    IColor* getColor() { return color;}
    virtual void draw() = 0;
};

class Round : public IShape {
public:
    void draw() override {
        cout << this->getColor()->Name() << "的圆形" << endl;
    }
};

class Triangle : public IShape {
public:
    void draw() override {
        cout << this->getColor()->Name() << "的三角形" << endl;
    }
};

class Rectangle : public IShape {
public:
    void draw() override {
        cout << this->getColor()->Name() << "的长方形" << endl;
    }
};

#endif /* IShape_h */
