#include<iostream>
const int MAX_SIZE = 100;

int main()
{
   int k;
   std :: cin >> k;

   int arr1[MAX_SIZE];
   int arr2[MAX_SIZE];
   int count = 0;

    for (int i = 0; i < k ; ++i)
        std :: cin >> arr1[i];
    for (int j = 0; j < k ; j++)
        std :: cin >> arr2[j];


    for (int i = 0; i < k ; ++i)
    {
        for (int j = 0; j < k; ++j)
        {
            if (arr1[i] == arr2[j]) {
                count++;
                break;
            }
        }
    }

    /*
     * int i = 0;int j = 0;
     * while(i < k && j < k)
     * { if(arr1[i] == arr2[j])
     *   { count++;
     *     j++;
     *     i++;
     *    }
     * else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
     */

    std :: cout << count << std :: endl;
    return 0;
}