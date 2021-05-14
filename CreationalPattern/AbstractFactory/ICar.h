//
//  ICar.h
//  AbstractFactory
//
//  Created by lingowu on 2021/5/12.
//

#ifndef ICar_h
#define ICar_h

#include <string>

using namespace std;

// 汽车接口
class ICar {
public:
    virtual ~ICar() {}
    virtual string Name() = 0;  // 汽车名称
};

// 奔驰汽车
class BenzCar : public ICar {
public:
    string Name() override {
        return "Benz Car";
    }
};

// 宝马汽车
class BmwCar : public ICar {
public:
    string Name() override {
        return "Bmw Car";
    }
};

// 奥迪汽车
class AudiCar : public ICar {
public:
    string Name() override {
        return "Audi Car";
    }
};

#endif /* ICar_h */
