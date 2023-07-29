#include<iostream>

int main()
{
   const int MAX_SIZE = 20;
   int arr1[MAX_SIZE];
   int arr2[MAX_SIZE];

   int n, m;
   std :: cin >> n >> m;


    for (int i = 0; i < n ; ++i)
    {
        std::cin >> arr1[i];
    }

    for (int j = 0; j < m ; ++j)
    {
        std::cin >> arr2[j];
    }

    int intersection[MAX_SIZE];
    int count = 0;

    for (int i = 0; i < n ; i++)
    {
        bool isArr2 = false;

        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                isArr2 = true;
                break;
            }
        }
        if (isArr2)
        {
            intersection[count] = arr1[i];
            count++;
        }

    }
    std :: cout << count << std :: endl;

    for (int i = 0; i < count; i++)
        std :: cout << intersection[i] << " ";

    std :: cout << std :: endl;

    return 0;
}