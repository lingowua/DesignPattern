//
//  proxy.h
//  Proxy
//
//  Created by lingowu on 2021/5/14.
//

#ifndef PROXY_H
#define PROXY_H

#include "subject.h"
#include "real_subject.h"
#include <iostream>

class Proxy : public ITelco {
public:
	Proxy() : m_pCMCC(NULL) {}
	~Proxy() { delete m_pCMCC;}

	void Recharge(int money) override {
		if (money >= 5) {
			if (m_pCMCC == NULL) m_pCMCC = new CMCC();
			m_pCMCC->Recharge(money);
		} else {
			cout << "钱太少，不给充" << endl;
		}
	}

private:
	CMCC *m_pCMCC;
};

#endif // PROXY_H
