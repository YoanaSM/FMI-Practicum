#include<iostream>
const int MAX_SIZE = 1024;
void inputArr(int array[] , int size)
{
    for (int i = 0; i < size; ++i)
    {
        std :: cin >> array[i];
    }
}

int getMax(int array[], int size )
{
    int maxNum = 0;
    for (int i = 0; i < size ; ++i)
    {
        if (array[i] > array[maxNum])
        {
            maxNum = i;
        }
    }
    return array[maxNum];
}
int main()
{

    int size;
    std :: cin >> size;

    int array[MAX_SIZE];
    inputArr(array,size);
    int maxElement = getMax(array,size);

   std::cout << maxElement;
    return 0;
}