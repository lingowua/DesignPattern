//
//  main.cpp
//  Adapter
//
//  Created by lingowu on 2021/5/12.
//

#include <iostream>
#include "Adapter.h"

#define SAFE_DELETE(p) { if(p){delete(p); (p)=nullptr;} }

void ClientCode(Target *target) {
    target->Request();
}

int main(int argc, const char * argv[]) {
    Target *target = new Target;
    ClientCode(target);
    
    Adaptee *adaptee = new Adaptee;
    Adapter *adapter = new Adapter(adaptee);
    ClientCode(adapter);
    
    cAdapter *cAd = new cAdapter;
    ClientCode(cAd);
    
    SAFE_DELETE(target);
    SAFE_DELETE(adaptee);
    SAFE_DELETE(adapter);
    SAFE_DELETE(cAd);
    
    return 0;
}
