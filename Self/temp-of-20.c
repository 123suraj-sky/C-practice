// Modify this program such that it will ask user from which quantity you want to convert. For eg. if user select litre, then, it will call a function which includes all quantity in which conversion is possible.
// For eg. if user select litre, it calls function that is written mililitre, decilitre, ...

#include <stdio.h>

int main()
{
    printf("*** Program for unit conversion ***\n\n");
    double user_input; // for value storing entered by the user
    double result;     // for final resultating value
    int select;        // user will select which function he want to use

ask_again: // again ask user to enter the input b/c he entered correct value in default case
    printf("Which quantity you want to convert?\n\
(1) litre to mililitre\n\
(2) litre to decilitre\n\
(3) litre to decalitre\n\
(4) litre to centilitre\n\
(5) litre to metre cube\n\
(6) litre to centimetre cube\n\
(7) mililitre to litre\n\
(8) decilitre to litre\n\
(9) decalitre to litre\n\
(10) centilitre to litre\n\
(11) metre cube to litre\n\
(12) centimetre cube to litre\n\
(13) metre to centimetre\n\
(14) metre to decimetre\n\
(15) metre to decametre\n\
(16) metre to milimetre\n\
(17) metre to kilometre\n\
(18) litre to kilolitre\n\
(19) centimetre to metre\n\
(20) decimetre to metre\n\
(21) decametre to metre\n\
(22) milimetre to metre\n\
(23) kilometre to metre\n\
(24) kilolitre to litre\n");
    scanf("%d", &select);

    printf("Enter its value: ");
    scanf("%lf", &user_input);

    if (select == 1)
        printf("%lf litre = %lf mililitre\n", user_input, user_input * 1000); // 1 litre = 1000 mililitre
    else if (select == 2)
        printf("%lf litre = %lf decilitre\n", user_input, user_input * 10); // 1 litre = 10 decilitre
    else if (select == 3)
        printf("%lf litre = %lf decalitre\n", user_input, user_input * 0.1); // 1 litre = 0.1 decalitre
    else if (select == 4)
        printf("%lf litre = %lf centilitre\n", user_input, user_input * 100); // 1 litre = 100 centilitre
    else if (select == 5)
        printf("%lf litre = %lf metre cube\n", user_input, user_input * 0.001); // 1 litre = 0.001 metre cube
    else if (select == 6)
        printf("%lf litre = %lf centimetre cube\n", user_input, user_input * 1000); // 1 litre = 1000 centimetre cube
    else if (select == 7)
        printf("%lf mililitre = %lf litre\n", user_input, user_input / 1000); // 1 mililitre = 0.001 litre
    else if (select == 8)
        printf("%lf decilitre = %lf litre\n", user_input, user_input / 10); // 1 decilitre = 0.1 litre
    else if (select == 9)
        printf("%lf decalitre = %lf litre\n", user_input, user_input / 0.1); // 1 decalitre = 10 litre
    else if (select == 10)
        printf("%lf centilitre = %lf litre\n", user_input, user_input / 100); // 1 centilitre = 0.01 litre
    else if (select == 11)
        printf("%lf metre cube = %lf litre\n", user_input, user_input / 0.001); // 1 metre cube = 1000 litre
    else if (select == 12)
        printf("%lf centimetre cube = %lf litre\n", user_input, user_input / 1000); // 1 centimetre cube = 0.001 litre
    else if (select == 13)
        printf("%lf metre = %lf centimetre\n", user_input, user_input * 100); // 1 metre = 100 centimetre
    else if (select == 14)
        printf("%lf metre = %lf decimetre\n", user_input, user_input * 10); // 1 metre = 10 decimetre
    else if (select == 15)
        printf("%lf metre = %lf decametre\n", user_input, user_input * 0.1); // 1 metre = 0.1 decametre
    else if (select == 16)
        printf("%lf metre = %lf milimetre\n", user_input, user_input * 1000); // 1 metre = 1000 milimetre
    else if (select == 17)
        printf("%lf metre = %lf kilometre\n", user_input, user_input * 0.001); // 1 metre = 0.001 kilometre
    else if (select == 18)
        printf("%lf litre = %lf kilolitre\n", user_input, user_input * 0.001); // 1 litre = 0.001 kilolitre
    else if (select == 19)
        printf("%lf centimetre = %lf metre\n", user_input, user_input * 0.01); // 1 centimetre = 0.01 metre
    else if (select == 20)
        printf("%lf decimetre = %lf metre\n", user_input, user_input * 0.1); // 1 decimetre = 0.1 metre
    else if (select == 21)
        printf("%lf decametre = %lf metre\n", user_input, user_input * 10); // 1 decametre = 10 metre
    else if (select == 22)
        printf("%lf milimetre = %lf metre\n", user_input, user_input * 0.001); // 1 milimetre = 0.001 metre
    else if (select == 23)
        printf("%lf kilometre = %lf metre\n", user_input, user_input * 1000); // 1 kilometre = 1000 metre
    else if (select == 24)
        printf("%lf kilolitre = %lf litre\n", user_input, user_input * 1000); // 1 kilolitre = 1000 litre
    else
    {
        system("cls");
        printf("Press Ctrl + C to exit\n\n");
        printf("\nError!! Please enter the correct choice: \n\n");
        goto ask_again;
    }

    system("pause");
    system("cls");
    printf("Press Ctrl + C to exit\n\n");
    system("20_unit_conversion.exe");
    return 0;
}

/* 
3) kg to g and vice versa, also check for deci, deca, centi, etc...
5) degree celsius to farenheit, kelvin and vice versa
    (a) (0C * 9/5) + 32 = 32F
    (b) 0C + 273.15 = 273.15K
    (c) (32F - 32) * 5/9 + 273.15 = 273.15K
6) degree to radian
    (a) 1 Deg * pi/180 = 0.01745 Rad
    (b) 1 Rad * 180/pi = 57.296 Deg
7) 1 km = 10^3 meter = 10^5 cm = 10^6 mm = 10^9 micrometers = 10^12 nanometre = 0.621371 mile = 1093.61 yard = 3280.84 foot = 39370.1 inch = 0.5399587 nauticle mile

*/