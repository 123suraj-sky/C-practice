//! Modified from "14-to_convert_decimal_to_binary_number_system_using_bitwise_operator.c"
#define INT_SIZE sizeof(int) * 8 // size of int in bits

void convertToBinary(int num)
{
    int index, bin[INT_SIZE], temp = num;

    index = INT_SIZE - 1;

    while (index >= 0)
    {
        // Store LSB of num to bin
        bin[index] = num & 1;

        // Decrement index
        index--;

        // Right Shift num by 1
        num >>= 1;
    }

    int result = bin[INT_SIZE - 1] | 0;
    if (result == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}