//Notes: Using the system header file stdbool.h allows you to use bool as a Boolean data type.
//notes: true evaluates to 1 and false evaluates to 2

#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Example 1
    // int x = __bool_true_false_are_defined;
    // int y = !__bool_true_false_are_defined;
    // printf("x is %d\n", x);
    // printf("y is %d\n", y);

    // Example 2
    bool x = true;  //* equivalent to bool x = 1
    bool y = false; //* equivalent to bool y = 0

    //notes: bool is just a nice spelling for the data type _Bool.
    //notes: It has speial rules when number or pointers are converted to it.
    //! _Bool x = true;

    if (x)
        puts("This will print!");
    if (!y)
        puts("This will also print!");

    return 0;
}