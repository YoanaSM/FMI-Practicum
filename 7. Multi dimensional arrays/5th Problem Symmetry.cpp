#include<iostream>
const int MAX_SIZE = 100;

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

bool isSymmetric(int matrix[][MAX_SIZE], int size)
{
    for (int i = 0; i < size; ++i)
    {
        if (i == 0)
        {
            continue;
        }
        for (int j = 0; j < size - i; ++j)
        {
            if (matrix[j+i][j] != matrix[j][j+i])
            {
                return false;
            }
        }
    }
    return true;
}


int main()
{
   int N;
   std :: cin >> N;

   int matrix[MAX_SIZE][MAX_SIZE];
   inputMatrix(matrix, N);

   bool isSym = isSymmetric(matrix, N);

    std :: cout << ( isSym  ? "Symmetric" : "Not symmetric")  << std :: endl;
    return 0;
}