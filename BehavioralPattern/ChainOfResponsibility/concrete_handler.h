//
//  concrete_handler.h
//  ChainOfResponsibility
//
//  Created by lingowu on 2021/5/14.
//

#ifndef CONCRETE_HANDLER_H
#define CONCRETE_HANDLER_H

#include "handler.h"
#include <iostream>

using namespace std;

class NewbieProgrammer : public Programmer {
public:
	void sloveBug(int value) override {
		if (20 >= value) {
            cout << "菜鸟程序员解决了一个难度为 " << value << " 的 bug" << endl;
		} else {
			if (next != nullptr)
				next->sloveBug(value);
		}
	}
};

class NormalProgrammer : public Programmer {
public:
    void sloveBug(int value) override {
        if (50 >= value) {
            cout << "普通程序员解决了一个难度为 " << value << " 的 bug" << endl;
        } else {
            if (next != nullptr)
                next->sloveBug(value);
        }
    }
};

class MasterProgrammer : public Programmer {
public:
    void sloveBug(int value) override {
        if (100 >= value) {
            cout << "精英程序员解决了一个难度为 " << value << " 的 bug" << endl;
        } else {
            if (next != nullptr) next->sloveBug(value);
            else cout << value << " 的 bug 无法复现，暂时先不解决" << endl;
        }
    }
};

#endif // CONCRETE_HANDLER_H
