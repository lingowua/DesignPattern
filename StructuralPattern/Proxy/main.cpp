//
//  main.cpp
//  Proxy
//
//  Created by lingowu on 2021/5/14.
//

#include "proxy.h"

#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }


int main() {
	Proxy* proxy = new Proxy();
	proxy->Recharge(4);
	proxy->Recharge(10);

	SAFE_DELETE(proxy);


	return 0;
}
