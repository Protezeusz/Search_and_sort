#include "linear_search.h"

Linear_search::Linear_search(int *x,  int a)
{
    tab = x;
    H = a;
    i = -1;
}

void Linear_search::del()
{
    delete [] tab;
}

int Linear_search::search(int x)
{
    i = -1;
    auto start_time =std::chrono::steady_clock::now();

    for(int j = 0; j < H; j++)
    {
        if(tab[j] == x)
        {
            i = j;
            break;
        }
    }

    auto end_time = std::chrono::steady_clock::now();
    op_time = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count();

    return i;
}

long double Linear_search::get_time()
{
    return op_time;
}
