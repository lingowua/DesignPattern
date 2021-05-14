//
//  main.cpp
//  FactoryMethod
//
//  Created by lingowu on 2021/5/12.
//

#include <iostream>
#include "CarFactory.h"

#define SAFE_DELETE(p) { if(p){delete(p); (p)=nullptr;} }

int main(int argc, const char * argv[]) {
    // 奔驰
    AFactory *pFactory = new BenzFactory();
    ICar *pCar = pFactory->CreateCar();
    cout << "Benz factory: " << pCar->Name() << endl;

    SAFE_DELETE(pCar);
    SAFE_DELETE(pFactory);

    // 宝马
    pFactory = new BmwFactory();
    pCar = pFactory->CreateCar();
    cout << "Bmw factory: " << pCar->Name() << endl;

    SAFE_DELETE(pCar);
    SAFE_DELETE(pFactory);

    // 奥迪
    pFactory = new AudiFactory();
    pCar = pFactory->CreateCar();
    cout << "Audi factory: " << pCar->Name() << endl;

    SAFE_DELETE(pCar);
    SAFE_DELETE(pFactory);
    
    return 0;
}
