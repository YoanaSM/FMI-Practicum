#include<iostream>
const int MAX_SIZE = 100;
int average(int matrix[][MAX_SIZE], int M, int N)
{
    int sum = 0;
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum/(M*N);
}

void replace(int matrix[][MAX_SIZE], int M, int N)
{
    int avrg = average(matrix,M,N);
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
void order(int matrix[][MAX_SIZE], int M, int N)
{
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N ; ++j)
        {
            if (matrix[i][j] == 0)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][j - 1];
                matrix[i][j-1] = temp;
            }
        }
    }
}
void printMatrix(int matrix[][MAX_SIZE], int M, int N)
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

int main(){

int m, n;
std :: cin >> m >> n;
int matrix[MAX_SIZE][MAX_SIZE];


    for (int i = 0; i < m ; ++i)
    {
        for (int j = 0; j < n ; ++j)
        {
            std :: cin >> matrix[i][j];
        }
    }

average(matrix, m, n);
replace(matrix, m,n);
order(matrix,m,n);
printMatrix(matrix,m,n);

    return 0;
}