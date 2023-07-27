#include<iostream>
#include<cassert>
int main ()
{

    int hour;
    std :: cin >> hour;
    assert(hour >= 0 && hour <= 23);

    int minutes;
    std :: cin >> minutes;
    assert( minutes >= 0 && minutes <= 59);


    int totalMin = minutes + 15;
    if (totalMin >= 60)
    {
        totalMin = totalMin % 60;
        hour++;
    }
    if (hour == 24)
    {
        hour = 0;
    }
    if (hour < 10)
    {
        std :: cout << "0" << hour << ":";
    if (totalMin < 10)
        std :: cout << "0" << totalMin;
    else
        std :: cout << totalMin;
    }
    else
    {
        std :: cout << hour << ":";
        if (totalMin < 10)
            std :: cout << "0" << totalMin;
        else
            std :: cout << totalMin;
    }

    return 0;
}