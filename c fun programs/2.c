//C Program to Round Up a Number
#include <stdio.h>
// #include <conio.h>
void main()
{
    float n;
    int i;
    printf("\nEnter the Value: ");
    scanf("%f", &n);
    // int i = (n < 0) ? n - 0.5 : n + 0.5;
    if (n < 0)
    {
        i = n - 0.5;
    }
    else
    {
        i = n + 0.5;
    }

    printf("\nRound up value = %d\n", i);
}