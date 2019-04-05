//
// Created by rudri on 3/29/2019.
//

#include "Vector.h"

namespace UTEC {
    void vector::push_back(const int &value) {
        int new_size = _size + 1;
        int* new_arr = new int[new_size];

        for (int i = 0; i < new_size; ++i)
        {
            new_arr[i] = _arr[i];
        }

        new_arr[_size] = value;
        delete[] _arr;
        _arr = new_arr;
        _size = new_size;
    }

    void vector::pop_back() {
        int new_size = _size - 1;
        int* new_arr = new int[new_size];

        for (int i = 0; i < new_size; ++i)
        {
            new_arr[i] = _arr[i];
        }

        delete[] _arr;
        _arr = new_arr;
        _size = new_size;
    }

    void vector::insert(int pos, const int& value){
        push_back(0);

        for (int i = _size - 1; i > pos; --i)
        {
            _arr[i] = _arr[i - 1];
        }

        _arr[pos] = value;
    }

    vector::vector() : _arr{new int[0]}, _size(0) {}
    vector::~vector() {
        delete[] _arr;
    }

    int vector::size() {return _size;}

    int vector::get_item(int i) {return _arr[i];}
}