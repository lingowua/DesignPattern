//
//  facade.h
//  Facade
//
//  Created by lingowu on 2021/5/14.
//

#ifndef facade_H
#define facade_H

#include "subsystem.h"

class facade {
public :
    void open() {
        cout << "进行一个班的上" << endl;
        Browser::open(); IDE::open(); Wechat::open();
    }
    void close() {
        cout << "进行一个班的下" << endl;
        Browser::close(); IDE::close(); Wechat::close();
    }
};

#endif // facade_H
