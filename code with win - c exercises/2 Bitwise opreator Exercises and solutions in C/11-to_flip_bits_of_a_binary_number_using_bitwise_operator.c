#include <stdio.h>

int main()
{
    int num, flip;
    printf("Enter a number: ");
    scanf("%d", &num);

    flip = ~(num);

    printf("Number after fliping all its bits is %d\n", flip);

    return 0;
}