//
//  State.h
//  State
//
//  Created by lingowu on 2021/5/14.
//

#ifndef STATE_H
#define STATE_H

#include "User.h"

class NormalUser : public IUser {
    void purchase(int price) override {
        cout << "普通用户不打折：" << price << endl;
    }

    void orderTable(int day) override {
        if (day > 3) {
            cout << "普通用户只能预订 3 天之内" << endl;
        } else {
            cout << "普通用户预订了 " << day << " 天后的订单" << endl;
        }
    }
};

class VIPUser : public IUser {
    void purchase(int price) override {
        cout << "VIP用户打8折：" << price * 0.8 << endl;
    }
    
    void orderTable(int day) override {
        cout << "VIP用户预订了 " << day << " 天后的订单" << endl;
    }
};

class User : public IUser, public ISwitchState {
private:
    IUser *user = new NormalUser();
public:
    void purchase(int price) override {
        user->purchase(price);
    }
    
    void orderTable(int day) override {
        user->orderTable(day);
    }
    
    void purchaseVIP() override { user = new VIPUser();}
    void expire()      override { user = new NormalUser();}
};


#endif // STATE_H
