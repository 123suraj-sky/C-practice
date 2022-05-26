#include <stdio.h>
#include <stdlib.h>
// function to calculate current age
void age(int present_date, int present_month, int present_year, int birth_date, int birth_month, int birth_year)
{
    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (birth_date > present_date)
    {
        present_date = present_date + month[birth_month - 1];
        present_month = present_month - 1;
    }
    if (birth_month > present_month)
    {
        present_year = present_year - 1;
        present_month = present_month + 12;
    }
    int final_date = present_date - birth_date;
    int final_month = present_month - birth_month;
    int final_year = present_year - birth_year;
    printf("Present Age: %d years %d months %d days\n", final_year, final_month, final_date);
}
int main()
{
    int present_date = 24;
    int present_month = 11;
    int present_year = 2021;
    int birth_date = 15;
    int birth_month = 6;
    int birth_year = 2001;
    age(present_date, present_month, present_year, birth_date, birth_month, birth_year);
    return 0;
}