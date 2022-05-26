#include <stdio.h>
#include <string.h>
#include "alphabet_func.c"
#include "rand.c"

#define MAX 30

int main()
{
    char name[MAX], c = randFunc(); // c = 36 for dollar symbol

    printf("Enter your name: ");
    gets(name);

    openFile();

    for (int i = 0; i < strlen(name); i++)
    {
        switch (name[i])
        {
        case 'A':
        case 'a':
            A(c);
            break;

        case 'B':
        case 'b':
            B(c);
            break;

        case 'C':
        case 'c':
            C(c);
            break;

        case 'D':
        case 'd':
            D(c);
            break;

        case 'E':
        case 'e':
            E(c);
            break;

        case 'F':
        case 'f':
            F(c);
            break;

        case 'G':
        case 'g':
            G(c);
            break;

        case 'H':
        case 'h':
            H(c);
            break;

        case 'I':
        case 'i':
            I(c);
            break;

        case 'J':
        case 'j':
            J(c);
            break;

        case 'K':
        case 'k':
            K(c);
            break;

        case 'L':
        case 'l':
            L(c);
            break;

        case 'M':
        case 'm':
            M(c);
            break;

        case 'N':
        case 'n':
            N(c);
            break;

        case 'O':
        case 'o':
            O(c);
            break;

        case 'P':
        case 'p':
            P(c);
            break;

        case 'Q':
        case 'q':
            Q(c);
            break;

        case 'R':
        case 'r':
            R(c);
            break;

        case 'S':
        case 's':
            S(c);
            break;

        case 'T':
        case 't':
            T(c);
            break;

        case 'U':
        case 'u':
            U(c);
            break;

        case 'V':
        case 'v':
            V(c);
            break;

        case 'W':
        case 'w':
            W(c);
            break;

        case 'X':
        case 'x':
            X(c);
            break;

        case 'Y':
        case 'y':
            Y(c);
            break;

        case 'Z':
        case 'z':
            Z(c);
            break;

        case '1':
            one(c);
            break;

        case '2':
            two(c);
            break;

        case '3':
            three(c);
            break;

        case '4':
            four(c);
            break;

        case '5':
            five(c);
            break;

        case '6':
            six(c);
            break;

        case '7':
            seven(c);
            break;

        case '8':
            eight(c);
            break;

        case '9':
            nine(c);
            break;

        case '0':
            zero(c);
            break;

        case ' ':
            Space();
            break;

        default:
            c = name[i];
            Def(c); //* Default value to be printed if anything other than alphabet is entered
            break;
        }
    }

    closeFile();
    return 0;
}