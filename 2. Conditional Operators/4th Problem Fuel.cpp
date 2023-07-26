#include<iostream>

int main()
{
    double km, fuel, price, budget;
    std :: cin >> km >> fuel >> price>>budget;

    double moneyNeeded = (km/100)*fuel*price;
    if(budget >= moneyNeeded)
        std :: cout << "Yes" << std :: endl;
    else
    {
        std::cout << "No" << std::endl;
        std::cout << (double)((budget / fuel )/ price) * 100 << std::endl;
    }


    return 0;
}