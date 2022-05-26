#include <stdio.h>

int main()
{
    printf("*** Programme to print all natural numbers from 1 to n ***\nIn a range of two numbers\n    -->Using while loop\n\n");
    
    int n1, n2; // n1 and n2 is a natural number
    
    printf("Enter the lower and upper bound of number\n");
    scanf("%d %d", &n1, &n2);

    printf("All natural number between %d and %d are:\n", n1, n2);
    while (n1 <= n2)
    {
      printf("%d\n", n1); 
      n1++; 

    }
        
    return 0;
}