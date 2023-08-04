#include<iostream>
const int MAX_SIZE = 20;
void inputMatrix(int matrix[][MAX_SIZE], int size)
{
    for (int i = 0; i < size ; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            std :: cin >> matrix[i][j];
        }
    }
}

int main(){

int size;
std :: cin >> size;

int matrix[MAX_SIZE][MAX_SIZE];
inputMatrix(matrix,size);

int product = 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != j + 1 && j != i +1)
            {
                product *= matrix[i][j];
            }
        }
    }

    std :: cout << product << std :: endl;

    return 0;
}