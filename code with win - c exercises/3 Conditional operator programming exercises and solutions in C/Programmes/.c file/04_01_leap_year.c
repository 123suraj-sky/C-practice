#include <stdio.h>

int main(){
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