#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool a = true, b = false;
    printf("a && b = %d\n", a && b);
    printf("a || b = %d\n", a || b);
    printf("!b = %d\n", !b);

    return 0;
}