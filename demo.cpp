//
// Created by wbc on 2020/11/18.
//
#include<iostream>
#include <thread>
#include <vector>
#include <numeric>

class A {
public:
    int const v = 5;

    A() = default;

    A(int v) : v{v} {
    }
};

int main() {
    A a();
    std::cout << a.v << std::endl;
}
