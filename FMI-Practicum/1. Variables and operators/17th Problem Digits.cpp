#include<iostream>
// first number = ch1ch2ch3
// second number  = ch3ch2ch1
int main()
{
    char ch1, ch2, ch3;
    std :: cin >> ch1 >> ch2 >> ch3;

    int firstDigit = ch1 - '0';
    int secDigit = ch2 - '0';
    int thirdDigit = ch3 - '0';

    int firstNumber = firstDigit*100 + secDigit*10 + thirdDigit;
    int secondNumber = thirdDigit*100 + secDigit*10 + firstDigit;

    int sum = firstNumber + secondNumber;
    std :: cout << sum << std :: endl;

    return 0;
}