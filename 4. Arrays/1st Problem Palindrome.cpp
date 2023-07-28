#include<iostream>
int main()
{
   const int MAX_SIZE = 20;
   char array[MAX_SIZE];

   int n;
   std :: cin >> n;

    for (int i = 0; i < n ; i++)
    {
        std :: cin >> array[i];
    }

    bool isPalindrome = true;

    for (int i = 0; i < n ; i++)
    {
        if (array[i] != array[n - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }

    std :: cout << "The word is a palindrome: " << std :: boolalpha << isPalindrome << std :: endl;

    return 0;
}