//
//  product.h
//  Builder
//
//  Created by lingowu on 2021/5/12.
//

#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

using namespace std;

// 电脑
class Computer {
public:
    void SetCpu(string cpu) { m_strCpu = cpu;}
    void SetMainboard(string mainboard) { m_strMainboard = mainboard; }
    void SetRam(string ram) { m_strRam = ram; }
    void SetVideoCard(string videoCard) { m_strVideoCard = videoCard; }

    void show() {
        cout << "CPU: " << m_strCpu << endl << "Mainboard: " << m_strMainboard << endl << "Ram: " << m_strRam << endl << "VideoCard: " << m_strVideoCard << endl;
    }
private:
    string m_strCpu;  // CPU
    string m_strMainboard;  // 主板
    string m_strRam;  // 内存
    string m_strVideoCard;  // 显卡
};

#endif // PRODUCT_H
