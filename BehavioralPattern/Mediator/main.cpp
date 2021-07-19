//
//  main.cpp
//  Mediator
//
//  Created by lingowu on 2021/5/14.
//

#include <iostream>
#include "Mediator.h"

#define SAFE_DELETE(p) { if(p){delete p; p=nullptr;} }

void test1() {
    Player *p1 = new Player();
    Player *p2 = new Player();
    Player *p3 = new Player();
    Player *p4 = new Player();
    p1->win(p2, 5);
    p2->win(p3, 8);
    p2->win(p4, 3);
    p4->win(p1, 6);
    
    cout << "四人剩余的钱：" << p1->money << ", " << p2->money << ", " << p3->money << ", " << p4->money << endl;
    
    SAFE_DELETE(p1);
    SAFE_DELETE(p2);
    SAFE_DELETE(p3);
    SAFE_DELETE(p4);
}

void test2() {
    Mediator *med = new Mediator();
    PlayerWithMediator *p1 = new PlayerWithMediator(med);
    PlayerWithMediator *p2 = new PlayerWithMediator(med);
    PlayerWithMediator *p3 = new PlayerWithMediator(med);
    PlayerWithMediator *p4 = new PlayerWithMediator(med);
    p1->win(-5);
    p2->win(-8);
    p3->win(10);
    p4->win(3);
    
    cout << "四人剩余的钱：" << p1->money << ", " << p2->money << ", " << p3->money << ", " << p4->money << endl;
    
    SAFE_DELETE(p1);
    SAFE_DELETE(p2);
    SAFE_DELETE(p3);
    SAFE_DELETE(p4);
}

int main(int argc, const char * argv[]) {
    test1();
    test2();
    
    return 0;
}
