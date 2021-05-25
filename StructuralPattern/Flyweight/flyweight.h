//
//  main.cpp
//  Flyweight
//
//  Created by lingowu on 2021/5/14.
//

#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include <iostream>
#include <string>

using namespace std;

class IPlayer {
public:
	virtual ~IPlayer() {}
    void setWeapon(string str) { weapon = str;}
	virtual void mission() {
        cout << name + "带着 " + weapon + "," + " 任务是 " + task << endl;
    }
protected:
    string name;
	string task;
	string weapon;
};


class Terrorist : public IPlayer {
public:
    Terrorist() { name = "恐怖分子"; task = "放置炸弹";}
};

class CounterTerrorist : public IPlayer {
public:
    CounterTerrorist() { name = "特种部队"; task = "拆除炸弹";}
};

#endif // FLYWEIGHT_H
