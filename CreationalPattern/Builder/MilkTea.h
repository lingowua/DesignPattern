//
//  MilkTea.h
//  Builder
//
//  Created by lingowu on 2021/5/12.
//

#ifndef MilkTea_h
#define MilkTea_h

#include <string>

using namespace std;

class MilkTea {
private:
    string iType;    // 奶茶类型
    string iSize;    // 大小
    bool iPearl;     // 珍珠
    bool iIce;       // 加冰
public:
    class Builder {
    private:
        string iType = "原味";     // 奶茶类型
        string iSize = "中杯";     // 大小
        bool iPearl = true;       // 珍珠
        bool iIce = false;        // 加冰
    public:
        Builder() {}
        Builder type(string type) { iType = type; return *this;}
        Builder size(string size) { iSize = size; return *this;}
        Builder pearl(bool pearl) { iPearl = pearl; return *this;}
        Builder ice(bool ice) { iIce = ice; return *this;}
        
        string type() { return iType;}
        string size() { return iSize;}
        bool pearl() { return iPearl;}
        bool ice() { return iIce;}
        
        MilkTea build() { return MilkTea(this);}
    };

    void show() {
        string pearl = iPearl ? "加珍珠" : "不加珍珠", ice = iIce ? "加冰" : "不加冰";
        string res =  "一份" + iSize + "、" + pearl + "、" + ice + "的" + iType + "奶茶";
        cout << res << endl;
    }
    MilkTea(Builder *builder) { iType = builder->type(); iSize = builder->size(); iPearl = builder->pearl(); iIce = builder->ice();}
};

#endif /* MilkTea_h */
