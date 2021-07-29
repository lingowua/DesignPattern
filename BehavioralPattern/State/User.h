//
//  User.h
//  State
//
//  Created by lingowu on 2021/5/14.
//

#ifndef USER_H
#define USER_H

#include <iostream>
#include <list>
#include <string>

using namespace std;

enum UserState {
    USER_NORMAL,
    USER_VIP
};

class IUser {
public:
    virtual ~IUser() {}
    virtual void purchase(int price) = 0;
    virtual void orderTable(int day) = 0;
};

class ISwitchState {
    virtual void purchaseVIP() = 0;
    virtual void expire() = 0;
};

class UserWithoutState : public IUser, public ISwitchState {
private:
    UserState state;
public:
    void purchase(int price) override {
        if (state == USER_NORMAL) {
            cout << "普通用户不打折：" << price << endl;
        } else {
            cout << "VIP用户打8折：" << price * 0.8 << endl;
        }
    }
    
    void orderTable(int day) override {
        if (state == USER_NORMAL) {
            if (day > 3) {
                cout << "普通用户只能预订 3 天之内" << endl;
            } else {
                cout << "普通用户预订了 " << day << " 天后的订单" << endl;
            }
        } else {
            cout << "VIP用户预订了 " << day << " 天后的订单" << endl;
        }
    }
    
    void purchaseVIP() override { state = USER_VIP;}
    void expire()      override { state = USER_NORMAL;}
};

#endif // USER_H
