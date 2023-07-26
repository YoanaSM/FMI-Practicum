#include<iostream>
int main()
{
   double a, b;
   std :: cin >> a >> b;

    if (b == 0 && a == 0)
        std :: cout << "Every x is a solution." << std :: endl;
    else if (a == 0 && b != 0)
        std :: cout << "No solution" << std :: endl;
    else
        std :: cout << "One solution: " << -b/a << std :: endl;

    return 0;
}