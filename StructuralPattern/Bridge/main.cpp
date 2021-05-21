//
//  main.cpp
//  Bridge
//
//  Created by lingowu on 2021/5/12.
//

#include <iostream>
#include "IShape.h"

#define SAFE_DELETE(p) { if(p){delete(p); (p)=nullptr;} }

int main(int argc, const char * argv[]) {
    IColor *red = new Red;
    IShape *rect = new Rectangle;
    rect->setColor(red);
    rect->draw();
    
    IColor *green = new Green;
    IShape *round = new Round;
    round->setColor(green);
    round->draw();
    
    IColor *blue = new Blue;
    IShape *tri = new Triangle;
    tri->setColor(blue);
    tri->draw();
    tri->setColor(green);
    tri->draw();

    SAFE_DELETE(red);
    SAFE_DELETE(green);
    SAFE_DELETE(blue);
    SAFE_DELETE(rect);
    SAFE_DELETE(tri);
    SAFE_DELETE(round);
    
    return 0;
}
