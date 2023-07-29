#include<iostream>
int calculate(const int a, const int b, char action)
{
    switch(action)
    {
        case '+':
        {
            return a+b;
            break;
        }
        case '-':
        {
            return a-b;
            break;
        }
        case '*':
        {
            return a*b;
            break;
        }
        case '/':
        {
            return a/b;
            break;
        }
        case '%':
        {
            return a%b;
            break;
        }
         default:
        {
            return a+b;
            break;
        }
    }

}
int main()
{
  int a, b ;
  std :: cin >> a >> b;
  char operation ;
  std:: cin >> operation;
  std :: cout << "The result is: " << calculate(a,b,operation)  << std :: endl;

  return 0;
}