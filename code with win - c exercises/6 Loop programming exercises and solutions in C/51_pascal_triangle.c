#include <stdio.h>
// Fuction definition
long long fact(int n);
int main()
{
    printf("*** Program to print Pascal triangle upto n rows ***\n\n");

    int n, k, num, i;
    long long term;

    // INput number of rows
    printf("Enter number of rows:-\n");
    scanf("%d", &num);

    for (n = 0; n < num; n++)
    {
        // Prints 3 spaces
        for (i = n; i <= num; i++)
        {
            printf("%3c", ' ');
        }

        // Generate term for current row
        for (k = 0; k <= n; k++)
        {
            term = fact(n) / (fact(k) * fact(n - k));

            printf("%6lld", term);
        }
        printf("\n");
    }
    return 0;
}

// Function to calculate factorial
long long fact(int n)
{
    long long factorial = 1ll;
    while (n >= 1)
    {
        factorial *= n;
        n--;
    }

    return factorial;
}

/* Notes:-
1) The statement printf("%3c", ' '); is used to print 3 white spaces and is equivalent to pritnf("   ");
2) The statement printf("%5lld", term); prints the current term with 6 character width
3) To print a long long type value we have used %lld format specifier
4) In the fact() function we have added ll suffix while declaring long long factorial = 1ll; .
    Since 1 is an integer variable, hence to tell the compiler explixitly that store 1 as long long type we have added the suffix*/