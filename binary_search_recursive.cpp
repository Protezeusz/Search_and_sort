#include "binary_search_recursive.h"

Binary_search_recursive::Binary_search_recursive(int * x, int a)
{
    tab = x;
    L = 0;
    H = a;
}

void Binary_search_recursive::del()
{
    delete [] tab;
}

int Binary_search_recursive::search(int x)
{

    auto start_time = std::chrono::steady_clock::now();
    i = solve(x,L,H);
    auto end_time = std::chrono::steady_clock::now();
    op_time = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count();

    return i;
}

long double Binary_search_recursive::get_time()
{
    return op_time;
}

int Binary_search_recursive::solve(int x, int l, int h)
{
    if(l==h)
    {
        if(tab[l]==x)
            return l;
        else
            return -1;
    }
    else
    {   int mid = (h+l)/2;
        if(tab[mid] == x)
            return mid;
        if(tab[mid] > x)
            return solve(x, l, mid-1);
        else
            return solve(x, mid+1, h);

    }
}
