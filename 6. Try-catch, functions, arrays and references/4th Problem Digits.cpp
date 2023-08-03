#include<iostream>
const int MAX_SIZE = 1024;
const int my_exc = 0;

int getDigits(int size, int array[],int N)
{
    if (N < 0 || size < 0)
        throw my_exc;

    int digitAmount = 0,digit;
    do
    {
        if (digitAmount == size)
            throw my_exc;

        digit = N % 10;
        array[digitAmount] = digit;
        digitAmount++;
        N /= 10;

    }
    while (N > 0);
    return digitAmount;
}
void printArray(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i > 0)
            std::cout << " ";
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

int main()
{
    int n;
    std::cin >> n;

    int size;
    std::cin >> size;

    int array[MAX_SIZE] ={0};
    getDigits(size,array,n);
    printArray(array, size);
    return 0;
}