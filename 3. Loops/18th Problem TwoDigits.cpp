#include<iostream>
int main()
{


    for (int i = 100; i <= 999 ; i++)
    {
        int cnt = 0;

        int lastDigit = i%10;
        int secDigit = (i/10) % 10;
        int firstDigit = (i/100) % 10;

        int sum = lastDigit + secDigit + firstDigit;

        while(sum > 0)
        {
            sum/=10;
            cnt++;
        }
        if (cnt == 2)
        {
            std :: cout << i << std :: endl;
        }
    }

    return 0;
}