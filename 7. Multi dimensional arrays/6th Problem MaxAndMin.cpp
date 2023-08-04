#include <iostream>
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
  int N;
  std :: cin >> N;

  int matrix[MAX_SIZE][MAX_SIZE];
  inputMatrix(matrix,N);

  int minCol[MAX_SIZE];
  int maxRow[MAX_SIZE];

    for (std::size_t p = 0; p < N; p++)
    {
        maxRow[p] = matrix[p][0];
        minCol[p] = matrix[0][p];
    }

    for (int i = 0; i < N ; i++)
    {
        for (int j = 0; j < N ; ++j)
        {
            if (maxRow[i] < matrix[i][j])
                maxRow[i] = matrix[i][j];
            if (minCol[j] > matrix[i][j])
                minCol[j] = matrix[i][j];
        }
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N ; ++j)
        {
            if (matrix[i][j] == minCol[j] && matrix[i][j] = maxRow[i])
            {
                std :: cout << maxRow << " " << minCol << std :: endl;
            }
        }
    }

    return 0;
}