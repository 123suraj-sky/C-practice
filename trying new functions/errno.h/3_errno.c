#include <stdio.h>
#include <errno.h>
#include <string.h>

// C library macro extern int errno is set by system calls and some library functions in the event of an error to indicate if anything went wrong

extern int errno ;

int main()
{
    FILE *fp;
    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Value of errno: %d\n", errno);
        fprintf(stderr, "Error opening file: %s\n", strerror(errno));
    }
    else
    {
        fclose(fp);
    }
    
    

    return 0;
}