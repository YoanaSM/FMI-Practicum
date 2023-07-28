#include<iostream>
// from p to r to be divisible by q
// p = 1 r = 100 q = 5
int main()
{
    for (int i = 1; i <= 100 ; i++)
    {
        if (i % 5 == 0)
        {
            std :: cout << i << " ";
        }
    }
    
    return 0;
}
