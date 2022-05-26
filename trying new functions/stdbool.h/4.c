#include <stdio.h>
#include <stdbool.h>

int main()
{
    //notes: '__bool_true_false_are_defined' is integer constant 1

    int x = __bool_true_false_are_defined;
    int y = !__bool_true_false_are_defined;
    
    printf("x is %d\n", x);
    printf("y is %d\n", y);

    return 0;
}