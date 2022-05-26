#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin()
{
    int n;              // n for random number
    n = rand() % 2 + 1; // generate a random number 1 or 2
    return n;
}

int main()
{
    int no_of_coin; // no_of_coin is for number of dice user want to throw

    printf("*** Welcome to the program ***\n");
    puts("This is a program for tossing a coin\n");

    printf("How many coin you want to throw?\n");
    scanf("%d", &no_of_coin);

    // srand((unsigned) time(NULL));
    srand(time(0));

    for (int i = 0; i < no_of_coin; i++)
    {
        if (coin() == 1)
            printf("From coin %d you got HEAD\n", i + 1);
        else
            printf("From coin %d you got TAIL\n", i + 1);
    }

    system("pause");
    system("cls");
    system("24_create_a_coin_by_using_random_number_generator.exe");

    return 0;
}