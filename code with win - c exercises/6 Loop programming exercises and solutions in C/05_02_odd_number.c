#include <stdio.h>

int main()
{
    printf("*** Programme to print all odd numbers in a range ***\n\n");
    int i, n;

    printf("Print odd numbers till:-\n");
    scanf("%d", &n);

    printf("All odd nubmers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++, i++)
    // for (i = 1; i <= n; i += 2)  --> '+=' is known as "shorthand assignment operator"
    // for (i = 1; i <= n; i = i + 2)
    // Above two can also be used
    {
        printf("%d\n", i);
    }
    return 0;
}