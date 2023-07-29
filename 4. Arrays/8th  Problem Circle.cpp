#include<iostream>
const int MAX_SIZE = 20;

int main()
{
    int N;
    std :: cin >> N;
    int K;
    std :: cin >> K;

    int array[MAX_SIZE];

    for (int i = 0; i < N ; ++i)
    {
        std :: cin >> array[i];
    }

    int counter = 0;

    for (int i = 0; counter < N; i+=K) //counter < n so that all nums can be printed
    {
        std :: cout << array[i % N] << " ";
        counter++;
    }


    return 0;
}
