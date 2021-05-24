//
//  main.cpp
//  Facade
//
//  Created by lingowu on 2021/5/14.
//

#include "facade.h"

#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }

int main(int argc, const char * argv[]) {
    facade *fa = new facade;
    fa->open();
    cout << endl;
    fa->close();
    
    SAFE_DELETE(fa);
    return 0;
}
