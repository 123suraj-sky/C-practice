#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("ASCII.txt", "w");
    for (int i = 0; i < 250; i++)
    {
        printf("%d is %c\n", i + 1, i + 1);
        fprintf(ptr, "%d is %c\n", i + 1, i + 1);
    }

    return 0;
}