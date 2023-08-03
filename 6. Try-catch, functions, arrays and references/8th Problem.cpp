#include<iostream>
#include<climits>

const int MAX_SIZE = 1024;
//const int my_exc = 0;

void inputArr(int array[], int size)
{
    for (int i = 0; i < size ; ++i)
    {
        std:: cin >> array[i];
    }
}

int maxSum(int array[], int size, int seq, int& startIndex ){// to get the index of the 1st element of the seq we put it in the function with a reference

    int i = 0;
    int count = 0;
    int sum = 0;
    int maxSum = INT_MIN;
    startIndex = 0;

    while(i < size)
    {
        sum += array[i];
        count++;

        if (count == seq) {
            if (sum > maxSum)
            {
                maxSum = sum;
                startIndex = i - seq + 1;
            }

            sum -= array[i - seq + 1];
            count--;
        }
        i++;
    }
 return maxSum;
}

int main()
{
   int n,k;
   std :: cin >> n >> k;

    int array[MAX_SIZE];
    inputArr(array,n);

    int startIndex;
    int maxSumSeq = maxSum(array,n,k,startIndex);

    std :: cout << "The max sum is: " << maxSumSeq << std :: endl;
    std :: cout << "Starting index of the seq is:  " << startIndex << std :: endl;

    return 0;
}