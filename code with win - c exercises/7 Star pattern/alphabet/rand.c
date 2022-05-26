#include <stdlib.h>
#include <time.h>

#define MAX 30

int randFunc()
{
    srand(time(NULL));
    return rand() & 235 + 1;
}