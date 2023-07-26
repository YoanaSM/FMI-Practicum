#include<iostream>
int main()
{
  int numerator1, denominator1;
  std :: cin >> numerator1 >> denominator1;
  int numerator2, denominator2;
  std :: cin >> numerator2 >> denominator2 ;

  double firstFrac = (double)numerator1/denominator1 ;
  double secondFrac =(double)numerator2/denominator2;

  double sum = firstFrac+secondFrac;
  std :: cout << "The sum is: " << sum << std :: endl;


    return 0;
}