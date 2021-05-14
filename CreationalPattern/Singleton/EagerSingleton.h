//
//  EagerSingleton.h
//  Singleton
//
//  Created by lingowu on 2021/5/12.
//

#ifndef EagerSingleton_h
#define EagerSingleton_h

#include <string>

using namespace std;

class eSingleton {
public:
    static eSingleton& getInstance() { return p;};
private:
    int count = 0;
    // eSingleton(const eSingleton&);
    // eSingleton& operator=(const eSingleton&);
    eSingleton() { cout << "实例化了" << ++count << "个 eSingleton 对象！" << endl;}
    ~eSingleton() { cout << "e delloc" << endl;}
    static eSingleton p;
};
eSingleton eSingleton::p;


// 指针  内部类内存回收
class EagerSingleton {
public:
    static EagerSingleton *getInstance() { return p;};
    class Garbage {
    public:
        // 实现一个内嵌垃圾回收类
        ~Garbage() {
            if (p != NULL) {
                delete p;
                p = NULL;
            }
        } // 定义一个静态成员变量，程序结束时，系统会自动调用它的析构函数从而释放单例对象
        static Garbage gc;
    };
private:
    int count = 0;
    EagerSingleton() { cout << "实例化了" << ++count << "个 EagerSingleton 对象！" << endl;}
    virtual ~EagerSingleton() { cout << "eager delloc" << endl;}
    static EagerSingleton *p;
};
EagerSingleton *EagerSingleton::p = new EagerSingleton();
EagerSingleton::Garbage EagerSingleton::Garbage::gc;

#endif /* EagerSingleton_h */
