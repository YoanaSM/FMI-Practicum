#include<iostream>
int main()
{
   int minutes;
   std :: cin >> minutes;

   int hours = minutes/60;
   int min = minutes%60;
   std :: cout << "hours: " << hours << std :: endl;
   std :: cout << "minutes: " << min << std :: endl;

    return 0;
}