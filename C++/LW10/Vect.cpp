#include "Vect.h"
#include <cstdlib>

Vect vect_construct(unsigned int n, int val) {
    Vect vec_obj;
    vec_obj.capacity = n * 2;
    vec_obj.size = n;
    vec_obj.arr = new int[vec_obj.capacity];
    for (size_t i = 0; i < vec_obj.size; ++i) {
        vec_obj.arr[i] = val;
    }
    return vec_obj;
}

unsigned int vect_size(const Vect &v) {
    return v.size;
}

unsigned int vect_capacity(const Vect &v) {
    return v.capacity;
}

bool vect_empty(const Vect &v) {
    if (v.size > 0) {
        return false;
    } else {
        return true;
    }
}

void vect_resize(Vect &v, unsigned int n) {
    v.capacity = n;
    auto *temp = new int[n];
    if (n < v.size) {
        for (size_t i = 0; i < n; ++i) {
            temp[i] = v.arr[i];
        }
        delete[] v.arr;
        v.arr = temp;
        v.size = n;
    } else if (n > v.size) {
        for (size_t i = 0; i < v.size; ++i) {
            temp[i] = v.arr[i];
        }
        for (size_t i = v.size; i < n; ++i) {
            temp[i] = 0;
        }
        delete[] v.arr;
        v.arr = temp;
    }
}

int& vect_at(Vect &v, unsigned int idx) {
    if (idx >= 0 && idx < v.size) {
        return v.arr[idx];
    } else {
        exit(1);
    }
}

void vect_erase(Vect &v, unsigned int idx) {
    if (idx >= 0 && idx < v.size) {
        --v.size;
        for (size_t i = idx; i < v.size; ++i) {
            v.arr[i] = v.arr[i + 1];
        }
    } else {
        exit(1);
    }
}

void vect_push_back(Vect &v, int val) {
    if (v.size >= v.capacity) {
        v.capacity *= 2;
        auto *temp = new int[v.capacity];
        for (size_t i = 0; i < v.size; ++i) {
            temp[i] = v.arr[i];
        }
        delete[] v.arr;
        v.arr = temp;
    }
    v.arr[v.size] = val;
    ++v.size;
}

void vect_insert(Vect &v, unsigned int idx, int val) {
    if (idx >= 0 && idx < v.size) {
        ++v.size;
        if (v.size - 1 >= v.capacity) {
            v.capacity *= 2;
            auto *temp = new int[v.capacity];
            for (size_t i = 0; i < v.size - 1; ++i) {
                temp[i] = v.arr[i];
            }
            delete[] v.arr;
            v.arr = temp;
        }
        for (size_t i = idx + 1; i < v.size; ++i) {
            v.arr[i] = v.arr[i - 1];
        }
        v.arr[idx] = val;
    }
}

void vect_destruct(Vect &v) {
    delete[] v.arr;
    v.arr = nullptr;
    v.size = 0;
    v.capacity = 0;
}

void vect_clear(Vect &v) {
    if (v.size < 20) {
        v.size = 0;
    } if (v.size >= 20) {
        delete[] v.arr;
        v.capacity = 20;
        v.arr = new int[v.capacity];
        v.size = 0;
    }
}