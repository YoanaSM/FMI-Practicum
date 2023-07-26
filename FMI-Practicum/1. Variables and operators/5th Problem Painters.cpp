#include<iostream>
#include <cmath>
int main()
{
   double l, h, m;
   std :: cin >> l >> h >> m;

   double area = l*h;
   int neededBoxes = ceil(area/m);
   std :: cout << "The boxes needed to paint the wall are : " << neededBoxes << std :: endl;

    return 0;
}
/*The same can be done with the following
 * bool hasRemainder = (area%m == 0);
 * if there is a remainder the buckets should be one more
 * the total quantity needed = area/m + hasRemainder