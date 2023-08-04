#include<iostream>
const int MAX_SIZE = 100;



void inputMatrix(int matrix[][MAX_SIZE], int side)
{
    for (int i = 0; i < side; ++i)
    {
        for (int j = 0; j < side; ++j)
        {
            std :: cin >> matrix[i][j];
        }
    }
}

bool isMagicSquare(int side, int matrix[][MAX_SIZE])
{
    int sum = 0;
    for (int j = 0; j < side; j++)
    {
        sum+= matrix[0][j];
    }



    for (int i = 1; i < side; i++)
    {
        int sumRows = 0;
        for (int j = 0; j < side ; j++)
        {
            sumRows += matrix[i][j];
        }
        if(sum!=sumRows)
            return false;
    }

    for (int i = 0; i < side; i++)
    {   int sumCols = 0;
        for (int j = 0; j < side; j++)
        {
            sumCols += matrix[j][i];
        }
        if (sumCols != sum)
        {
            return false;
        }
    }

    return true;
}

int main()
{

    int side;
    std::cin >> side;

    int matrix[MAX_SIZE][MAX_SIZE];
    inputMatrix(matrix,side);
    std :: cout << (isMagicSquare(side,matrix) ? "Magic" : "Normal") << std :: endl;


    return 0;
}