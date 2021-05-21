//
//  IBike.h
//  AbstractFactory
//
//  Created by lingowu on 2021/5/12.
//

#ifndef IBike_h
#define IBike_h

#include <string>

using namespace std;

// 自行车接口
class IBike {
public:
    virtual ~IBike() {}
    virtual string Name() = 0;  // 自行车名称
};

// 奔驰
class BenzBike : public IBike {
public:
    string Name() {
        return "Benz Bike";
    }
};

// 宝马
class BmwBike : public IBike {
public:
    string Name() {
        return "Bmw Bike";
    }
};

// 奥迪
class AudiBike : public IBike {
public:
    string Name() {
        return "Audi Bike";
    }
};

#endif /* IBike_h */
