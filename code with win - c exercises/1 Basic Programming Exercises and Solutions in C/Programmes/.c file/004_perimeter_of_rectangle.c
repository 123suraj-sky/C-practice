#include <stdio.h>

int main()
{
    printf("*** Programme for perimeter of a rectangle *** \n\n");
    float length, breadth;

    printf("Enter the value of length\n");
    scanf("%f", &length);

    printf("Enter the value of breadth\n");
    scanf("%f", &breadth);

    float perimeter;
    perimeter = (length + length + breadth + breadth);
    printf("The perimeter of this rectangle is %f\n", perimeter);
    return 0;
}