#include<iostream>
const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void inputMatrix(int matrix[][MAX_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std :: cin >> matrix[i][j];
        }
    }
}

int sumPositiveDiag(int matrix[][MAX_COLS], int rows, int cols)
{
    int sum = 0;

    for (int i = 0; i < rows; ++i)
    {
        if (matrix[i][i] >= 0)
        {
            sum += matrix[i][i];
        }
    }
    return sum;
}

int main()
{
   int rows;
   std :: cin >> rows;
   int cols;
   std :: cin >> cols;

   int matrix[MAX_ROWS][MAX_COLS];
   inputMatrix(matrix,rows,cols);
   int sumOnDiag =  sumPositiveDiag(matrix,rows,cols);
   std :: cout << "The sum of the positive elements on the diagonal is: " << sumOnDiag << std:: endl;

    return 0;
}