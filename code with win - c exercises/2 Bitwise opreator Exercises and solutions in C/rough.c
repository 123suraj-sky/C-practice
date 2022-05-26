#include <stdio.h>

void sum(int *a)
{
    for (int i = 0; i < 5; i++)
        *a += i;
}

int main()
{
    int a = 0;
    for (int i = 0; i < 5; i++)
        a += i;
    printf("a is %d\n", a);
    sum(&a);
    printf("a is %d\n", a);
    sum(&a);
    printf("a is %d\n", a);
    sum(&a);

    return 0;
}