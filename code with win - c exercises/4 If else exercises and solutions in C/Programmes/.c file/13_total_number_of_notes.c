#include <stdio.h>

int main()
{
    printf("*** Programme for finding total number of notes in a given amount ***\n\n");
    int amount;
    int n500, n100, n50, n20, n10, n5, n2, n1;

    n500 = n100 = n50 = n20 = n10 = n5 = n2 = n1 = 0;

    printf("Enter amount:\n");
    scanf("%d", &amount);

    if (amount >= 500)
    {
        n500 = amount / 500;
        amount -= n500 * 500; // The statement "amount -= n500 * 500;" is equivalent to amount = amount - (n500 * 500);
                              // Above form is called shorthand assignment opreator
    }
    if (amount >= 100)
    {
        n100 = amount / 100;
        amount -= n100 * 100;
    }
    if (amount >= 50)
    {
        n50 = amount / 50;
        amount -= n50 * 50;
    }
    if (amount >= 20)
    {
        n20 = amount / 20;
        amount -= n20 * 20;
    }
    if (amount >= 10)
    {
        n10 = amount / 10;
        amount >= 10;
    }
    if (amount >= 5)
    {
        n5 = amount / 5;
        amount -= n5 * 5;
    }
    if (amount >= 1)
    {
        n1 = amount;
    }

    int k;
    k = n500 + n100 + n50 + n20 + n10 + n5 + n2 + n1;

    printf("Total number of notes = %d\n", k);
    printf("500 = %d\n", n500);
    printf("100 = %d\n", n100);
    printf("50 = %d\n", n50);
    printf("20 = %d\n", n20);
    printf("10 = %d\n", n10);
    printf("5 = %d\n", n5);
    printf("2 = %d\n", n2);
    printf("1 = %d\n", n1);

    return 0;
}