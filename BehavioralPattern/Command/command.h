//
//  command.h
//  Command
//
//  Created by lingowu on 2021/5/14.
//

#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>

class ICommand {
public:
	virtual ~ICommand() {}
    virtual void execute() = 0;
    virtual void undo() = 0;
};

#endif // COMMAND_H
