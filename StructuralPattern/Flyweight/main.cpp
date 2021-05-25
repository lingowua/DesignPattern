//
//  main.cpp
//  Flyweight
//
//  Created by lingowu on 2021/5/14.
//

#include "flyweight_factory.h"
#include <ctime>

map<string, IPlayer*> PlayerFactory::m_map = map<string, IPlayer*>();

static string playerType[2] = { "T", "CT" };
static string weapons[4] = { "AK-47", "M416", "M762", "AWM" };

int main() {
	srand((unsigned)time(NULL));
    
	for (int i = 0; i < 10; i++) {
		string type = playerType[rand() % 2];
		string weapon = weapons[rand() % 4];
        
		IPlayer *p = PlayerFactory::getPlayer(type);
		p->setWeapon(weapon);
		p->mission();
	}

	return 0;
}
