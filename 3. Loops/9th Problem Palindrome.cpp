#include<iostream>

int main()
{
    int number;
    std :: cin >> number;

    int rev = 0;
    int originalNum = number;

    while(number > 0)
    {
        int remainder = number % 10;
        rev = rev*10 + remainder;
        number/=10;
    }
    if (rev == originalNum)
    {
      std :: cout << "The number is a palindrome." << std :: endl;
    }
    else
        std :: cout << "The num is not a palindrome" << std :: endl;

    return 0;
}


