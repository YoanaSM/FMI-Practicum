#include<iostream>

int numLength(int number)// to get the length of the number so we can put it in an array
{
    int count = 0;
    while(number > 0)
    {
        count++;
        number/=10;
    }
    return count;
}
int powerOfTen(int number)//calculates ten to the power of a given number
{
    int result = 1;
    for (int i = 0; i < number ; ++i)
    {
        result *= 10;
    }
    return result;
}

int toNum(int number)
{
    int arr[20];
    int result = 0;
    int length = numLength(number);


    for (int i = 0; i < length; i++)
    {
    arr[length - i - 1] = number % 10;
    number /= 10;
    }


     int cap = length;
     while(cap > 0)
     {
         int lastIndex = 0;
         for (int i = 0; i <= cap ; ++i)
         {
             if (arr[i] > arr[i+1] && i != cap)//to switch the digits in ascending order
             {
                 int temp = arr[i];
                 arr[i] = arr[i+1];
                 arr[i+1] = temp;
                 lastIndex = i;//initialize the position when the last swap occured  and when it becomes 0 this means all elements right to ;eft were sorted
             }
         }
         cap = lastIndex;
     }

    for (int i = 0; i <= length ; ++i) {//there is no need to multiply the elements which are zeros
        if (arr[i] != 0) {
            result += arr[i] * powerOfTen(length - i);
        }
    }

    if (result < 0)//bc if it was a negative number the algorithm multiplies the number by ten one more time bc of the sign in front of the num
    {
        return result/10;
    }
    else
        return result;

}


int main()
{
  int n;
  std::cin >> n;
  std :: cout << "The smallest number with the same digits is: " << toNum(n) << std :: endl;

    return 0;
}