//
//  main.cpp
//  Builder
//
//  Created by lingowu on 2021/5/12.
//

#include <iostream>
#include "concrete_bulider.h"
#include "director.h"
#include "MilkTea.h"

#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }

int main(int argc, const char *argv[]) {
    Direcror *pDirecror = new Direcror();
    ThinkPadBuilder *pTPBuilder = new ThinkPadBuilder();
    YogaBuilder *pYogaBuilder = new YogaBuilder();

    // 组装 ThinkPad、Yoga
    pDirecror->Create(pTPBuilder);
    pDirecror->Create(pYogaBuilder);

    // 获取组装后的电脑
    Computer *pThinkPadComputer = pTPBuilder->GetResult();
    Computer *pYogaComputer = pYogaBuilder->GetResult();

    // 测试输出
    cout << "-----ThinkPad-----" << endl;
    pThinkPadComputer->show();

    cout << "-----Yoga-----" << endl;
    pYogaComputer->show();

    SAFE_DELETE(pThinkPadComputer);
    SAFE_DELETE(pYogaComputer);
    SAFE_DELETE(pTPBuilder);
    SAFE_DELETE(pYogaBuilder);
    SAFE_DELETE(pDirecror);
    
    MilkTea milkTea = MilkTea::Builder().build();
    milkTea.show();
    
    milkTea = MilkTea::Builder().ice(true).pearl(false).type("草莓味").build();
    milkTea.show();
    
    return 0;
}
