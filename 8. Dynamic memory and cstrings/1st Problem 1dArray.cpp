#include<iostream>
#include<cassert>

int findPairs(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i+1] - arr[i] <= 1 && arr[i+1] - arr[i] >= -1)
            count++;
        // the difference to not be more than 1
    }
    return count;
}



int main()
{
    int n;
    std :: cin >> n;
    assert(n >= 0);

    int *input = new int[n];
    for (int i = 0; i < n ; ++i)
    {
        std :: cin >> input[i];
    }

    std :: cout << findPairs(input, n) << std :: endl;

    delete[] input;

    return 0;
}