//
//  Composite.h
//  Composite
//
//  Created by lingowu on 2021/5/12.
//

#ifndef Composite_h
#define Composite_h

#include <iostream>
#include <list>
#include <string>

using namespace std;

class Component {
public:
    virtual void process(int level) = 0;
    virtual ~Component() {}
    virtual void add(Component* element) = 0;
    virtual void remove(Component* element) = 0;
};

//树节点
class Composite : public Component {
    string name;
    list<Component*> child;
public:
    Composite(const string & s) : name(s) {}
    void add(Component* element) {
        child.push_back(element);
    }
    void remove(Component* element){
        child.remove(element);
    }
    
    void process(int level) {
        cout << string(level, ' ') << name << "  work" << endl;
        for (auto &e : child) {
            e->process(level + 2);
        }
    }
};

//叶子节点
class Leaf : public Component {
    string name;
public:
    Leaf(string s) : name(s) {}
    void add(Component* element) {
        cout << "叶子节点没有添加删除权限" << endl;
    }
    void remove(Component* element){
        cout << "叶子节点没有添加删除权限" << endl;
    }
    void process(int level) {
        cout << string(level, ' ') << name << "  work" << endl;
    }
};

#endif /* Composite_h */
