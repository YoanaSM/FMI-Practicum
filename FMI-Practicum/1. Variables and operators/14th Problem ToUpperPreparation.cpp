#include<iostream>
int main ()
{
    char letter;
    std :: cin >> letter;

    int asciiValue = static_cast<int>(letter);
    std :: cout << "The ASCII value of the letter is: " << asciiValue << std :: endl;
    // also int value = (int)letter;
    return 0;
}
