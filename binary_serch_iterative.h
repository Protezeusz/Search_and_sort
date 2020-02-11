#ifndef BINARY_SERCH_ITERATIVE_H
#define BINARY_SERCH_ITERATIVE_H
#include <iostream>
#include <chrono>


class Binary_serch_iterative
{
private:
    int * tab;
    int l, h, mid, i;
    long double op_time = 0;

public:
    Binary_serch_iterative(int * x);
    void del();
    int serch(int x);

    long double get_time();
};

#endif // BINARY_SERCH_ITERATIVE_H
