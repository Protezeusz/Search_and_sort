#ifndef BINARY_SEARCH_ITERATIVE_H
#define BINARY_SEARCH_ITERATIVE_H
#include <chrono>


class Binary_search_iterative
{
private:
    int * tab;
    int L, H, i;
    long double op_time = 0;

public:
    Binary_search_iterative(int * x, int a);
    void del();
    int search(int x);

    long double get_time();
};

#endif // BINARY_SEARCH_ITERATIVE_H
