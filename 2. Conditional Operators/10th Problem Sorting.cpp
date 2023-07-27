#include<iostream>
//biggest num from three digits
int main()
{
    int a, b, c, temp = 0;
    std :: cin >> a >> b >> c;

    if (a < b)
    {
         temp = a;
        a = b;
        b = temp;
    }
    if (a < c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c)
    {
        temp = b;
        b = c;
        c = temp;
    }


    std :: cout << a << b << c << std :: endl;


    return 0;
}