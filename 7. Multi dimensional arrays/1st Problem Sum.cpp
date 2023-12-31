#include<iostream>
constexpr int N = 6;

int main()
{
    int input[N][N] = {
            {11, 12, 13, 14, 15, 16},
            {21, 22, 23, 24, 25, 26},
            {31, 32, 33, 34, 35, 36},
            {41, 42, 43, 44, 45, 46},
            {51, 52, 53, 54, 55, 56},
            {61, 62, 63, 64, 65, 66}
    };

    int sum = 0;
    int rowSum = 0;

    for (int i = 0; i < N ; i += 2)
    {
        for (int j = 0; j < N; j++)
        {
            rowSum += input[j][i];//j is for the row and it is changing from 0 to 5
        }

        std::cout << "Column " << i + 1 << "sum is: " << rowSum << std :: endl;
        sum+=rowSum;
        rowSum = 0;
    }

    std::cout << "The total sum is: " << sum << std:: endl;

    return 0;
}