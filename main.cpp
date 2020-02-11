#include <iostream>
#include <binary_serch_iterative.h>

int main()
{
    int * x;
    x = new int [999];

    for (int i = 0; i < 999; i++)
    {
        x[i]=2*i;
    }

    Binary_serch_iterative bs = Binary_serch_iterative(x);

    int i;
    while (true)
    {
        std::cout << "\n\n";
        std::cin >> i;
        std::cout << "Index: " << bs.serch(i);
        std::cout << "\nTime: "<< bs.get_time() << " ns";

    }

    bs.del();
    delete [] x;
    return 0;
}
