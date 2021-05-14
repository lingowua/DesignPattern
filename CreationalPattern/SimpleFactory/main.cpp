//
//  main.cpp
//  SimpleFactory
//
//  Created by lingowu on 2021/5/12.
//

#include <iostream>
#include "CarFactory.h"

#define SAFE_DELETE(p) { if(p){delete(p); (p)=nullptr;} }

int main(int argc, const char * argv[]) {
    // 工厂
    Factory *pFactory = new Factory();

    // 生产奔驰、宝马、奥迪
    ICar *pBenzCar = pFactory->CreateCar(CAR_TYPE::BENZ);
    ICar* pBmwCar = pFactory->CreateCar(CAR_TYPE::BMW);
    ICar* pAudiCar = pFactory->CreateCar(CAR_TYPE::AUDI);
    
    cout << pBenzCar->Name() << endl;
    cout << pBmwCar->Name() << endl;
    cout << pAudiCar->Name() << endl;

    SAFE_DELETE(pBenzCar);
    SAFE_DELETE(pBmwCar);
    SAFE_DELETE(pAudiCar);
    SAFE_DELETE(pFactory);
    
    return 0;
}
