//
//  main.cpp
//  Strategy
//
//  Created by lingowu on 2021/5/14.
//

#include "Strategy.h"

#define SAFE_DELETE(p) { if(p){delete p; p=nullptr;} }

int main(int argc, const char * argv[]) {
    ITransport *bike = new Bike();
    ITransport *car = new Car();
    ITransport *train = new Train();

    Tourists *zhangsan = new Tourists("张三", bike);
    Tourists *lisi = new Tourists("李四", car);
    Tourists *wangwu = new Tourists("王五", train);

    zhangsan->Travel();
    lisi->Travel();
    wangwu->Travel();

    SAFE_DELETE(bike);
    SAFE_DELETE(car);
    SAFE_DELETE(train);

    SAFE_DELETE(zhangsan);
    SAFE_DELETE(lisi);
    SAFE_DELETE(wangwu);
    
    return 0;
}
