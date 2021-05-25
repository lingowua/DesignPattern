//
//  main.cpp
//  Flyweight
//
//  Created by lingowu on 2021/5/14.
//

#ifndef FLYWEIGHT_FACTORY_H
#define FLYWEIGHT_FACTORY_H

#include "flyweight.h"
#include <map>

static int cnt = 0;

class PlayerFactory {
public:
	static IPlayer* getPlayer(string type) {
		IPlayer *p = NULL;
		if (m_map.find(type) != m_map.end()) {
            // cout << "复用了" << ++cnt << "次" << endl;
			p = m_map[type];
        } else {
			if (type == "T") {
				cout << "新建了一个恐怖分子" << endl;
				p = new Terrorist();
			} else if (type == "CT") {
				cout << "新建了一个特种部队" << endl;
				p = new CounterTerrorist();
            }
			m_map.insert(make_pair(type, p));
		}
		return p;
	}

private:
	static map<string, IPlayer*> m_map;
};

#endif // FLYWEIGHT_FACTORY_H
