#include <stdio.h>
void printX(int n);

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printX(n);
    return 0;
}

void printX(int n)
{
    int count = n * 2 - 1;

    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            if (j == i || (j == count - i + 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

