//
//  subsystem.h
//  Facade
//
//  Created by lingowu on 2021/5/14.
//

#ifndef subsystem_H
#define subsystem_H

#include <iostream>
#include <string>

using namespace std;

class Browser {
public:
    static void open() { cout << "打开浏览器" << endl;}
    static void close() { cout << "关闭浏览器" << endl;}
};

class IDE {
public:
    static void open() { cout << "打开 IDE" << endl;}
    static void close() { cout << "关闭 IDE" << endl;}
};

class Wechat {
public:
    static void open() { cout << "打开微信" << endl;}
    static void close() { cout << "关闭微信" << endl;}
};

#endif // subsystem_H
