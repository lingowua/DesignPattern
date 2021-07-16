//
//  Interpreter.h
//  Interpreter
//
//  Created by lingowu on 2021/5/14.
//

#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <iostream>

class Expression {
public:
	virtual ~Expression() {}
    virtual int interpret() {
        return 0;
    }
};

class Operator : public Expression {
public:
    Expression* left;
    Expression* right;
    
    Operator(Expression* l, Expression* r) {
        left = l;
        right = r;
    }
};

class Add : public Operator {
public:
    Add(Expression* l, Expression* r) : Operator(l, r) { }
    
    int interpret() override {
        return left->interpret() + right->interpret();
    }
};

class Sub : public Operator {
public:
    Sub(Expression* l, Expression* r) : Operator(l, r) { }
    
    int interpret() override {
        return left->interpret() - right->interpret();
    }
};

#endif // INTERPRETER_H
