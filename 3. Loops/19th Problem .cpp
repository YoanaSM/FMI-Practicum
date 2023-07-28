#include<iostream>
#include<cmath>
int main()
{
    int n;
    std :: cin >> n;
    int lastNum ;
    std :: cin >> lastNum;
    int number;
    int totalNum = lastNum*pow(10,n-1);

    for (int i = n-1; i >=1 ; i--)
    {
        std :: cin >> number;
        totalNum += number*pow(10,i - 1);
    }

    int totalSum = totalNum*n;
    std :: cout << "The number we are searching for is: " << totalSum << std :: endl;


    return 0;
}
