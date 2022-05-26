#include <stdio.h>
#include <string.h>

int main()
{
    char user[20], given_word[20] = "word"; // Write your "word" here to practice
    printf("Start writing the word: %s\n\n", given_word);
    int correct_word = 0, incorrect_word = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%s", user);
        if (strcmp(user, given_word) == 0)
        {
            printf("\t:Correct\n");
            correct_word++;
        }
        else
        {
            printf("\t:Incorrect\n");
            incorrect_word++;
        }
    }

    printf("\nYou have typed %d times correct and %d times incorrect\n", correct_word, incorrect_word);
    return 0;
}