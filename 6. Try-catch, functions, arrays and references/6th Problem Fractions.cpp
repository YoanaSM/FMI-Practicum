#include<iostream>
const int my_exc = 0;

void addFrac(int a, int b, int c, int d, int & e, int &f)
{
    if (b == 0 || d == 0 )
throw my_exc;

    e = a*d + c*b;
    f = b*d;
}


int main()
{
    int a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d;

    addFrac(a,b,c,d,e,f);
    std::cout << e/f << std :: endl;




    return 0;
}