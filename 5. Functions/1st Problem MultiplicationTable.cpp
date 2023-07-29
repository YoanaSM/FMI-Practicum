#include<iostream>
#include<cassert>

int main()
{
    int i = 4, j = 10;
    //std :: cin >> i >> j;
 //   assert( i >= 0 && i <= j && j < 999);

    std :: cout << "| X |   ";
    for (int k = i; k < j ; ++k)
    {
        std :: cout  << k << "|   ";
    }
    std :: cout << std :: endl;

    for (int k = i; k < j; ++k)
    {
        std :: cout << "| " << k << " | ";
        for (int l = i; l < j ; ++l)
        {
            std :: cout << l*k << " | ";
        }
        std :: cout << std :: endl;
    }



    return 0;
}