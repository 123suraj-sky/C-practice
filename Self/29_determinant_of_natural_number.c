// Modifications to do:
// 1) make it such that it takes input from the files order_2, order_3, order_4 ... etc and take average of it
// 2) print the 10 times and then
// 3) take input from the file of the time and find its average and print to file order2, order3, order4 ...
// 4) for that firstly close the file in append mode and open it in read mode or
// 5) if it is possible from append mode then do that
// 6) or we can make an array which stores the time and them gives its average

/* 
Determinant of a matrix whose terms are in G.P. is zero --> Always
What about determinant of a matrix whose terms are in A.P. with order more than 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <unistd.h>

int det(int A[100][100], int n);

int main()
{
    // start:
    printf("\n*** Program to find the determinant of natural number in a matrix ***\n\n");
    FILE *print_time;
    double time_spent = 0.0;
    int a;                  // this 'a' is used to asks user to again run this program
    int A[100][100];        // A[10][10] is matrix which can find determinant upto matrix of 10 order
    int i, j, k, n, res;    // n is order of matrix; i, j, k are used in loops; res is result of the calculation
                            // printf("Enter the order of the matrix: ");
                            // scanf("%d", &n);
    float average_time[10]; // this will take the time executed of determinant
    print_time = fopen("order_13.txt", "w");
    for (int repeat = 0; repeat < 10; repeat++) // this will print the time 10 times b/c it automaticaly runs the program 10 times
    {
        clock_t begin = clock();
        // printf("repeat is %d\n", repeat);
        // fprintf(print_time, "repeat is %d\n", repeat);
        for (int z = 12; z < 13; z++) // here (z < x) shows the program will calculate the determinant of matrix till order is x, x is natual number
                                      // why 'i' doesn't affecting the program here i is changeable from any other i in the loop
                                      // and after that when the value is changed how it still showing the true result
                                      // It shows some error when you use i here it only showing results of even order
        {
            int series[10000], m = 0; // initializing the series array so that the values will not messed up
            n = z + 1;                // incrementing order of matrix after every loop

            printf("\n");

            if (n < 1) // If order entered is less than 1 then the matrix is not possible
            {
                printf("Error!! Please enter order of matrix greater than or equal to 1\n");
                // goto start;
            }
            else
            {
                // giving values to series in form of natural number
                for (int i = 0; i < 10000; i++)
                {
                    series[i] = i + 1;
                }

                // assigning value of natural number in matrix
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        while (m < ((n * n)))
                        {
                            A[i][j] = series[m];
                            m++;
                            break;
                        }
                    }
                }

                // Printing the matrix
                printf("\n\nYou have entered the matrix of order %d:\n", n);
                for (i = 0; i < n; i++)
                {
                    for (j = 0; j < n; j++)
                    {
                        if (j == 0)
                        {
                            printf("|    %-4d", A[i][j]);
                        }
                        else if (j == (n - 1))
                        {
                            printf("%-4d |", A[i][j]);
                        }
                        else
                        {
                            printf("%-4d", A[i][j]);
                        }
                    }
                    printf("\n");
                }
                if (n == 1) // if matrix has only one element i.e. of 1st order
                {
                    printf("\nDeterminant of the above matrix is: %d\n", A[0][0]);
                    // goto ask_again;
                }
                else
                {
                    res = det(A, n); // function call to find determinant
                    // fprintf(print_time, "\nDeterminant of the matrix of order %d is: %d\n", n, res);
                    printf("\nDeterminant of the above matrix is: %d\n", res);
                    sleep(0);
                    clock_t end = clock();
                    time_spent = 0.0;
                    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
                    average_time[i] = time_spent;
                    fprintf(print_time, "time spent is %f\n\n", time_spent);
                    printf("The elapsed time is %f seconds\n", time_spent);
                    // for (int i = 2; i <= 12; i++)
                    // {
                    //     // time_spent = 0.0;
                    //     fprintf(print_time, "The elapsed time for matrix of order %2d is %f seconds\n", i, time_spent);
                    // }

                    // // Asking user if again want to run this program
                    // ask_again: // if user don't enter 1 or 2 form the option
                    //     printf("\nDo you want to again run this program?\n1) Yes\n2) No\n");
                    //     scanf("%d", &a);
                    //     if (a == 1)
                    //     {
                    //         goto start;
                    //     }
                    //     else if (a == 2)
                    //     {
                    //         goto end;
                    //     }
                    //     else
                    //     {
                    //         goto ask_again;
                    //     }
                    // end:
                    //     printf("~~~ Thanks for using this program ~~~\n");
                    //     printf("         ~~~ Visit Again ~~~\n");
                }
            }
        }
    }
    fclose(print_time);
    return 0;
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