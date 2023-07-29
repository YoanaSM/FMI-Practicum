#include<iostream>

int main()
{
   const int MAX_SIZE = 20;
   int arr1[MAX_SIZE];
   int arr2[MAX_SIZE];

   int n, m;
   std :: cin >> n >> m;

//input of th elements
    for (int i = 0; i < n ; ++i)
    {
        std::cin >> arr1[i];
    }

    for (int j = 0; j < m ; ++j)
    {
        std::cin >> arr2[j];
    }

    int intersection[MAX_SIZE];// array for the intersection of arr1 and arr2
    int count = 0;// counting the same elements

    for (int i = 0; i < n ; i++)
    {
        bool isArr2 = false; // checking if any element in arr1 is the same as one in arr2

        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                isArr2 = true; //if they are the same the bool is switched to true
                break;
            }
        }
        if (isArr2)// when we have a match we put the element in the third array
        {
            intersection[count] = arr1[i];
            count++;//increase the count variable
        }

    }
    std :: cout << count << std :: endl;//print how many elements are the same

    for (int i = 0; i < count; i++)
        std :: cout << intersection[i] << " "; print the third array

    std :: cout << std :: endl;

    return 0;
}
