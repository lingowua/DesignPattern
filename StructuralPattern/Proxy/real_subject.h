//
//  real_subject.h
//  Proxy
//
//  Created by lingowu on 2021/5/14.
//

#ifndef REAL_SUBJECT_H
#define REAL_SUBJECT_H

#include "subject.h"
#include <iostream>

class CMCC : public ITelco {
public:
	void Recharge(int money) override {
        cout << "充了 " << money << " 块" << endl;
	}
};

#endif // REAL_SUBJECT_H
