//
//  main.cpp
//  Decorator
//
//  Created by lingowu on 2021/5/14.
//

#include "concrete_component.h"
#include "concrete_decorator.h"
#include <iostream>

#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }

int main() {
    ICoffee *latte = new Latte(); // 拿铁
    cout << latte->Name() << " : " << latte->Cost() << endl;
    // latte->show();
    
    ICoffee *cappuccino = new Cappuccino(); // 卡布奇诺
    cout << cappuccino->Name() << " : " << cappuccino->Cost() << endl;
    // cappuccino->show();
    
    CondimentDecorator *pCream = new Cream(latte); // 拿铁 + 奶油
    CondimentDecorator *pMocha = new Mocha(latte); // 拿铁 + 摩卡
    CondimentDecorator *pSyrup = new Syrup(latte); // 拿铁 + 糖浆
    pCream->show();
    pMocha->show();
    pSyrup->show();
    
    
    CondimentDecorator *pCreamDR = new Cream(cappuccino); // 卡布奇诺 + 奶油
    CondimentDecorator *pCreamMocha = new Mocha(pCreamDR); // 卡布奇诺 + 奶油 + 摩卡
    CondimentDecorator *pCreamMochaSyrup = new Syrup(pCreamMocha); // 卡布奇诺 + 奶油 + 摩卡 + 糖浆
    pCreamDR->show();
    pCreamMocha->show();
    pCreamMochaSyrup->show();
    
    CondimentDecorator *ppppp = new Cream(pCreamMochaSyrup); // 拉满 + 奶油
    ppppp->show();
    SAFE_DELETE(ppppp);
    
    SAFE_DELETE(pSyrup);
    SAFE_DELETE(pMocha);
    SAFE_DELETE(pCream);
    SAFE_DELETE(latte);

    SAFE_DELETE(pCreamMochaSyrup);
    SAFE_DELETE(pCreamMocha);
    SAFE_DELETE(pCreamDR);
    SAFE_DELETE(cappuccino);

    return 0;
}
