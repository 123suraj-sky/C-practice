/* CONDITION FOR A LEAP YEAR
1. If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
2. If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
3. If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
4. The year is a leap year (it has 366 days).
5. The year is not a leap year (it has 365 days). */


#include <stdio.h>

int main(){
    printf("*** Programme to find a year is leap year or not ***\n\n");
    int year;
    printf("Enter your year\n");
    scanf("%d", &year);

    if ((year % 4 == 0) && (year % 100 == 0) && (year % 400 == 0))
    {
        printf("Your year is a leap year and it has 366 days\n", year);
    }

    else if ((year % 4 == 0) && (year % 100 != 0))
    {
        printf("Your year is a leap year and it has 366 days\n",year);
    }
    else
    {
        printf("Your year is not a leap year and it has only 365 days\n", year);
    }
    return 0;
}