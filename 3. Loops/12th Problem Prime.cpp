#include<iostream>
#include<cmath>

int main()
{
  int n;
  std :: cin >> n;

  bool isPrime = true;

    if (n == 1)
    {
        isPrime = false;
        std :: cout << "The divisor is only 1" << std :: endl;
    }
    else {

        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            std::cout << "yes" << std::endl;
        } else
        {
            for (int i = 1; i <= n; i++)
            {
                if (n % i == 0)
                    std::cout << i << " ";
            }
            std :: cout << std :: endl;
        }
    }
    return 0;
}