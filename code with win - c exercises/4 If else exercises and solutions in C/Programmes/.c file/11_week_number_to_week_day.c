#include <stdio.h>

int main()
{
    printf("*** Programme to enter the week number and get its day ***\n\n");
    int w;
    printf("Enter the week number\n");
    scanf("%d", &w);

    if (w == 1)
    {
        printf("It is Monday\n");
    }
    else if (w == 2)
    {
        printf("It is Tuesday\n");
    }
    else if (w == 3)
    {
        printf("It is Wednesday\n");
    }
    else if (w == 4)
    {
        printf("It is Thrusday\n");
    }
    else if (w == 5)
    {
        printf("It is Friday\n");
    }
    else if (w == 6)
    {
        printf("It is Saturday\n");
    }
    else if (w == 7)
    {
        printf("It is Sunday\n");
    }
    else
    {
        printf("Error!! Please enter week number between 1 to 7\n");
    }
    return 0;
}