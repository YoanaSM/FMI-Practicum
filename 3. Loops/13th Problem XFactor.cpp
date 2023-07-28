#include<iostream>
#include<cassert>
#include<iomanip>
#include<cmath>
int main()
{
    int n;
    std :: cin >> n;
    assert(n >= 3);

    int number;
    int highest = INT_MIN;
    int lowest = INT_MAX;
    int  sum = 0;

    for (int i = 1; i <= n ; i++)
    {
        std :: cin >> number;
        if (number >= highest)
        {
            highest = number;
        }
        if (number <= lowest)
        {
            lowest = number;
        }
        sum+=number;
    }

    sum = sum -(highest + lowest);
    double average = (double)sum/(n-2);
    average = std :: floor(average*100)/100.0;
    std :: cout <<std :: fixed << std :: setprecision(2) <<average<< std :: endl;

    return 0;
}

