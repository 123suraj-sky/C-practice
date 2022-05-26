#include <stdio.h>

int main()
{
    printf("*** Programme to input electricity unit charges and calculate total electricity bill ***\n\n");
    /* For first 50 units Rs. 0.50/unit
        For next 100 units Rs. 0.75/unit
        For next 100 units Rs. 1.20/unit
        For unit above 250 Rs. 1.50/unit
        An additional surcharge of 20% is added to the bill */

    float unit, bill;
    printf("Enter total unit consumed:-\n");
    scanf("%f", &unit);

    if (unit <= 50)
    {
        bill = unit * 0.5;
    }

    else if (unit <= 150)
    {
        bill = 25 + ((unit-50) * 0.75);
    }
    else if (unit >= 150 && unit <= 250)
    {
        bill = 100 + ((unit-150) * 1.20);
    }
    else if (unit >= 250)
    {
        bill = 220 + ((unit-250) * 1.50);
    }
    
    printf("Your bill is Rs. %f\n", bill * 1.2);
    return 0;
}