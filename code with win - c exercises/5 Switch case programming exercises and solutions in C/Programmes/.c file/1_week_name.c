#include <stdio.h>

int main()
{
    printf("*** Programme to print day of week name *** \n\n");

    int week;

    printf("Enter week number from 1 to 7:-\n");
    scanf("%d", &week);

    switch (week)
    {
    case 1:
        printf("It is Monday\n");
        break;
    case 2:
        printf("It is Tuesday\n");
        break;
    case 3:
        printf("It is Wednesday\n");
        break;
    case 4:
        printf("It is Thrusday\n");
        break;
    case 5:
        printf("It is Friday\n");
        break;
    case 6:
        printf("It is Saturday\n");
        break;
    case 7:
        printf("It is Sunday\n");
        break;
    default:
        printf("Invalid input!! Please enter week number between 1-7\n");
    }
    return 0;
}