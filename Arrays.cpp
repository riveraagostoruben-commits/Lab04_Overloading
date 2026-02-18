//
// Created by ruben on 2/17/2026.
//

#include "Arrays.h"

Arrays::Arrays() {
    size = 10;
    Arr = new int[size];
}

Arrays::Arrays(int sz) {
    size = sz;
    Arr = new int[size];
}

Arrays::Arrays(Arrays& originalArray) {
    size = originalArray.size;
    Arr = new int[size];
    for (int i = 0; i < size; ++i) {
        Arr[i] = originalArray.Arr[i];
    }
}

Arrays::~Arrays() {
    delete[] Arr;
}

void Arrays::printArray() {
    for (int i = 0; i < size; ++i) {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

void Arrays::printArray(int n) {
    if (n > size) n = size;
    for (int i = 0; i < n; ++i) {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

void Arrays::generateArray() {
    for (int i = 0; i < size; ++i) {
        Arr[i] = rand() % 100;
    }
}

int Arrays::getSize() {
    return size;
}

void Arrays::operator+=(const Arrays& B) {
    for (int i = 0; i < size; ++i) {
        Arr[i] += B.Arr[i];

    }

}

void Arrays::operator*=(int val) {
    for (int i = 0; i < size; ++i) {
        Arr[i] *=val;
    }
}

double Arrays::operator*(Arrays& B) {
    double result = 0.0;
        for (int i = 0; i < size; ++i) {
        result += Arr[i] * B.Arr[i];
}
    return result;
}

Arrays* Arrays::operator+(Arrays& B) {
    Arrays* result = new Arrays(size);
 for (int i = 0; i < size; ++i) {
     result->Arr[i] = Arr[i] + B.Arr[i];
 }
    return result;
}

Arrays* Arrays::operator*(int val) {
    Arrays* result = new Arrays(size);
    for (int i = 0; i < size; ++i) {
        result->Arr[i] = Arr[i] * val;
    }
 return result;
}

void Arrays::operator=(const Arrays& B) {
    if (this != &B) {
        if (size != B.size) {
            delete[] Arr;
            size = B.size;
            Arr = new int[size];
        }
        for (int i = 0; i < size; ++i) {
            Arr[i] = B.Arr[i];
        }
    }
}