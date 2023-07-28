#include<iostream>
// we should calculate the limits of x y z so that that the sum a*x + b*y + z*c doesnt exeed d
int main()
{
   int a,b ,c ,d;
   std :: cin >> a >> b >> c >> d;

    for (int x = 0; x <= d/a ; x++)
    {
        for (int y = 0; y <= (d - a*x)/b ; y++)
        {
            for (int z = 0; z <= (d - a*x - b*y)/c ; z++)
            {
                if (a*x + b*y + c*z == d)
                {
                    std :: cout << x << " "  << y << " " << z << std :: endl;
                }
            }
        }
    }

    return 0;
}