#include<iostream>
int main()
{
    char smallLetter ;
    std :: cin  >> smallLetter ;
    int positionEngAlphabet = (int)(1+smallLetter-'a');

    std :: cout << "The position of the letter in th English alphabet is: " << positionEngAlphabet << std :: endl;



    return 0;
}