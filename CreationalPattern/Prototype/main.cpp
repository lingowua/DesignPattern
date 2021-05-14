//
//  main.cpp
//  Protype
//
//  Created by lingowu on 2021/5/12.
//

#include <iostream>
#include "Protype.h"

#define SAFE_DELETE(p) { if(p){delete(p); (p)=nullptr;} }

int main(int argc, const char * argv[]) {
    // 孙悟空
    Monkey *swk = new WuKong("齐天大圣");
    // 克隆猴子猴孙
    Monkey *swk1 = swk->Clone();
    Monkey *swk2 = swk1->Clone();
    
    swk1->Play();
    swk2->Play();
    
    SAFE_DELETE(swk);
    SAFE_DELETE(swk2);
    SAFE_DELETE(swk1);
    
    return 0;
}
