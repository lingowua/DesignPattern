//
//  IHandler.h
//  ChainOfResponsibility
//
//  Created by lingowu on 2021/5/14.
//

#ifndef HANDLER_H
#define HANDLER_H

#include <iostream>

class Programmer {
public:
	virtual ~Programmer() {}
    virtual void sloveBug(int value) = 0;
	void setNext(Programmer *ne) { next = ne;}
protected:
    Programmer *next = nullptr;
};

#endif // HANDLER_H
