#include<iostream>
int main ()
{
   double km;
   double litres;
   double pricePerLitre;
   std :: cin >> km >> litres >> pricePerLitre;

    double litresNeeded = km*(litres/100);
    double totalPrice = litresNeeded*pricePerLitre;
    std :: cout << "The total money needed are: " << totalPrice << std :: endl;

    return 0;
}