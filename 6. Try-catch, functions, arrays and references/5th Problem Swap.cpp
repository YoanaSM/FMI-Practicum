#include<iostream>
void mySwap(int& num1,int&  num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}


int main()
{
    int a,b;
    std::cin >> a >> b;
    mySwap(a,b);
    std::cout << a << " "  << b;

    return 0;
}