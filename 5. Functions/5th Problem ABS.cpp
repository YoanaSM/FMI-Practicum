#include<iostream>

int myAbs(const int num)
{
    if (num < 0 )
        return (num*-1);
    else
        return num;
}

int main()
{

    int number;
    std :: cin >> number;
    std :: cout << "The abs value of the num is: " << myAbs(number) << std :: endl;

    return 0;
}