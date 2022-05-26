#include <stdio.h>

//notes: XOR operator(^) returns 1 if corresponding bit of both operands are different otherwise returns 0
//! For example: if LSB of num is 1, then (num ^ 1) will make LSB of num to 0. And if LSB of num is 0, then (num ^ 1) will toggle LSB to 1

int main()
{
    int num, n, newNum;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Enter nth bit ot toggle (0-31): ");
    scanf("%d", &n);

    // Left Shifts 1, n times then perform bitwise XOR with num
    newNum = num ^ (1 << n);

    printf("Bit toggled successfully\n\n");
    printf("Number before toggling %d bit: %d\n", n, num);
    printf("Number after toggling %d bit: %d\n", n, newNum);

    return 0;
}