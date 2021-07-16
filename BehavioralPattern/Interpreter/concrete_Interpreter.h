//
//  concrete_Interpreter.h
//  Command
//
//  Created by lingowu on 2021/5/14.
//

#ifndef CONCRETE_INTERPRETER_H
#define CONCRETE_INTERPRETER_H

#include <stack>
#include <string>
#include "Interpreter.h"

using namespace std;

class Number : public Expression {
private:
    int num = 0;
public:
    Number(string s) {
        if (s == "零") num = 0;
        else if (s == "一") num = 1;
        else if (s == "二") num = 2;
        else if (s == "三") num = 3;
        else if (s == "四") num = 4;
        else if (s == "五") num = 5;
        else if (s == "六") num = 6;
        else if (s == "七") num = 7;
        else if (s == "八") num = 8;
        else if (s == "九") num = 9;
        else num = 0;
    }
    int interpret() override {
        return num;
    }
};

class Calculator : public Expression {
private:
    string exp;
public:
    Calculator(string str) {
        exp = str;
    }
    void setString(string str) {
        exp = str;
    }
    int interpret() override {
        stack<Expression *> sta;
        for (int i = 0; i < exp.size(); i+=3) {
            string ss = exp.substr(i, 3);
            if (ss == "加") {
                Expression *pre = sta.top();
                sta.pop();
                i += 3;
                sta.push(new Add(pre, new Number(exp.substr(i, 3))));
                continue;
            } else if (ss == "减") {
                Expression *pre = sta.top();
                sta.pop();
                i += 3;
                sta.push(new Sub(pre, new Number(exp.substr(i, 3))));
                continue;
            } else sta.push(new Number(ss));
        }
        return sta.top()->interpret();
    }
};

#endif // CONCRETE_INTERPRETER_H
