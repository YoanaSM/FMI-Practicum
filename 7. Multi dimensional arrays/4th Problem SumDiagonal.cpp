#include<iostream>
const int MAX_SIZE = 31;
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

int main()
{
  int size;
  std::cin >> size;
  int matrix[MAX_SIZE][MAX_SIZE];
  inputMatrix(matrix,size);

    for (int i = 0; i < size ; ++i)
    {
        int sum1 = 0;
        int sum2 = 0;
        if (i == 0)
        {
            continue;
        }
        for (int j = 0; j < size - i; ++j)
        {
            sum1 += matrix[j+i][j];
            sum2 += matrix[j][j+i];
        }
        std :: cout << sum1 << " " << sum2 ;
    }

    return 0;
}