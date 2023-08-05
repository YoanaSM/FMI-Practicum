#include<iostream>
#include<cstring>
const int MAX_SIZE = 50;

int findPosition(char** dict, int n, const char* myWord)

{
    for (int i = 0; i < n; ++i)
    {
        if (strcmp(dict[i],myWord)==0)//if the word is found on the position i
        {
            return i+1;//bc in real world we don't start from 0
        }
    }
    return -1;//if we haven't found the word

}

int main()
{
    char myWord[MAX_SIZE];
    std :: cin.getline(myWord,MAX_SIZE);

    int n;
    std::cin >> n;
    std::cin.ignore();

    char** dict = new char*[n];

    char buff [MAX_SIZE];
    for (int i = 0; i < n ; ++i)
    {
        std :: cin.getline(buff, MAX_SIZE);
        dict[i] = new char[strlen(buff) + 1];

        strcpy(dict[i], buff);
    }

    std :: cout << findPosition(dict,n,myWord);
    for (int i = 0; i < n; i++)
        delete[] dict[i];

    delete[] dict;

    return 0;
}