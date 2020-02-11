#include "binary_search_iterative.h"


Binary_search_iterative::Binary_search_iterative(int * x, int a)
{
    tab = x;
    L = 0;
    H = a;
}

void Binary_search_iterative::del()
{
    delete [] tab;
}

int Binary_search_iterative::search(int x)
{
    int l = L;
    int h = H;
    int mid = (l + h) / 2;

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

long double Binary_search_iterative::get_time()
{
    return op_time;
}
