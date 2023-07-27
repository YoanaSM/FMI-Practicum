#include<iostream>
//can be done with switch too
int main () {
    int number;
    std::cin >> number;

    if (number == 1)
        std::cout << "Monday" << std::endl;
    else if (number == 2)
        std::cout << "Tuesday" << std::endl;
    else if (number == 3)
        std::cout << "Wednesday" << std::endl;
    else if (number == 4)
        std::cout << "Thursday" << std::endl;
    else if (number == 5)
        std::cout << "Friday" << std::endl;
    else if (number == 6)
        std::cout << "Saturday" << std::endl;
    else if (number == 7)
        std::cout << "Sunday" << std::endl;
    else
        std::cout << "Invalid input" << std :: endl;

    return 0;
}