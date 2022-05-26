#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int det(int A[100][100], int n);

int main()
{
start:
    printf("\n*** Program to find the determinant of a matrix ***\n\n");
    int a;               // this 'a' is used to asks user to again run this program
    int A[100][100];     // A[100][100] is matrix which can find determinant upto matrix of 100 order
    int i, j, k, n, res; // n is order of matrix; i, j, k are used in loops; res is result of the calculation
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);
    printf("\n");

    if (n < 1) // If order entered is less than 1 then the matrix is not possible
    {
        printf("Error!! Please enter order of matrix greater than or equal to 1\n");
        goto start;
    }
    else
    {
        // Taking input of the matrix
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("Enter the %d %d element of the matrix: ", i + 1, j + 1);
                scanf("%d", &A[i][j]);
            }
        }

        // Printing the matrix
        printf("\n\nYou have entered the matrix:\n");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%-5d", A[i][j]);
            }
            printf("\n");
        }
        if (n == 1) // if matrix has only one element i.e. of 1st order
        {
            printf("\nDeterminant of the above matrix is: %d\n", A[0][0]);
            goto ask_again;
        }
        else
        {
            res = det(A, n); // function call to find determinant
            printf("\nDeterminant of the above matrix is: %d\n", res);

        // Asking user if again want to run this program
        ask_again: // if user don't enter 1 or 2 form the option
            printf("\nDo you want to again run this program?\n1) Yes\n2)No\n");
            scanf("%d", &a);
            if (a == 1)
            {
                goto start;
            }
            else if (a == 2)
            {
                goto end;
            }
            else
            {
                goto ask_again;
            }
        end:
            printf("~~~ Thanks for using this program ~~~\n");
            return 0;
        }
    }
}

// Function definition of det(A, n)
int det(int A[100][100], int n)
{
    int Minor[100][100];
    int i, j, k, c1, c2; // c1, c2 used of calculating minor in the determinant
    int determinant = 0;
    // int c[100];
    int O = 1; // for alternative +, - values used in finding the determinant --> 'O' for order

    if (n == 2) // Finding the determinant of smallest minor or determinant of matrix of order 2
    {
        // determinant = 0;
        determinant = A[0][0] * A[1][1] - A[0][1] * A[1][0];
        return determinant;
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            c1 = 0, c2 = 0;
            for (j = 0; j < n; j++)
            {
                for (k = 0; k < n; k++)
                {
                    if (j != 0 && k != i)
                    {
                        Minor[c1][c2] = A[j][k];
                        c2++;
                        if (c2 > n - 2)
                        {
                            c1++;
                            c2 = 0;
                        }
                    }
                }
            }
            determinant += O * (A[0][i] * det(Minor, n - 1));
            // printf("determinant is %d\n", determinant);
            O = -1 * O;
        }
    }
    return determinant;
}