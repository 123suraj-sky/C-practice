#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice()
{
    int n;              // n for random number
    n = rand() % 6 + 1; // generate a random number from 1 to 6
    return n;
}

int main()
{
    int no_of_dice; // no_of_dice is for number of dice user want to throw

    printf("*** Welcome to the program ***\n");
    puts("This is a program for throwing a dice\n");

    printf("How many dice you want to throw?\n");
    scanf("%d", &no_of_dice);

    // srand((unsigned) time(NULL));
    srand(time(0));

    for (int i = 0; i < no_of_dice; i++)
        printf("From dice %d you got %d\n", i + 1, dice());

    system("pause");
    system("cls");
    system("23_create_a_dice_by_using_random_number_generator.exe");

    return 0;
}