//
//  main.cpp
//  Interpreter
//
//  Created by lingowu on 2021/5/14.
//

#include "concrete_Interpreter.h"

#define SAFE_DELETE(p) { if(p){delete p; p=nullptr;} }

int main(int argc, const char * argv[]) {
    string expression1 = "一加一";
    string expression2 = "一加一加一";
    string expression3 = "二加五减三";
    string expression4 = "七减五加四减一";
    string expression5 = "九减五加三减一";
    
    Calculator* calculator = new Calculator("");
    calculator->setString(expression1);
    cout << expression1 << " 等于 " << calculator->interpret() << endl;
    calculator->setString(expression2);
    cout << expression2 << " 等于 " << calculator->interpret() << endl;
    calculator->setString(expression3);
    cout << expression3 << " 等于 " << calculator->interpret() << endl;
    calculator->setString(expression4);
    cout << expression4 << " 等于 " << calculator->interpret() << endl;
    calculator->setString(expression5);
    cout << expression5 << " 等于 " << calculator->interpret() << endl;
    
    SAFE_DELETE(calculator);
    
    return 0;
}
