//
//  main.cpp
//  Singleton
//
//  Created by lingowu on 2021/5/12.
//

#include <iostream>
#include "EagerSingleton.h"
#include "Singleton.h"

#define SAFE_DELETE(p) { if(p){delete(p); (p)=nullptr;} }

int main(int argc, const char * argv[]) {
    eSingleton::getInstance();
    eSingleton::getInstance();
    eSingleton::getInstance();
    
    EagerSingleton::getInstance();
    EagerSingleton::getInstance();
    EagerSingleton::getInstance();
    
    Singleton::getInstance();
    
    return 0;
}
