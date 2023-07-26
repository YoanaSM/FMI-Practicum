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

    int sumDigits = lastDigit + thirdDigit + secondDigit + firstDigit;
    int productDigits = lastDigit*thirdDigit*secondDigit*firstDigit;
    double averageDigits = (double)sumDigits/4;
    std :: cout << "sum: " << sumDigits  << "  " << "product: " << productDigits << "  average: " << averageDigits << std :: endl;

    return 0;
}