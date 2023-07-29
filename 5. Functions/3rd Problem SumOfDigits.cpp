#include<iostream>
#include<cassert>
int main()
{
    int n;
    std :: cin >> n;
    assert(n <= 27);

    for (int i = 100; i <= 999; ++i)
    {
        int lastDigit = i%10;
        int secDigit = (i/10)%10;
        int firstDigit = (i/100) % 10;
        if (lastDigit + secDigit + firstDigit == n)
        {
            std :: cout << i << std :: endl;
        }
    }
    return 0;
}
