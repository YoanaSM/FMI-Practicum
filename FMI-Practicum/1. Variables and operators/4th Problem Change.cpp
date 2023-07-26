#include<iostream>

int main()
{
    const double EUR = 1.95;
    const double TKL = 0.11;
    const double JPY = 0.014;

   double euro, lira, yen;
   std :: cin >> euro >> lira >> yen;

   std :: cout << "Euro to lev: " << euro * EUR<< std :: endl;
   std :: cout << "Lira to lev: " << lira * TKL << std :: endl;
   std :: cout << "Yen to lev: " << yen * JPY << std :: endl;


    return 0;
}
