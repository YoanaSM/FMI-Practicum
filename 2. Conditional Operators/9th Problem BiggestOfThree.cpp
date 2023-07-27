#include<iostream>
int main()
{
    int n1, n2, n3;
    std :: cin >> n1 >> n2 >> n3;

    if (n1>n2)
    {
        if (n1>n3){
            std :: cout << "The biggest is: " << n1;
        }
        else
            std :: cout << "The biggest is: " << n3;
    }
    else
    {
        if (n2>n3)
        {
            std::cout << "The biggest is: " << n2;
        }
        else
            std :: cout << "The biggest is: " << n3;
    }


    return 0;
}