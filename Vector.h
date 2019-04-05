//
// Created by rudri on 3/29/2019.
//

#ifndef VECTOR_H_
#define VECTOR_H_

namespace UTEC{
class vector {
    int* _arr = nullptr;
    int _size;

public:
    vector();
    ~vector();
    void push_back(const int& value);
    void pop_back();
    void insert(int pos, const int& value);
    int get_item(int i);
    int size();
};
}

#endif		// VECTOR_H_
