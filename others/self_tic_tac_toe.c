// check on this channel for similar type or same game in which goto is not used

#include <stdio.h>

// print matrix
void printMatrix();

// update matrix value
void insertValue(int i, int j, unsigned char user);

// check matrix full or not
unsigned char isFull();

// check game is completed or not
unsigned char isOver();

unsigned char mat[3][3] = {'_', '_', '_', '_', '_', '_', '_', '_', '_'};

unsigned char userTurn = 0;

int main()
{
    puts("*** Welcome to the \"TIC TAC TOE\" game ***\n");
    unsigned char user1[30], user2[30], winner;
    int ival, jval;

    printf("Enter name of Player 1: ");
    gets(user1);
    printf("Enter name of Player 2: ");
    gets(user2);

again:
    printMatrix();
    winner = isOver();

    if (winner)
    {
        printf("\n*** Congratulations %s\n ----- You have won the game! -----\n", ((winner == 'X') ? user1 : user2));
        goto end;
    }

    if (!isFull())
    {
        printf("\n *** Game Over ***\n");
        goto end;
    }

repeat:
    printf("\n*** Player (%s) turn, Enter value (00-22): \n", (userTurn == 0 ? user1 : user2));
    scanf("%d%d", &ival, &jval);

    if (ival > 2 || ival < 0 || jval > 2 || jval < 0)
    {
        printf("*** Error! Invalid indexes, Please try again!\n");
        goto repeat;
    }

    if (mat[ival][jval] != '_')
    {
        printf("*** Error!! Already filled, Please try again\n");
        goto repeat;
    }

    insertValue(ival, jval, userTurn);
    userTurn = !userTurn;
    goto again;

end:
    printf("\n");
    system("pause");
    return 0;
}

void printMatrix()
{
    system("cls");
    printf("\n\n");
    unsigned char i, j;
    for (i = 0; i < 3; i++)
    {
        printf("\t\t\t-----------------\n");
        printf("\t\t\t");
        for (j = 0; j < 3; j++)
        {
            printf("|%2c | ", mat[i][j]);
        }
        printf("\n");
        // printf("\t\t\t-----------------\n");
    }
}

void insertValue(int i, int j, unsigned char user)
{
    mat[i][j] = ((user == 0) ? 'X' : 'O');
}

unsigned char isFull()
{
    unsigned char i, j, count = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (mat[i][j] == '_')
            {
                ++count;
            }
        }
    }
    return count;
}

unsigned char isOver()
{
    unsigned char i, j, user;
    unsigned char storeChar = 0, dfStoreChar = 0, dsStoreChar = 0; // dfStoreChar for first diagonal and dsStoreChar is for second diagonal
    int sum = 0, dfSum = 0, dsSum = 0;                             // dfSum for sum of first diagonal and dsSum for sum of second diagonal

    // sum of 'X' + 'X' + 'X' = 264 and sum of 'O' + 'O'+ 'O' = 237 --> Sum of ASCII values of 'X' and 'O'

    // case 1 --> for horizontal
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            if (mat[i][j] == '_')
            {
                break;
            }
            sum += mat[i][j];
            storeChar = mat[i][j];
        }
        if (sum == 237 || sum == 264)
        {
            return storeChar;
        }
    }

    // case 2 --> for vertical
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            if (mat[j][i] == '_')
            {
                break;
            }
            sum += mat[j][i];
            storeChar = mat[j][i];
        }
        if (sum == 237 || sum == 264)
        {
            return storeChar;
        }
    }

    // case 3 --> for diagonal 1 main diagonal
    for (i = 0; i < 3; i++)
    {
        // first diagonal --> main diagonal
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                if (mat[j][i] == '_')
                {
                    break;
                }
                dfSum += mat[j][i];
                dfStoreChar = mat[j][i];
            }
        }
        if (sum == 237 || sum == 264)
        {
            return storeChar;
        }

        // second digaonal
        for (j = 3; j > 0; j--)
        {
            if (i == 2 - j + 1)
            {
                if (mat[i][j - 1] == '_')
                {
                    break;
                }
                dsSum += mat[i][j - 1];
                dsStoreChar = mat[i][j - 1];
            }
        }
        if (dfSum == 237 || dfSum == 264)
        {
            return dfStoreChar;
        }
        else if (dsSum == 237 || dsSum == 264)
        {
            return dsStoreChar;
        }

        return 0;
    }
}