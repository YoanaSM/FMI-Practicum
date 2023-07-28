#include<iostream>
int main()
{
   int n;
   std :: cin >> n;//element on position n

    int first = 0;
    int second = 1;
    int next = n;

    if(n>1)
    {
        for (int i = 2; i <= n; i++)
        {
            next = first + second;
            first = second;
            second = next;
        }
    }
    std :: cout << "Element at position" << n << ": " << next << std :: endl;

    return 0;
}