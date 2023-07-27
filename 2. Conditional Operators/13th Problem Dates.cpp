#include<iostream>
#include<cassert>

int main()
{
    int day, month, year;
    std :: cin >> day >> month >> year;

    assert(day >= 1 && day <= 31);
    assert(month >=1 && month <= 12);
    assert(year < 0);

    const int LOW = 28;// feb in a non leap year
    const int HIGH = 29;// feb in a leap year
    const int SHORT = 30; // in short months
    const int LONG = 31; // in long months

    bool isFebruary = month == 2; // in order to be Feb the month needs to be 2
    bool isShort = (month == 4 || month == 5 || month == 9 || month == 11);
    bool isLong = !isFebruary && !isShort;
    bool isLeap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));

    if (day < LOW){
        day++;
    }
    else if (day < SHORT && ( isShort||isLong))
    {
        day++;
    }
    else if (day < LONG && isLong)
    {
        day++;
    }
    else if ((day == SHORT && isShort))
    {
        day = 1;
        month ++;
    }
    else if(day == LONG && isLong)
    {
        day = 1;
        if (month == 12)
        {
            month = 1;
            year++;
        }
        else
        {
            month++;
        }
    }
    else if(isFebruary)
    {
        if (isLeap)
        {
            if (day == LOW)
            {
                day++;
            }
            else if (day == HIGH)
            {
                day = 1;
                month++;
            }
            else
            {
                std::cout << "Invalid date\n";
                return 1;
            }
        }
        else if (day == LOW)
        {
            day = 1;
            month++;
        }
        else
        {
            std::cout << "Invalid date\n";
            return 1;
        }
    }
    else
    {
        std :: cout << "Invalid date" << std :: endl;
        return 1;
    }

    std :: cout << day << " " << month << " " << year << std :: endl;

    return 0;
}
