//
//  Adaptee.h
//  Adapter
//
//  Created by lingowu on 2021/5/12.
//

#ifndef ADAPTEE_H
#define ADAPTEE_H

using namespace std;

// Adaptee 适配者 需要适配的类
class Adaptee {
public:
    void SpecificRequest() {
        cout << "适配者中的业务代码被调用！" << endl;
    }
};

#endif // ADAPTEE_H
