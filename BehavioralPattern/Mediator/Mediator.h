//
//  Mediator.h
//  Mediator
//
//  Created by lingowu on 2021/5/14.
//

#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <vector>
#include <string>

using namespace std;

class Player {
public:
    int money = 100;
    void win(Player *p, int mon) {
        p->money -= mon;
        money += mon;
    }
};

class Mediator {
public:
    int money;
};

class PlayerWithMediator {
public:
    int money = 100;
    Mediator *med;
    PlayerWithMediator(Mediator *me): med(me){}
    void win(int mon) {
        med->money -= mon;
        money += mon;
    }
};

#endif // MEDIATOR_H
