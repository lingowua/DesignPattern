//
//  concrete_command.h
//  Command
//
//  Created by lingowu on 2021/5/14.
//

#ifndef CONCRETE_HANDLER_H
#define CONCRETE_HANDLER_H

#include <vector>
#include "command.h"

using namespace std;

class MacroCommand : public ICommand {
private:
    vector<ICommand *> commands;
public:
    MacroCommand(vector<ICommand *> a) {
        commands = a;
        // copy(a.begin(), a.end(), commands.begin());
    }
    void execute() override {
        for (ICommand* &it : commands) {
            it->execute();
        }
    }
    void undo() override {
        for (ICommand* &it : commands) {
            it->undo();
        }
    }
};

class DoorOpenCommand : public ICommand {
public:
    void execute() override {
        cout << "开门" << endl;
    }
    void undo() override {
        cout << "关门" << endl;
    }
};

class DoorCloseCommand : public ICommand {
public:
    void execute() override {
        cout << "关门" << endl;
    }
    void undo() override {
        cout << "开门" << endl;
    }
};

class LightOpenCommand : public ICommand {
public:
    void execute() override {
        cout << "开灯" << endl;
    }
    void undo() override {
        cout << "关灯" << endl;
    }
};

class LightCloseCommand : public ICommand {
public:
    void execute() override {
        cout << "关灯" << endl;
    }
    void undo() override {
        cout << "开灯" << endl;
    }
};

class WindowOpenCommand : public ICommand {
public:
    void execute() override {
        cout << "开窗" << endl;
    }
    void undo() override {
        cout << "关窗" << endl;
    }
};

class WindowCloseCommand : public ICommand {
public:
    void execute() override {
        cout << "关窗" << endl;
    }
    void undo() override {
        cout << "开窗" << endl;
    }
};

#endif // CONCRETE_HANDLER_H
