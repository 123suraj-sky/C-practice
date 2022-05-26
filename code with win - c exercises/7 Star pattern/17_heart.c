#include <stdio.h>
#include <string.h>

void printNameInHeart(char name[30], int len);
void selfModifiedPrintNameInHeart(char name[30], int len);
void print(char name[30], int n, int len);


int main()
{
    char name[30];
    printf("Enter your name: ");
    gets(name);
    int len = strlen(name);

    // printNameInHeart(name, len);
    selfModifiedPrintNameInHeart(name, len);
    return 0;
}

void printNameInHeart(char name[30], int len)
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    print(name, n, len);
}

void selfModifiedPrintNameInHeart(char name[30], int len)
{
    print(name, len, len);
}

void print(char name[30], int n, int len)
{

    // Print upper part of the printNameInHeart shape
    for (int i = n / 2; i <= n; i += 2)
    {
        for (int j = 1; j < n - i; j += 2)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    // Print lower triangular part of the pattern
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j < n; j++)
            printf(" ");

        // Print the name
        if (i == n)
        {
            for (int j = 1; j <= (n * 2 - len) / 2; j++)
                printf("*");
            printf("%s", name);

            for (int j = 1; j < (n * 2 - len) / 2; j++)
                printf("*");
        }
        else
        {
            for (int j = 1; j <= (i * 2) - 1; j++)
                printf("*");
        }
        printf("\n");
    }
}
