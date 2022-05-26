#include <stdio.h>

int main()
{
start:
    printf("\n*** Program to do matrix multiplication ***\n\n");
    int sum = 0;
    int rows1, columns1; // rows1 is number of rows in first matrix and columns1 is the number of columns in the first matrix
    int rows2, columns2; // rows2 is number of rows in second matrix and columns2 is the number of columns in the second matrix

    // taking input of rows and columns of first matrix
    printf("Enter the number of rows of the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns of the first matrix: ");
    scanf("%d", &columns1);

    // taking input of rows and columns of first matrix
    printf("Enter the number of rows of the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns of the second matrix: ");
    scanf("%d", &columns2);

    if (columns1 == rows2)
    {
        int first_matrix[rows1][columns1], second_matrix[rows2][columns2], result[rows1][columns2];
        // taking input of first matrix
        printf("\nEnter the first matrix (say A):-\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns1; j++)
            {
                printf("Enter the %d %d element of the first matrix A: ", i + 1, j + 1);
                scanf("%d", &first_matrix[i][j]);
            }
        }

        // printing the first matrix
        printf("\nYou have entered the first matrix A as:\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns1; j++)
            {
                printf("%-6d\t", first_matrix[i][j]);
            }
            printf("\n");
        }

        // taking input of second matrix
        printf("\nEnter the second matrix (say B):-\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns1; j++)
            {
                printf("Enter the %d %d element of the second matrix B: ", i + 1, j + 1);
                scanf("%d", &second_matrix[i][j]);
            }
        }

        // printing the second matrix
        printf("\nYou have entered the second matrix B as:\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns1; j++)
            {
                printf("%-6d\t", second_matrix[i][j]);
            }
            printf("\n");
        }

        // finding the result
        for (int i = 0; i < rows1; i++) // resultant matrix is order rows1 x columns2
        {
            for (int j = 0; j < columns2; j++)
            {
                // for (int k = 0; k < rows2; k++) // Both lines are same this line and line just below it
                for (int k = 0; k < columns1; k++)
                {
                    sum += first_matrix[i][k] * second_matrix[k][j];
                }
                result[i][j] = sum;
                sum = 0; // so that the value is not added to the previous value
            }
        }

        // printing the result
        printf("\nMatrix multiplication of above two matrix is:-\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns2; j++)
            {
                printf("%-6d\t", result[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("\nFirst matrix is of order %d x %d and second matrix is of order %d x %d.\nBut here column of first matrix is not equal to row of second matrix i.e. %d is not equal to %d.\n", rows1, columns1, rows2, columns2, columns1, rows2);
        printf("So this matrix multiplication is not possible\n");
    }

    // Asking user if he/she want to again run this program
    int a;
    printf("\nDo you want to again run this program?\n(1) Yes\n(2) Press any other key to close the program\n");
    scanf("%d", &a);
    if (a == 1)
    {
        goto start;
    }
    else
    {
        goto end;
    }
end:
    printf("\n~~~ Thanks for using this program ~~~\n");
    printf("         ~~~ Visit Again ~~~\n");
    return 0;
}