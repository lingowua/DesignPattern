//
//  main.cpp
//  Command
//
//  Created by lingowu on 2021/5/14.
//

#include "concrete_command.h"

#define SAFE_DELETE(p) { if(p){delete p; p=nullptr;} }

int main(int argc, const char * argv[]) {
    ICommand *doorOC = new DoorOpenCommand();
    ICommand *winOC = new WindowOpenCommand();
    ICommand *lightOC = new LightOpenCommand();
    doorOC->execute();
    
    vector<ICommand *> arr;
    arr.push_back(doorOC);
    arr.push_back(winOC);
    arr.push_back(lightOC);
    MacroCommand macro(arr);
    macro.execute();
    macro.undo();
    
    SAFE_DELETE(doorOC);
    SAFE_DELETE(winOC);
    SAFE_DELETE(lightOC);
    
    return 0;
}
