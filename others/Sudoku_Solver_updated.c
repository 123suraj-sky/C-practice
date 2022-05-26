#include <stdio.h>

#define SIZE 9

//sudoku problem
int matrix[9][9];
//function to print sudoku
void print_sudoku()
{
    int i, j;
    printf("\nThe solution of the above sudoku is:-\n");
    printf("|-----------------------------|\n");
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            // if ((i == (SIZE / 3) && j == 0))
            if (i == 3 && j == 0)
            {
                printf("|-----------------------------|\n");
            }

            if (i == 6 && j == 0)
            {
                printf("|-----------------------------|\n");
            }

            if (j == 0)
            {
                printf("| %d ", matrix[i][j]);
            }
            else if (j == 2 || j == 5 || j == 8)
            {
                printf(" %d |", matrix[i][j]);
            }

            else
            {
                printf(" %d ", matrix[i][j]);
            }
        }
        printf("\n");
        printf("|         |         |         |\n"); // 9 * 3 white spaces
        // printf("|\n");
    }
    printf("|-----------------------------|\n");
}

//function to check if all cells are assigned or not
//if there is any unassigned cell
//then this function will change the values of
//row and col accordingly
int number_unassigned(int *row, int *col)
{
    int num_unassign = 0;
    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            //cell is unassigned
            if (matrix[i][j] == 0)
            {
                //changing the values of row and col
                *row = i;
                *col = j;
                //there is one or more unassigned cells
                num_unassign = 1;
                return num_unassign;
            }
        }
    }
    return num_unassign;
}

//function to check if we can put a
//value in a paticular cell or not
int is_safe(int n, int r, int c)
{
    int i, j;
    //checking in row
    for (i = 0; i < SIZE; i++)
    {
        //there is a cell with same value
        if (matrix[r][i] == n)
            return 0;
    }
    //checking column
    for (i = 0; i < SIZE; i++)
    {
        //there is a cell with the value equal to i
        if (matrix[i][c] == n)
            return 0;
    }
    //checking sub matrix
    int row_start = (r / 3) * 3;
    int col_start = (c / 3) * 3;
    for (i = row_start; i < row_start + 3; i++)
    {
        for (j = col_start; j < col_start + 3; j++)
        {
            if (matrix[i][j] == n)
                return 0;
        }
    }
    return 1;
}

//function to solve sudoku
//using backtracking
int solve_sudoku()
{
    int row;
    int col;
    //if all cells are assigned then the sudoku is already solved
    //pass by reference because number_unassigned will change the values of row and col
    if (number_unassigned(&row, &col) == 0)
        return 1;
    int n, i;
    //number between 1 to 9
    for (i = 1; i <= SIZE; i++)
    {
        //if we can assign i to the cell or not
        //the cell is matrix[row][col]
        if (is_safe(i, row, col))
        {
            matrix[row][col] = i;
            //backtracking
            if (solve_sudoku())
                return 1;
            //if we can't proceed with this solution
            //reassign the cell
            matrix[row][col] = 0;
        }
    }
    return 0;
}

int main()
{
    printf("Enter the sudoku elements row wise:-\n\
(Enter zero for the empty places)\n");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("Enter element number coulumn %d, row %d --> ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe entered sudoku puzzle is:-\n");
    printf("|-----------------------------|\n");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            // if ((i == (SIZE / 3) && j == 0))
            if (i == 3 && j == 0)
            {
                printf("|-----------------------------|\n");
            }

            if (i == 6 && j == 0)
            {
                printf("|-----------------------------|\n");
            }

            if (j == 0)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][j] = '_';
                    printf("| %c ", matrix[i][j]);
                }
                else
                {
                    printf("| %d ", matrix[i][j]);
                }
            }
            else if (j == 2 || j == 5 || j == 8)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][j] = '_';
                    printf(" %c |", matrix[i][j]);
                }
                else
                {
                    printf(" %d |", matrix[i][j]);
                }
            }
            else
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][j] = '_';
                    printf(" %c ", matrix[i][j]);
                }
                else
                {
                    printf(" %d ", matrix[i][j]);
                }
            }
        }
        printf("\n");
        printf("|         |         |         |\n"); // 9 * 3 white spaces
    }
    printf("|-----------------------------|\n");

    // assigning matrix[i][j] = '.' to matrix[i][j] = 0
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (matrix[i][j] == '_')
            {
                matrix[i][j] = 0;
            }
        }
    }

    if (solve_sudoku())
        print_sudoku();
    else
        printf("No solution\n");
    return 0;
}