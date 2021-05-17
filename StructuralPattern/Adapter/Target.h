//
//  Target.h
//  Adapter
//
//  Created by lingowu on 2021/5/12.
//

#ifndef TARGET_H
#define TARGET_H

using namespace std;

// Target (这是客户所期待的接口。目标可以是具体的或抽象的类，也可以是接口)
class Target {
public:
    virtual ~Target() = default;
    virtual void Request() {};
};

#endif // TARGET_H
