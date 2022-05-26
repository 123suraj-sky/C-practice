#include <stdio.h>

int main()
{
    int a, b, k, m, sum = 0;
    int d[3][3] = {{11, 22, 33}, {44, 55, 66}, {73, 86, 99}};
    int e[3][3] = {{111, 212, 33}, {44, 515, 66}, {73, 816, 99}};
    int f[3][3];

    printf("Array d is:-\n");
    for (a = 0; a < 3; a++)
    {
        for (b = 0; b < 3; b++)
        {
            printf("%-5d\t", d[a][b]);
        }
        printf("\n");
    }

    printf("\n\nArray e is:-\n");
    for (a = 0; a < 3; a++)
    {
        for (b = 0; b < 3; b++)
        {
            printf("%-5d\t", e[a][b]);
        }
        printf("\n");
    }

    printf("\n\nSum of d and e is Add[3][3]:-\n");
    for (a = 0; a < 3; a++)
    {
        for (b = 0; b < 3; b++)
        {
            printf("%-5d\t", d[a][b] + e[a][b]);
        }
        printf("\n");
    }

    printf("\n\nSubtraction of d and e is Sub[3][3]:-\n");
    for (a = 0; a < 3; a++)
    {
        for (b = 0; b < 3; b++)
        {
            printf("%-5d\t", d[a][b] - e[a][b]);
        }
        printf("\n");
    }

    printf("\n\nMultiplication of d and e is Mul[3][3]:-\n");
    for (a = 0; a < 3; a++)
    {
        for (b = 0; b < 3; b++)
        {
            for (k = 0; k < 3; k++)
            {
                int m = d[a][k] * e[k][b];
                sum += m;
            }
            f[a][b] = sum;
            sum = 0;
        }
        printf("\n");
    }

    for (a = 0; a < 3; a++)
    {
        for (b = 0; b < 3; b++)
        {
            printf("%-5d\t", f[a][b]);
        }
        printf("\n");
    }
    return 0;
}
/* For Addition
   122  234    66
   88   570    132
   146  902    198
   
   For Subtraction
   -100    -190    0
    0      -460    0
    0      -730    0
    
    For Multiplication
    4598    40590   5082
    12122   91563   11616
    19114   140550  17886*/