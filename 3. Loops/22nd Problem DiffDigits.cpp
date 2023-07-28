#include<iostream>
//without / and %
int main()
{
    for (int hundreds = 1; hundreds <= 9 ; hundreds++)
    {
        for (int tens = 0; tens <= 9 ; tens++)
        {
            for (int  units = 0; units <= 9 ; units++)
            {
                if (hundreds!=tens && hundreds!= units && tens != units)
                {
                    std :: cout << hundreds*100 + tens*10 + units << std :: endl;
                }
            }
        }
    }








    return 0;
}