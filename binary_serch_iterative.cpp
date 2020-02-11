#include "binary_serch_iterative.h"


Binary_serch_iterative::Binary_serch_iterative(int * x)
{
    tab = x;
}

void Binary_serch_iterative::del()
{
    delete [] tab;
}

int Binary_serch_iterative::serch(int x)
{
    l = 0;
    h = 999;
    mid = (l + h) / 2;

    auto start_time =std::chrono::steady_clock::now();

    while ((x != tab[mid]) && (l < h)) {
        if(x < tab[mid])
            h = mid - 1;
        if(x > tab[mid])
            l = mid + 1;
            mid = (l + h) / 2;
    }

    auto end_time = std::chrono::steady_clock::now();
    op_time = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count();

    if(x == tab[mid])
        i = mid;
    else
        i = -1;
    return i;
}

long double Binary_serch_iterative::get_time()
{
    return op_time;
}
