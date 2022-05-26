#include <stdio.h>

int main()
{
    printf("*** Programme for finding a number is even or odd ***\n\n");
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);

    printf("Your entered number %s is", (a % 2 == 0 ? "EVEN" : "ODD"));
    return 0;
} 

// What is the role of %s in line 10 ???
// What is the role of %s in line 10 ???
// What is the role of %s in line 10 ???