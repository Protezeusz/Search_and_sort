#ifndef LINEAR_SEARCH_H
#define LINEAR_SEARCH_H
#include <chrono>


class Linear_search
{
private:
    int * tab;
    int i, H;
    long double op_time = 0;

public:
    Linear_search(int * x, int a);
    void del();
    int search(int x);

    long double get_time();
};

#endif // LINEAR_SERCH_H
