#include<iostream>
int main()
{
    int numerator, denominator;
    std :: cin >> numerator >> denominator;

    std :: cout << numerator/denominator << "+" << (numerator % denominator )<< "/" << denominator << std :: endl; // as a mixed fraction
    std :: cout << (double)numerator/denominator << std :: endl;// as a decimal fraction


    return 0;
}