#include <stdio.h>

int main()
{
    int num, n, bitStatus;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Enter nth bit to check (0-31): ");
    scanf("%d", &n);

    //* Right shift num, n times and perform bitwise AND with 1
    bitStatus = (num >> n) & 1;

    printf("The %d bit is set to %d\n", n, bitStatus);

    return 0;
}