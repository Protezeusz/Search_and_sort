#ifndef BINARY_SERCH_RECURSIVE_H
#define BINARY_SERCH_RECURSIVE_H
#include <chrono>


class Binary_search_recursive
{
private:
    int * tab;
    int L, H, i;
    long double op_time = 0;
    int solve(int x, int l, int h);

public:
    Binary_search_recursive(int * x, int a);
    void del();
    int search(int x);

    long double get_time();
};

#endif // BINARY_SERCH_RECURSIVE_H
