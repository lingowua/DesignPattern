//
//  main.cpp
//  Visitor
//
//  Created by lingowu on 2021/5/14.
//

#include "Visitor.h"
#include "Visitor1.h"

#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }

int main(int argc, const char * argv[]) {
    Restaurant rest;
    IVisitor *mirror = new Mirror();
    rest.welcome(mirror);
    
    cout << endl;
    Restaurant1 res;
    Visitor *mir = new Mirror1();
    res.welcome(mir);
    
    SAFE_DELETE(mirror);
    SAFE_DELETE(mir);
    
    return 0;
}
