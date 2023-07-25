#include<iostream>
//Въвежда се цяло число. Отпечатайте 1, ако числото е четно и 0, ако е нечетно. МОЛЯ НЕ ИЗПОЛЗВАЙТЕ if КОНСТРУКЦИИ
int main()
{
    int num;
    std :: cin >> num;

    bool even = (num % 2 == 0);
    bool odd = (num % 2);

    std :: cout << even << std :: endl;
    std :: cout << !odd << std :: endl;

    return 0;
}