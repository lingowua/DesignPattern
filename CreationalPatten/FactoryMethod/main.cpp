//
//  main.cpp
//  SimpleFactory
//
//  Created by lingowu on 2021/5/12.
//

#include <iostream>
#include "CarFactory.h"

int main(int argc, const char * argv[]) {
    // 奔驰
    AFactory *pFactory = new BenzFactory();
    ICar *pCar = pFactory->CreateCar();
    cout << "Benz factory: " << pCar->Name() << endl;
    // 宝马
    pFactory = new BmwFactory();
    pCar = pFactory->CreateCar();
    cout << "Bmw factory: " << pCar->Name() << endl;
    // 奥迪
    pFactory = new AudiFactory();
    pCar = pFactory->CreateCar();
    cout << "Audi factory: " << pCar->Name() << endl;
    
    getchar();
    return 0;
}
