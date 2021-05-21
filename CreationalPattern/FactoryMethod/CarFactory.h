//
//  CarFactory.h
//  FactoryMethod
//
//  Created by lingowu on 2021/5/12.
//

#ifndef CarFactory_h
#define CarFactory_h

#include "ICar.h"

// 工厂接口
class AFactory {
public:
    virtual ~AFactory() {}
    virtual ICar *CreateCar() = 0;  // 生产汽车
};

// 奔驰工厂
class BenzFactory : public AFactory {
public:
    ICar *CreateCar() {
        return new BenzCar();
    }
};

// 宝马工厂
class BmwFactory : public AFactory {
public:
    ICar *CreateCar() {
        return new BmwCar();
    }
};

// 奥迪工厂
class AudiFactory : public AFactory {
public:
    ICar *CreateCar() {
        return new AudiCar();
    }
};

#endif /* CarFactory_h */
