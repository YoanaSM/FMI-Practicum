#include <iostream>
#include <cstring>
//we can view the process as overwriting the word we have chosen to delete
const int MAX_SIZE = 1024;
void deleteFirst(char* str, const char* findWhat)
{
    char* ptr_write = strstr(str, findWhat);//to point to the beginning of the first occurrence of findWhat in str.
    if (ptr_write == nullptr)
        return;

    char* ptr_read = ptr_write + strlen(findWhat);


    while (*ptr_read)
    {

        *ptr_write = *ptr_read;
        ptr_write++;
        ptr_read++;
    }
    *ptr_write = '\0';
}

int main()
{

    char str[MAX_SIZE];
    std::cout << "Enter a string: ";
    std::cin.getline(str, MAX_SIZE);

    char word[MAX_SIZE];
    std::cout << "Enter the word you want to remove: ";
    std::cin.getline(word, MAX_SIZE);

    deleteFirst(str, word);
    std::cout << "Modified string: " << str << std::endl;

}