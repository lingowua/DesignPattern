//
//  IColor.h
//  Bridge
//
//  Created by lingowu on 2021/5/12.
//

#ifndef IColor_h
#define IColor_h

#include <string>

using namespace std;

class IColor {
public:
    virtual ~IColor() {}
    virtual string Name() = 0;
};

class Red : public IColor {
public:
    string Name() {
        return "红";
    }
};

class Green : public IColor {
public:
    string Name() {
        return "绿";
    }
};

class Blue : public IColor {
public:
    string Name() {
        return "蓝";
    }
};

#endif /* IColor_h */
