//
//  Memento.h
//  Memento
//
//  Created by lingowu on 2021/5/14.
//

#ifndef MEMENTO_H
#define MEMENTO_H

#include <vector>
#include <string>

using namespace std;

class Memento {
public:
    int HP;
    int MP;
    Memento(int hp, int mp):HP(hp), MP(mp) { }
};

class Player {
private:
    int HP = 100;
    int MP = 50;
    Memento *me;
public:
    void fightBoss() {
        if (0 >= HP) {
            cout << "玩家濒危，无法攻击boss" << endl;
            return;
        }
        HP -= 100;
        MP -= 50;
        if (0 >= HP) {
            cout << "玩家没了" << endl;
        }
    }
    void saveState() {
        me = new Memento(HP, MP);
    }
    void restoreState() {
        if (me != nullptr) {
            HP = me->HP;
            MP = me->MP;
        }
    }
};

#endif // MEMENTO_H
