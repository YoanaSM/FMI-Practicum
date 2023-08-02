#include<iostream>

const int MAX_SIZE = 1000;
const int my_exc = 0;
char toUpper(char c)
{
    if (c >='a'&& c <= 'z')
    {
        return c - 'a' + 'A';
    }
    else
        return c;
}

int main()
{
    char name[MAX_SIZE];
    std::cin.getline(name,MAX_SIZE);

    bool isValid = true;
    if (name[0]>= 'A' && name[0] <= 'Z')
    {
        isValid = true;
    }
    for (int i = 1; name[i] != '\0' ; ++i)
    {
        if(name[i] >= 'a' && name[i] <= 'z')
        {
            isValid = true;
        }
        else
        {
            isValid = false;
        }
    }

    if (isValid)
    {
        for (int i = 0; name[i] != '\0' ; ++i)
        {
            name[i] = toUpper(name[i]);
            std :: cout << name[i];
        }
    }
    else
    {
        throw my_exc;
    }

    return 0;
}