//
//  Singleton.h
//  Singleton
//
//  Created by lingowu on 2021/5/12.
//

#ifndef Singleton_h
#define Singleton_h

#include <mutex>

using namespace std;

static mutex curLock;

class Singleton {
private:
    int count = 0;
    Singleton() { cout << "实例化了" << ++count << "个 Singleton 对象！" << endl;}
    ~Singleton() { cout << " delloc" << endl;}

    static Singleton *p;
public:
    static Singleton *getInstance() {
        if (p == nullptr) {
            lock_guard<mutex> guard(curLock);
            if (p == nullptr) p = new Singleton();
        }
        return p;
    };
    
    class Garbage {
    public:
        ~Garbage() {
            if (p != NULL) {
                delete p;
                p = NULL;
            }
        }
        static Garbage gc;
    };
};

Singleton *Singleton::p = nullptr;
Singleton::Garbage Singleton::Garbage::gc;

#endif /* Singleton_h */
