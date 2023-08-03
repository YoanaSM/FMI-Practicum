#include<iostream>
const int MAX_SIZE = 1024;

void inputArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cin>>array[i];
    }
}

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
void printArray(int array[], int size)
{
    for (int i = 0; i < size ; ++i)
    {
        std :: cout << array[i] << " ";
    }
}
int main()
{
    int size;
    std::cin >> size;

    int array[MAX_SIZE];

    inputArray(array, size);
    bubbleSort(array, size);
    printArray(array, size);
    

    return 0;
}