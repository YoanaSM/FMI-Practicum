#include<iostream>
const int MAX_SIZE = 1024;

void inputArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}
void selectionSort(int array[], int size)
{
    for (int i = 0; i < size -1; ++i)
    {
        int min = i;
        for (int j = i+1; j < size ; ++j)
        {
            if (array[min] > array[j])
            {
                min = j;
            }
        }
        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}


void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std :: cout << array[i] << " ";
    }
}



int main()
{
   int size;
   std :: cin >> size;

   int array[MAX_SIZE];
   inputArray(array,size);
   selectionSort(array,size);
   printArray(array,size);


    return 0;
}
