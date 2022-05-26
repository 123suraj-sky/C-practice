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

unsigned char mat[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

unsigned char userTurn = 0;

int main()
{
    unsigned char user1[30], user2[30], winner;
    int ival, jval;
    int userInput;

    printf("Enter name of Player 1: ");
    scanf("%s", &user1);
    printf("Enter name of Player 2: ");
    scanf("%s", &user2);

again:
    printf("\n\n");
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
    printf("*** Player (%s) turn, Enter value (00-22): \n", (userTurn == 0 ? user1 : user2));
    // scanf("%d%d", &ival, &jval);
    scanf("%d", &userInput);

    // if (ival > 2 || ival < 0 || jval > 2 || jval < 0)
    if(userInput < 1 || userInput > 9)
    {
        printf("*** Error! Invalid indexes, Please try again! ***\n");
        goto repeat;
    }
// modifty from here and the below if condition
    if (mat[ival][jval] != '1' && mat[ival][jval] != '2' && mat[ival][jval] != '3' && mat[ival][jval] != '4' && mat[ival][jval] != '5' && mat[ival][jval] != '6' && mat[ival][jval] != '7' && mat[ival][jval] != '8' && mat[ival][jval] != '9')
    {
        printf("*** Error!! Already filled, Please try again\n");
        goto repeat;
    }

    insertValue(ival, jval, userTurn);
    userTurn = !userTurn;
    goto again;

end:
    printf("\n");
    return 0;
}

void printMatrix()
{
    // system("cls");
    unsigned char i, j;
    for (i = 0; i < 3; i++)
    {
        printf("\t\t\t-------------------\n");
        printf("\t\t\t");
        for (j = 0; j < 3; j++)
        {
            if (j == 0 || j == 1)
                printf("| %2c  ", mat[i][j]);
            else
                printf("| %2c  | ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\t\t\t-------------------\n");
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
            if (mat[i][j] == '1' || mat[i][j] == '2' || mat[i][j] == '3' || mat[i][j] == '4' || mat[i][j] == '5' || mat[i][j] == '6' || mat[i][j] == '7' || mat[i][j] == '8' || mat[i][j] == '9')
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