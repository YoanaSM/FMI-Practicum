#include<iostream>
#include<cassert>

int main()
{
    int n;
    std :: cin >> n;
    assert(n > 0);
    int lastNum;
    std :: cin >> lastNum;


    int maxLen = 0;
    int currLen = 0;
    int maxSum = lastNum;
    int input;

    for (int i = 1; i < n ; i++)
    {
        std :: cin >> input;
        if (lastNum == input)
        {
            currLen++;
            if (currLen > maxLen)
            {
                maxLen = currLen;
                maxSum = input * currLen;
            }
            else
            {
                currLen = 0;
            }
        }
    }

   std :: cout << maxSum << std :: endl;
    
}