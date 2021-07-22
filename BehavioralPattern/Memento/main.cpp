//
//  main.cpp
//  Memento
//
//  Created by lingowu on 2021/5/14.
//

#include <iostream>
#include "Memento.h"

#define SAFE_DELETE(p) { if(p){delete p; p=nullptr;} }

int main(int argc, const char * argv[]) {
    Player *p = new Player();
    
    p->saveState();
    p->fightBoss();
    p->fightBoss();
    
    p->restoreState();
    p->fightBoss();
    
    SAFE_DELETE(p);
    
    return 0;
}
