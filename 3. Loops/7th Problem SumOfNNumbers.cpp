#include<iostream>


int main()
{
   int n;
   std :: cin >> n;

   int sum = 0;
   int biggest  = INT_MIN;
   int number;
    for (int i = 1; i <= n ; i++)
    {
        std :: cin >> number;
        if (number > biggest)
        {
            biggest = number;
        }
        sum += number;
    }

    std :: cout << "Max: " << biggest << std :: endl;
    std :: cout << "Sum: " << sum << std :: endl;

    return 0;
}