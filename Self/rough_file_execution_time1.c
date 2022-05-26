#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
    time_t begin = time(NULL);
    sleep(0);
    time_t end = time(NULL);

    printf("The elapsed time is %f seconds\n", (end - begin));
    return 0;
}