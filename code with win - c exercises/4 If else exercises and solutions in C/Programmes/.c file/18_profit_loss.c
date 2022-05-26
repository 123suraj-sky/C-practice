#include <stdio.h>

int main()
{
    printf("*** Programme to calculate profit or loss ***\n\n");
    float costp; // costp for cost price
    printf("Enter the cost price:-\n");
    scanf("%f", &costp);

    float sellp; // sellp for selling price
    printf("Enter the selling price:-\n");
    scanf("%f", &sellp);

    if (sellp > costp)
    {
        printf("You have a profit of rupees %f\n", (sellp - costp));
    }
    else if (costp > sellp)
    {
        printf("You have a loss of rupees %f\n", (costp - sellp));
    }
    else
    {
        printf("You have neither profit nor loss\n");
    }
    return 0;
}