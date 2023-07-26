#include<iostream>
// 1 if it is not in the interval
// 0 of it is in the interval
int main()
{
    int a, b, x;
    std :: cin >> a >> b >> x;
     bool isContained = (x > a && x < b);
     std :: cout << isContained << std :: endl;




   return 0;
}