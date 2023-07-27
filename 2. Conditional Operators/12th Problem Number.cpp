#include<iostream>
#include<cmath>

int main()
{
   double num;
   std :: cin >> num;

   bool isInteger = (num == std::floor(num));
    if (isInteger == true)
    {
        int isOdd = (int)num % 2;
        if (isOdd == 0)
        {
            std :: cout << "The number is an even integer." << std :: endl;
        }
        else {
            std::cout << "The number is an odd integer." << std::endl;
        }
    }
    else
    {
        if (num<0)
        {
            std :: cout << "The number is a negative rational." << std :: endl;
        }
        else
        {
            std :: cout << "The number is a positive rational." << std :: endl;
        }
    }
    
    return 0;
}
