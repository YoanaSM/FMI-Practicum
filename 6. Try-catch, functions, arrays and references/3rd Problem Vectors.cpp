#include<iostream>
const int MAX_SIZE = 1000;
const int my_exc = 0;

void inputArr(int array[],int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

void merge(int arr1[], int arr2[], int size1)

{
    for (int i = 0; i < size1 ; ++i)
    {
       arr1[i]+=arr2[i];
    }
}
void printArr(int array[],int size)
{
    for (int i = 0; i < size ; i++) {

        std::cout << array[i] << " ";
    }
}
int main()
{
    int arr1[MAX_SIZE];
    int size1;
    std::cin>> size1;
    inputArr(arr1,size1);

    int arr2[MAX_SIZE];
    int size2;
    std::cin>>size2;
    inputArr(arr2,size2);

    if (size1 != size2)
    throw my_exc;

    merge(arr1,arr2,size1);
    printArr(arr1,size1);

    return 0;
}