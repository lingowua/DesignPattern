//
//  main.cpp
//  ChainOfResponsibility
//
//  Created by lingowu on 2021/5/14.
//

#include "concrete_handler.h"

#define SAFE_DELETE(p) { if(p){delete p; p=nullptr;} }

int main() {
	Programmer *newPro = new NewbieProgrammer();
    Programmer *norPro = new NormalProgrammer();
    Programmer *masPro = new MasterProgrammer();

    newPro->setNext(norPro);
    norPro->setNext(masPro);

    newPro->sloveBug(10);
    newPro->sloveBug(20);
    newPro->sloveBug(40);
    newPro->sloveBug(80);
    newPro->sloveBug(160);

	SAFE_DELETE(newPro);
	SAFE_DELETE(norPro);
	SAFE_DELETE(masPro);
    
	return 0;
}
