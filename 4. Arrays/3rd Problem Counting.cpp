#include<iostream>
int main()
{
    const int MAX_SIZE= 20;
    int array[MAX_SIZE];

    int n;
    std :: cin >> n;

    int count[MAX_SIZE] = {0};

    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
        count[array[i]]++;
    }

    for (int i = 0; i < MAX_SIZE; i++)
    {
        if (count[i] > 0)
            std :: cout << i << ": " << count[i] << std :: endl;
    }

    for (int i = 0; i < MAX_SIZE ; i++)
    {
        if (count[i] > 0)
        {
            for (int j = 0; j < count[i]; j++)
            {
                std :: cout << i << " ";
            }
        }
    }
    return 0;
} 