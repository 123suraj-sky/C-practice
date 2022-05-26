#include <stdio.h>
#include <assert.h>

int main()
{
    int a;
    char str[50];

    printf("Enter an integer value: \n");
    scanf("%d", &a);
    assert(a >= 10); // if the condition not satisfied the program terminates
    printf("Integer entered is %d\n", a);

    printf("Enter string: \n");
    scanf("%s", &str);
    assert(str != NULL);
    printf("String entered is: %s\n", str);

    //system("pause");
    return 0;
}