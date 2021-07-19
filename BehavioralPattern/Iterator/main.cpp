//
//  main.cpp
//  Iterator
//
//  Created by lingowu on 2021/5/14.
//

#include <iostream>
#include "Iterator.h"

#define SAFE_DELETE(p) { if(p){delete p; p=nullptr;} }

using namespace std;

int main(int argc, const char * argv[]) {
    vector<string> arr{"a", "b", "c", "d"};
    MyVector *myV = new MyVector(arr);
    while (myV->hasNext()) {
        cout << myV->next() << endl;
    }
    
    SAFE_DELETE(myV);
    return 0;
}
