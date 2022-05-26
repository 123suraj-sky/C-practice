#include <stdio.h>

int main()
{
    printf("*** Programme to printf total number of days in a month ***\n\n");

    int month;
    printf("Enter month's number here:-\n");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("This month has 31 days\n");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("This month has 30 days\n");
        break;

    case 2:
        printf("This month has 28/29 days\n");
        break;

    default:
        printf("Invalid input!! Please enter month number between 1 to 12\n");
        break;
    }
    return 0;
}