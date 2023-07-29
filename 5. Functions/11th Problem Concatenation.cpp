#include<iostream>
int digitCount(int number)//counts the digits of a number
{
    int count = 0;
    while(number > 0)
    {
        count++;
        number/=10;
    }
    return count;
}
int myPow(int base, int power)
{
    int result = 1;
    for (int i = 1; i <= power; ++i)
    {
        result*= base;
    }

    return result;
}

int myConcatenation(int n1, int n2)
{
    return n1*myPow(10, digitCount(n2)) + n2;
}


int main()
{
   int num1, num2;
   std :: cin >> num1 >> num2;
   std :: cout << "the concatenation of the numbers is: " << myConcatenation(num1,num2) << std :: endl;


    return 0;
}
