//
//  main.cpp
//  AbstractFactory
//
//  Created by lingowu on 2021/5/12.
//

#include <iostream>
#include "CarFactory.h"

#define SAFE_DELETE(p) { if(p){delete(p); (p)=nullptr;} }

int main(int argc, const char * argv[]) {
    cout << "Abstract factory: " << endl;
    // 奔驰
    AFactory *pFactory = AFactory::CreateFactory(FACTORY_TYPE::BENZ_FACTORY);
    ICar *pCar = pFactory->CreateCar();
    IBike *pBike = pFactory->CreateBike();

    cout << "Benz factory - Car: " << pCar->Name() << endl;
    cout << "Benz factory - Bike: " << pBike->Name() << endl;

    SAFE_DELETE(pCar);
    SAFE_DELETE(pBike);
    SAFE_DELETE(pFactory);

    // 宝马
    pFactory = AFactory::CreateFactory(FACTORY_TYPE::BMW_FACTORY);
    pCar = pFactory->CreateCar();
    pBike = pFactory->CreateBike();
    cout << "Bmw factory - Car: " << pCar->Name() << endl;
    cout << "Bmw factory - Bike: " << pBike->Name() << endl;

    SAFE_DELETE(pCar);
    SAFE_DELETE(pBike);
    SAFE_DELETE(pFactory);

    // 奥迪
    pFactory = AFactory::CreateFactory(FACTORY_TYPE::AUDI_FACTORY);
    pCar = pFactory->CreateCar();
    pBike = pFactory->CreateBike();
    cout << "Audi factory - Car: " << pCar->Name() << endl;
    cout << "Audi factory - Bike: " << pBike->Name() << endl;

    SAFE_DELETE(pCar);
    SAFE_DELETE(pBike);
    SAFE_DELETE(pFactory);
    
    return 0;
}
