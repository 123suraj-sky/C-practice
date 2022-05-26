// #include <stdio.h>
// #define fun main
// int fun()
// {
//     printf("I am batman\n");
//     return 0;
// }

// #include <stdio.h>
// #define fun m##a##i##n
// int fun()
// {
//     printf("I am batman\n");
//     return 0;
// }

// #include <stdio.h>
// #define begin(m,a,i,n) m##a##i##n
// #define start begin(m,a,i,n)
// void start()
// {
//     printf("I am batman\n");
// }

// int printf(const char *format, ...);
// int main()
// {
//     printf("I am batman\n");
// }

#include <stdio.h>
int main()
{
    if(printf("hello world\n")){}
    return 0;
}