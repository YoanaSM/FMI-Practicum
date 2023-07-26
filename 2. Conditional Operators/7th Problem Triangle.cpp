#include<iostream>
// can a triangle be formed and if yes what type it is
int main()
{
   int a, b, c;
   std ::cin >> a >> b >> c;
   int hypotenuse = a;
   int side1 = b;
   int side2 = c;
    if (b>hypotenuse)
    {
        hypotenuse = b;
        side1 =a; side2 = c;
        if (c>hypotenuse)
        {
            hypotenuse = c; side1 =a; side2 = b;
        }
    }
    else if (c>hypotenuse)
    {
        hypotenuse = c; side1 = a; side2 = b;
        if (b>hypotenuse)
        {
        hypotenuse = b; side1 =a; side2 = c;
        }
    }

    if (hypotenuse < side1 + side2)
    {
        std :: cout << "Yes. It can be formed." << std :: endl;
        if (hypotenuse*hypotenuse == side1*side1 + side2*side2)
            std :: cout << "It is right." << std :: endl;
        else if (hypotenuse*hypotenuse > side1*side1 + side2*side2)
            std :: cout << "It is obtuse" << std :: endl;
        else
            std :: cout << "It is acute" << std :: endl;
    }
    else
        std :: cout << "No. It can't be formed." << std :: endl;




    return 0;
}