//
//  main.cpp
//  State
//
//  Created by lingowu on 2021/5/14.
//

#include "State.h"

int main(int argc, const char * argv[]) {
    UserWithoutState user1;
    user1.purchase(15);
    user1.orderTable(5);
    user1.purchaseVIP();
    user1.purchase(15);
    user1.orderTable(5);
    
    cout << endl << endl;
    User user;
    user.purchase(15);
    user.orderTable(5);
    user.purchaseVIP();
    user.purchase(15);
    user.orderTable(5);
    
    
    return 0;
}
