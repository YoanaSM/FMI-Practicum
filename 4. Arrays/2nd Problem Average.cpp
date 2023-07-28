#include<iostream>
// average of numbers
int main()
{
    const int MAX_SIZE = 20;
    int array[MAX_SIZE];

    int n;
    std :: cin >> n;

    int sum = 0;

    for (int i = 0; i < n; ++i)
    {
        std :: cin >> array[i];
        sum += array[i];
    }

    int average = sum /n;
    for (int i = 0; i < n ; ++i)
    {
        if (array[i] > average)
        {
            std :: cout << array[i] << std :: endl;
        }
    }


    return 0;
}


