#include<iostream>
int main ()
{
    for (int i = 100; i <= 999 ; i++)
    {
        int lastDigit = i%10;
        int secDigit = (i/10)%10;
        int firstDigit = (i/100)%10;
        if (firstDigit+lastDigit == secDigit)
        {
            std :: cout << i << std :: endl;
        }

    }

    return 0;
}