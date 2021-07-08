//
//  command.h
//  Command
//
//  Created by lingowu on 2021/5/14.
//

#ifndef HANDLER_H
#define HANDLER_H

#include <iostream>

class ICommand {
public:
	virtual ~ICommand() {}
    virtual void execute() = 0;
    virtual void undo() = 0;
};

#endif // HANDLER_H
