#include<iostream>
#include<cassert>
int myPow( const int num, const unsigned N)
{
    int result = 1;
    for (int i = 0; i < N; i++)
    {
       result *= num;
    }
    return result;
}
int main()
{
    int n, N;
    std :: cin >> n >> N;
    assert(N > 0);

    std :: cout << " The number " << n << " raised to the power of " << N << " is: " << myPow(n,N) << std :: endl;

    return 0;
}