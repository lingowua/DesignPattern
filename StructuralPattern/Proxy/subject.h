//
//  subject.h
//  Proxy
//
//  Created by lingowu on 2021/5/14.
//

#ifndef SUBJECT_H
#define SUBJECT_H

#include <string>

using namespace std;

class ITelco {
public:
	virtual ~ITelco() {}
	virtual void Recharge(int money) = 0;
};

#endif // SUBJECT_H
