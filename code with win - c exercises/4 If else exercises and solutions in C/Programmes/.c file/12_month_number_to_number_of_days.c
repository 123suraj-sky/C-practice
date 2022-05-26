#include <stdio.h>

int main()
{
    printf(" *** Programme for finding number of days in a given month ***\n\n");
    int m;
    printf("Enter the month number\n");
    scanf("%d", &m);

    if (m == 1)
    {
        printf("This is the first month and it is January and it has 31 days\n");
    }
    else if (m == 2)
    {
        printf("This is the second month and it is February and it has 28 days\n");
    }
    else if (m == 3)
    {
        printf("This is the third month and it is March and it has 31  days\n");
    }
    else if (m == 4)
    {
        printf("This is the fourth month and it is April and it has 30  days\n");
    }
    else if (m == 5)
    {
        printf("This is the fifth month and it is May and it has 31  days\n");
    }
    else if (m == 6)
    {
        printf("This is the sixth month and it is June and it has 30  days\n");
    }
    else if (m == 7)
    {
        printf("This is the seventh month and it is July and it has 31  days\n");
    }
    else if (m == 8)
    {
        printf("This is the eighth month and it is August and it has 31  days\n");
    }
    else if (m == 9)
    {
        printf("This is the nineth month and it is September and it has 30  days\n");
    }
    else if (m == 10)
    {
        printf("This is the tenth month and it is October and it has 31  days\n");
    }
    else if (m == 11)
    {
        printf("This is the eleventh month and it is November and it has 30  days\n");
    }
    else if (m == 12)
    {
        printf("This is the tweleveth month and it is December and it has 31  days\n");
    }
    else
    {
        printf("Error!! Please enter correct month between 1 to 12\n");
    }
    return 0;
}