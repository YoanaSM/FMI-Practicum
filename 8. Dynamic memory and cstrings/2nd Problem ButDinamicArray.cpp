#include<iostream>
double average(int** matrix, int M, int N)
{
    double sum = 0;
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum/(M*N);
}

void replace(int **matrix, int M, int N)
{
    double avrg = average(matrix,M,N);
    for (int i = 0; i < M ; ++i)
    {
        for (int j = 0; j <N ; ++j)
        {
            if (matrix[i][j] <= avrg)
            {
                matrix[i][j] = 0;
            }
            else
            {
                matrix[i][j] = 1;
            }
        }
    }
}
void order(int **matrix, int M, int N)
{
    int zeroCount = 0;
    for (int i = 0; i < M; ++i) {

        for (int j = 0; j < N; ++j) {
            if (matrix[i][j] == 0)
                zeroCount++;
        }
        
        int nonZeroIndex = 0;
        for (int j = 0; j < N; ++j) {
            if (matrix[i][j] != 0) {
                matrix[i][nonZeroIndex] = matrix[i][j];
                nonZeroIndex++;
            }
        }
        for (int j = nonZeroIndex; j < N; ++j)
        {
            matrix[i][j] = 0;
        }
    }
}
void printMatrix(int **matrix, int M, int N)
{
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            std :: cout << matrix[i][j] << " ";
        }
        std :: cout << std :: endl;
    }
}

int main()
{

   int M, N;
   std :: cin >> M >> N;

   int** matrix = new int*[M];

    for (int i = 0; i < M; ++i)
    {

        matrix[i] = new int[N];
        for (int j = 0; j < N; ++j)
        {
            std :: cin >> matrix[i][j];
        }
    }

    replace(matrix,M,N);
    order(matrix,M,N);
    printMatrix(matrix,M,N);


    for (int i = 0; i < M; i++)
        delete[] matrix[i];

    delete[] matrix;

    return 0;
}