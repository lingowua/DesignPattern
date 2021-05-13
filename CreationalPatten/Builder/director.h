//
//  director.h
//  Builder
//
//  Created by lingowu on 2021/5/12.
//

#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "builder.h"

// 构造指挥官
class Direcror {
public:
    void Create(IBuilder *builder) {
        builder->BuildCpu();
        builder->BuildMainboard();
        builder->BuildRam();
        builder->BuildVideoCard();
    }
};

#endif // DIRECTOR_H
