//
//  CarFactory.h
//  AbstractFactory
//
//  Created by lingowu on 2021/5/12.
//

#ifndef CarFactory_h
#define CarFactory_h

#include "IBike.h"
#include "ICar.h"

enum FACTORY_TYPE {
    BENZ_FACTORY,  // 奔驰工厂
    BMW_FACTORY,  // 宝马工厂
    AUDI_FACTORY  // 奥迪工厂
};

// 工厂接口
class AFactory {
public:
    virtual ~AFactory() {}
    virtual ICar* CreateCar() = 0;  // 生产汽车
    virtual IBike* CreateBike() = 0;    // 生产自行车
    static AFactory* CreateFactory(FACTORY_TYPE factory);  // 创建工厂
};

// 奔驰工厂
class BenzFactory : public AFactory {
public:
    ICar* CreateCar() {
        return new BenzCar();
    }
    IBike* CreateBike() {
        return new BenzBike();
    }
};

// 宝马工厂
class BmwFactory : public AFactory {
public:
    ICar* CreateCar() {
        return new BmwCar();
    }
    IBike* CreateBike() {
        return new BmwBike();
    }
};

// 奥迪工厂
class AudiFactory : public AFactory {
public:
    ICar* CreateCar() {
        return new AudiCar();
    }
    IBike* CreateBike() {
        return new AudiBike();
    }
};

// 创建工厂
AFactory* AFactory::CreateFactory(FACTORY_TYPE factory) {
    AFactory *pFactory = NULL;
    switch (factory) {
    case FACTORY_TYPE::BENZ_FACTORY:  // 奔驰工厂
        pFactory = new BenzFactory();
        break;
    case FACTORY_TYPE::BMW_FACTORY:  // 宝马工厂
        pFactory = new BmwFactory();
        break;
    case FACTORY_TYPE::AUDI_FACTORY:  // 奥迪工厂
        pFactory = new AudiFactory();
        break;
    default:
        break;
    }
    return pFactory;
}

#endif /* CarFactory_h */
