#include "linear_search.h"
#include "binary_search_iterative.h"
#include <iostream>

int main()
{
    int * x;
    int a=100000;
    x = new int [a];

    for (int i = 0; i < a; i++)
    {
        x[i]=2*i;
    }

    Linear_search ls = Linear_search(x, a);
    Binary_search_iterative bsi = Binary_search_iterative(x, a);

    int i;
    while (true)
    {
        std::cout << "Find: ";
        std::cin >> i;

        std::cout << "Linear search method: ";
        std::cout << "\nIndex: " << ls.search(i);
        std::cout << "\nTime: "<< ls.get_time() << " ns";

        std::cout << "\nBinary search iterative method: ";
        std::cout << "\nIndex: " << bsi.search(i);
        std::cout << "\nTime: "<< bsi.get_time() << " ns";

        std::cout << "\n\n";

    }

    ls.del();
    bsi.del();
    delete [] x;
    return 0;
}
