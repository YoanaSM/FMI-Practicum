#include<iostream>

int main()
{
    //1st Sum
    int m, n;
    std :: cin >> m >> n;
    int sum = 0;
    for (int i = 0; i <= n ; i++)
    {
        sum += m+i;
    }

    std :: cout << "The sum is: " << sum << std :: endl;

    //2nd Sum
    int secSum = 0;
    for (int i = 1; i <= 10 ; i++)
    {
      secSum += 1/i;
    }
    std :: cout << "The second sum is: " << secSum << std :: endl;
    
    return 0;
}

