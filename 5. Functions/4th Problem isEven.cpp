#include<iostream>

bool isEven(const int num)
{
    if (num % 2 == 0)
        return true;
    else
        return false;
}

int main()
{
    int number;
    std :: cin >> number;
    std :: cout << "The number is even: " << std :: boolalpha << isEven(number) << std :: endl;

    return 0;
}