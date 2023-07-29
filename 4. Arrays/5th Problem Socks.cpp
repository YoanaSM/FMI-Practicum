#include<iostream>

const int MAX_SIZE = 2000;
int main()
{

   int N;
   std :: cin >> N;

   int array[MAX_SIZE];
   int count[MAX_SIZE] = {0};// array for the number of the same socks founded

    for (int i = 0; i < N ; i++)
    {
        std :: cin >> array[i];//input of the elements
        count[array[i]]++;
    }

    for (int i = 0; i < MAX_SIZE; i++)
    {
        if (count[i]% 2 == 1)
            std :: cout << i << " ";

    }
    
    return 0;
}