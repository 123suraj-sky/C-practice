//notes: binary operator only operates with "int" i.e. integers

#include <stdio.h>

int main()
{
    int a = 3, b = 2;
    int c = a & b;
    int d = a | b;
    int e = !0;

    printf("c is %d\n", c);
    printf("d is %d\n", d);
    printf("e is %d\n", e);

    //notes: a | a = a
    //notes: a & a = a
    return 0;
}