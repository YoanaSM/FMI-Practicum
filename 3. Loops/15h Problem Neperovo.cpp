#include<iostream>
#include <iomanip>

int main()
{
    int k;
    std :: cin >> k;
    double sum = 1;
    double fact = 1;

    for (double i = 1; i <= k ; i++)
    {
        fact *= i;
        sum += 1/fact;
    }

   std :: cout << std :: setprecision(10) << std :: fixed << sum << std :: endl;

    return 0;
}