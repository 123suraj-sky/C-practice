#include <stdio.h>

void print8(int size);

int main()
{
    int size;
ask_again:
    printf("Enter size: ");
    scanf("%d", &size);

    if (size <= 3)
    {
        printf("Oops!!\nSize less than or equal to 3 can't be printed\nPlese enter size(an integer) greater than 3\n\n");
        goto ask_again;
    }
    print8(size);
    return 0;
}

void print8(int size)
{

    for (int i = 1; i < size * 2; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            // Condition for corner and centra intersention space
            if ((i == 1 && (j == 1 || j == size)) || (i == size && (j == 1 || j == size)) || (i == size * 2 - 1 && (j == 1 || j == size)))
                printf(" ");
            else if (i == 1 || i == size || i == (size * 2) - 1 || j == 1 || j == size)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}