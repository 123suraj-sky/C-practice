#include <stdio.h>

int isLeapYear(int year, int mon)
{
    int flag = 0;

    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            if (mon == 2)
                flag = 1;
    }
    else if (year % 4 == 0)
        if (mon == 2)
            flag = 1;

    return (flag);
}

int main()
{
    int month = 1, year = 2016;

    if (isLeapYear(year, month))
        printf("Leap Year\n");
    else
        printf("Not a Leap Year\n");

    return 0;
}