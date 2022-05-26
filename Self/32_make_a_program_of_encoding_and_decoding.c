#include <stdio.h>
#include <string.h>

int main()
{
    char string[1000]; // string for encoding and decoding
    int number_of_times;

    printf("Enter the string:\n");
    gets(string);

    printf("Enter number of times you want to encode the code: ");
    scanf("%d", &number_of_times);

    // encoding
    for (int i = 0; i < strlen(string); i++)
    {
        for (int j = 0; j < number_of_times; j++)
        {
            string[i] = string[i] + i;
        }
    }

    puts("Encoded string is:");
    puts(string);

    // decoding
    for (int i = 0; i < strlen(string); i++)
    {
        for (int j = 0; j < number_of_times; j++)
        {
            string[i] = string[i] - i;
        }
    }

    puts("Decoded string is:");
    puts(string);

    return 0;
}