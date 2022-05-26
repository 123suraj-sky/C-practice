#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
    double time_spent = 0.0;
    clock_t begin = clock();
    sleep(3);
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f\n", time_spent);
    return 0;
}