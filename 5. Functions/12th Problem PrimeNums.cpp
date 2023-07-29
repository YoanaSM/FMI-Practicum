#include<iostream>
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i < num; ++i)
        if (num % i == 0)
            return false;
   return true;
}
void primes(int min, int max)
{
    for (int i = min; i <= max ; ++i)
    {
        if (isPrime(i))
            std :: cout << i << std :: endl;

    }
}

int main()
{
   int a, b;
   std :: cin >> a >> b;
   std :: cout << "The prime numbers in the interval are: "; primes(a,b);

    return 0;
}