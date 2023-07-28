#include<iostream>

int main()
{
   int number;
   std:: cin >> number;

    int sum = 0;
    int cnt0 = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0 , cnt5 = 0, cnt6 = 0, cnt7 = 0, cnt8 = 0, cnt9 = 0;

    int position = 0;
    while(number > 0)//to count the number of diff digits
    {
        int remainder = number % 10;


        switch (remainder) {
            case 0:
            {
                cnt0++;
                break;
            }
            case 1:
            {
                cnt1++;
                break;
            }
            case 2:
            {
                cnt2++;
                break;
            }
            case 4:
            {
                cnt4++;
                break;
            }
            case 3:
            {
                cnt3++;
                break;
            }
            case 5:
            {
                cnt5++;
                break;
            }
            case 6:
            {
                cnt6++;
                break;
            }
            case 7:
            {
                cnt7++;
                break;
            }
            case 8:
            {
                cnt8++;
                break;
            }
            case 9:
            {
                cnt9++;
                break;
            }
        }

        if (position%2 == 0)
        {
            sum+=remainder;
        }

        position++;
        number/=10;
    }

    std :: cout << "Sum of every other digit is: " << sum << std :: endl;
    std :: cout << "0: " << cnt0 << std :: endl;
    std :: cout << "1: " << cnt1 << std :: endl;
    std :: cout << "2: " << cnt2 << std :: endl;
    std :: cout << "3: " << cnt3 << std :: endl;
    std :: cout << "4: " << cnt4 << std :: endl;
    std :: cout << "5: " << cnt5 << std :: endl;
    std :: cout << "6: " << cnt6 << std :: endl;
    std :: cout << "7: " << cnt7 << std :: endl;
    std :: cout << "8: " << cnt8 << std :: endl;
    std :: cout << "9: " << cnt9 << std :: endl;

    return 0;
}
