#include<iostream>

int main()
{
    int count = 0;
    int sum = 0;
    int product = 1;
    int smallest = INT_MAX;
    
    while(count < 5)
    {
        int num;
        std :: cin >> num;

        if (num > 0)
        {
            count ++;
        }


        sum+=num;
        product*=num;
        if (num < smallest)
        {
            smallest = num;
        }
    }

    std :: cout << "min = " << smallest << std :: endl;
    std :: cout << "sum = " << sum << std :: endl;
    std :: cout << "product = " << product << std :: endl;
    return 0;
}