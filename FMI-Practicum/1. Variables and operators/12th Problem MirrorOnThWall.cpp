#include<iostream>
//the number is with 4 digits
int main()
{
    int number;
    std :: cin >> number;

    int lastDigit = number % 10;
    int thirdDigit = (number/10) % 10;
    int secondDigit = (number/100) % 10;
    int firstDigit = (number/1000) % 10;

    std :: cout << number << std :: endl;
    std :: cout << "The reverse number is: " << lastDigit << thirdDigit << secondDigit << firstDigit << std :: endl;

    return 0;
}