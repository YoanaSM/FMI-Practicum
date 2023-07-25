#include<iostream>
#include<cmath>
//area, perimeter of a square
//perimeter of a circle
// area, perimeter of an equilateral triangle

double areaSquare(double side)
{
    return side*side;
}
double perimeterSquare(double side)
{
    return 4*side;
}
double perimeterCircle(double radius)
{
    double const pi =3.1416;
    return 2*pi*radius;
} double areaTriangle(double side)
{
    return side*side*sqrt(3)/4;
}
double perimeterTriangle(double side)
{
    return 3*side;
}
int main ()
{
    double a;
    std :: cin >> a;

    std :: cout << "The area of the square: " << areaSquare(a) << " " << " The perimeter of the square: " << perimeterSquare(a) << std :: endl;
    std :: cout << "The perimeter of the circle is: " << perimeterCircle(a) << std :: endl;
    std :: cout << "The area of the triangle: " << areaTriangle(a) << " " << " The perimeter of the triangle: " << perimeterTriangle(a) << std :: endl;





}