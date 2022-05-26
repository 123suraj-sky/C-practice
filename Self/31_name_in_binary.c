// Also try it for base R

#include <stdio.h>
#include <string.h>

void decimal_to_binary(char name);
void decimal_to_octal(char name);
void decimal_to_hexadecimal(char name);

int main()
{

    char name[20]; // string for storing name
    int choice;    // user chocie in which base he want to convert his name
    printf("Enter your name: ");
    gets(name);
    printf("\nIn which format you want to convert your name:-\n\
(1) binary\n\
(2) decimal\n\
(3) octal\n\
(4) hexadecimal\n");
    scanf("%d", &choice);

    printf("Your name is: %s\n\n", name);

ask_again: // again run switch statement if user goes for defalut statement
    switch (choice)
    {
    case 1:
        printf("Your name in binary:\n");
        for (int i = 0; i < strlen(name); i++) // each letter is represented by 7 no.s/charcters
            decimal_to_binary(name[i]);
        printf("\n");
        break;

    case 2:
        printf("Your name in decimal:\n");
        int i = 0;
        while (i < strlen(name))
        {
            if ((name[i] >= 65 && name[i] <= 90) || (name[i] >= 97 && name[i] <= 99)) // each letter is reserved for 3 characters/no.s
                printf("%d", 0);
            if (name[i] == 32) // in ASCII table decimal value corresponding to space charcter is 32
                printf("032"); // 032 --> 32 in decimal with 3 bit
            else
                printf("%d", name[i]);
            i++;
        }
        printf("\n");
        break;

    case 3:
        printf("Your name in octal:\n"); // each letter is reserved for 3 characters/no.s
        for (int i = 0; i < strlen(name); i++)
            decimal_to_octal(name[i]);
        printf("\n");
        break;

    case 4:
        printf("Your name in hexadecimal:\n"); // each letter is reserved for 2 characters/no.s
        for (int i = 0; i < strlen(name); i++)
            decimal_to_hexadecimal(name[i]);
        printf("\n");
        break;

    default:
        printf("Please enter correct choice:-\n");
        scanf("%d", &choice);
        goto ask_again;
        break;
    }

    return 0;
}

void decimal_to_binary(char name)
{
    long long decimal, tempDecimal;
    char binary[100];
    int index = 0;

    decimal = name; // assigning number in name to decimal for conversion
    tempDecimal = decimal; // Copy decimal value to temp variable

    while (tempDecimal > 0)
    {
        binary[index] = (tempDecimal % 2) + '0';
        tempDecimal /= 2;
        index++;
    }
    binary[index] = '\0';

    strrev(binary); // Reverse the converted binary to get final binary result

    if (name == 32) // in ASCII table decimal value corresponding to space charcter is 32
        printf("0100000"); // 0100000 --> 32 in binary with 7 bit
    else
        printf("%s", binary); 
}

void decimal_to_octal(char name)
{
    long long decimal, tempDecimal, octal = 0;
    int i, rem, place = 1;

    decimal = name; // assigning number in name to decimal for conversion
    tempDecimal = decimal; // Copy it to temp variable for further calculation

    // Decimal to octal conversion
    while (tempDecimal > 0)
    {
        rem = tempDecimal % 8;
        octal = (rem * place) + octal;
        tempDecimal /= 8;
        place *= 10;
    }

    if (name == 32) // in ASCII table decimal value corresponding to space charcter is 32
        printf("040"); // 040 --> 32 in octal with 3 bit
    else
        printf("%lld", octal);
}

void decimal_to_hexadecimal(char name)
{
    char HEXVALUE[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    long long decimal, tempDecimal;
    char hex[100];
    int index = 0, rem;

    decimal = name; // assigning number in name to decimal for conversion
    tempDecimal = decimal; // Copy it to temp variable for futher calculation

    while (tempDecimal != 0) // Decimal to hexadecimal conversion
    {
        rem = tempDecimal % 16;
        hex[index] = HEXVALUE[rem];
        tempDecimal /= 16;
        index++;
    }
    hex[index] = '\0';

    strrev(hex); // Reverse the obtained result

    if (name == 32) // in ASCII table decimal value corresponding to space charcter is 32
        printf("20"); // 20 --> 32 in hexadecimal with 2 bit
    else
        printf("%s", hex);
}