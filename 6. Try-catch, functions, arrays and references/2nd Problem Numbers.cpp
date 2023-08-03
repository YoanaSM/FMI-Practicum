#include<iostream>
const int my_exc = 0;

void validate(int number)
{
    if (number<0)//1st: to be non negative
    throw my_exc;

    int count[10]={0};
    int digit;

    while(number>0)
    {
        digit = number%10;

        count[digit]++;
        if (count[digit]>1)//2nd: not having more than one from each digit
        throw my_exc;

        number/= 10;
    }
}
int digitNum(int number)//3rd to have equal num of digits
{
    int count = 0;
    while(number > 0)
    {
        count++;
        number/=10;
    }
    return count;
}

int main()
{
    int n, k;
    std::cin >> n >> k;
    //if any of the three requirements are not checked the program throws exception
  validate(n);
  validate(k);
    if (digitNum(n)!=digitNum(k))
    {
        throw my_exc;
    }
std::cout << n+k << std :: endl;



    return 0;
}