#include<iostream>
int factorial(int num)
{
    int product = 1;
    for (int i = num; i > 0 ; i--)
    {
        product *= i;
    }
    return product;
}
int combination(int n, int k)
{
    return factorial(n)/ (factorial(k)*factorial(n-k));
}

int main()
{
   int N, K;
   std :: cin >> N >> K;
   std :: cout << "We can get " << K << " of them by " << combination(N,K) << " ways." << std :: endl;

   return 0;
}
