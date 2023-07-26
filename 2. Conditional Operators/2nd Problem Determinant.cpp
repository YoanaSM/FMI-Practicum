#include<iostream>
int main ()
{
   int a, b, c;
   std :: cin >> a >> b >> c;
   int  determinant = b*b - 4*a*c;
   bool twoRoots = (determinant>0);
   std :: cout << "The equation has two real different roots: " << std :: boolalpha << twoRoots << std :: endl;

    return 0;
}
