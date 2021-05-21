//
//  SafeComposite.h
//  Composite
//
//  Created by lingowu on 2021/5/12.
//

#ifndef SafeComposite_h
#define SafeComposite_h

#include <iostream>
#include <list>
#include <string>

using namespace std;

class SafeComponent {
public:
    virtual void process(int level) = 0;
    virtual ~SafeComponent(){}
};

//树节点
class SafeComposite : public SafeComponent {
    string name;
    list<SafeComponent*> child;
public:
    SafeComposite(const string & s) : name(s) {}
    
    void add(SafeComponent* element) {
        child.push_back(element);
    }
    void remove(SafeComponent* element){
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
class SafeLeaf : public SafeComponent {
    string name;
public:
    SafeLeaf(string s) : name(s) {}
            
    void process(int level) {
        cout << string(level, ' ') << name << "  work" << endl;
    }
};

#endif /* SafeComposite_h */
