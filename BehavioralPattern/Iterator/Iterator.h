//
//  Iterator.h
//  Iterator
//
//  Created by lingowu on 2021/5/14.
//

#ifndef ITERATOR_H
#define ITERATOR_H

#include <vector>
#include <string>

using namespace std;

class Iterator {
public:
    bool hasNext();
    string next();
};

class MyVector : public Iterator{
private:
    int index = 0;
    vector<string> arr;
public:
    MyVector(vector<string> &a): arr(a) {}
    bool hasNext() {
        return index < arr.size();
    }
    string next() {
        if (index >= arr.size()) {
            return "";
        }
        return arr[index++];
    }
};

#endif // ITERATOR_H
