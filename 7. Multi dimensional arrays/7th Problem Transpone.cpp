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
void transpone(int matrix[][MAX_SIZE], int size)
{
    for (int i = 0; i < size ; i++) {
        for (int j = i; j < size ; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}
void printMatrix(int matrix[][MAX_SIZE], int size)
{
    for (int i = 0; i < size ; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            std :: cout << matrix[i][j] << " ";
        }
        std :: cout << std :: endl;
    }
}
int main()
{
   int N;
   std :: cin >> N;

   int matrix[MAX_SIZE][MAX_SIZE];
   inputMatrix(matrix, N);
   transpone(matrix,N);
   printMatrix(matrix,N);


    return 0;
}