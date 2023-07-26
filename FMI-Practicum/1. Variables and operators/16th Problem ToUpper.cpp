#include<iostream>

int main()
{
   char smallLetter;
   std :: cin >> smallLetter;

   char capitalLetter = smallLetter - 32;
   std :: cout << capitalLetter << std :: endl;

   //also
   //int difference = 'A' - 'a';
  // result = char(smallLetter+difference)


    return 0;
}
