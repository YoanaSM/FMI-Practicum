#include<iostream>


bool isDigit(char symbol)
{
    return (symbol >= '0' && symbol <= '9');// if it is a digit the function will return true
}

void extractDigits(char* str)
{
    bool flag = false;
    int i = 0, t = 0, arr[100], begin = -1, end = -1, num = 0;
    while(str[i])
    {
        if (isDigit(str[i]))
        {
            if (begin == -1)
            {
                flag = true;
                begin = i;
            }
            end = i;
        }
        else
        {
            if (flag) {
                for (int k = begin; k <= end; ++k) {
                    num = (num * 10) + str[k] - '0';//str[k] - '0' means switching char num to int num
                }
                arr[t] = num;
                num = 0;
                t++;
            }
            flag = false;
            begin = -1;
            end = -1;
        }
       i++;
    }
    for (int j = 0; j < t; ++j)
    {
        std :: cout << arr[j] << ' ';
    }
}

const char MAX_SIZE = 100;
int main()
{
   
    char sentence[MAX_SIZE] = "В 9 ч. тръгвам към ФМИ с автобус 94 или 120.";
    extractDigits(sentence);

    return 0;
}