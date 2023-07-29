#include<iostream>
int sumInInterval(int min, int max)
{
    int sum = 0;
    for (int i = min; i <= max; ++i)
    {
        sum+= i;
    }
    return sum;

}



int main()
{
   int m, n;
   std :: cin >> m >> n;
   std :: cout << "The sum is: " << sumInInterval(m,n) << std :: endl;





    return 0;
}