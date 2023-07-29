#include<iostream>
char capLetter(char letter)
{
    if (letter >= 'a' && letter <= 'z')
        return 'A' - 'a' + letter;
    else
        return letter;
}

int main()
{
    char smallLetter;
    std :: cin >> smallLetter;
    std :: cout << "The capital letter of the gives is: " << capLetter(smallLetter) << std :: endl;

    return 0;
}