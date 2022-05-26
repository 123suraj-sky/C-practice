#include <stdio.h>

int main()
{
    int num, n, newNum;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Enter nth bit ot set (0-31): ");
    scanf("%d", &n);

    //* Left shift 1, n times and perform bitwise OR with num
    newNum = (1 << n) | num;

    printf("Bit set successfully\n\n");
    printf("Number before setting %d bit: %d (in decimal)\n", n, num);
    printf("Number after setting %d bit: %d (in decimal)\n", n, newNum);

    return 0;
}