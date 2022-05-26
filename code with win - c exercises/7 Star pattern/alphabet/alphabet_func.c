FILE *alp;

void openFile()
{
    alp = fopen("alphabet.txt", "w");
    printf("\n");
}

void A(char c)
{
    printf(" %c%c%c \n", c, c, c);
    printf("%c   %c\n", c, c);
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("%c   %c\n", c, c);
    printf("%c   %c\n\n", c, c);

    fprintf(alp, " %c%c%c \n", c, c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c   %c\n\n", c, c);
}

void B(char c)
{
    printf("%c%c%c%c\n", c, c, c, c);
    printf("%c   %c\n", c, c);
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("%c   %c\n", c, c);
    printf("%c%c%c%c\n\n", c, c, c, c);

    fprintf(alp, "%c%c%c%c\n", c, c, c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c%c%c%c\n\n", c, c, c, c);
}

void C(char c)
{
    printf(" %c%c%c%c\n", c, c, c, c);
    printf("%c\n", c);
    printf("%c\n", c);
    printf("%c\n", c);
    printf(" %c%c%c%c\n\n", c, c, c, c);

    fprintf(alp, " %c%c%c%c\n", c, c, c, c);
    fprintf(alp, "%c\n", c);
    fprintf(alp, "%c\n", c);
    fprintf(alp, "%c\n", c);
    fprintf(alp, " %c%c%c%c\n\n", c, c, c, c);
}

void D(char c)
{
    printf("%c%c%c%c\n", c, c, c, c);
    printf("%c   %c\n", c, c);
    printf("%c   %c\n", c, c);
    printf("%c   %c\n", c, c);
    printf("%c%c%c%c\n\n", c, c, c, c);

    fprintf(alp, "%c%c%c%c\n", c, c, c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c%c%c%c\n\n", c, c, c, c);
}

void E(char c)
{
    printf(" %c%c%c%c\n", c, c, c, c);
    printf("%c    \n", c);
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("%c    \n", c);
    printf(" %c%c%c%c\n\n", c, c, c, c);

    fprintf(alp, " %c%c%c%c\n", c, c, c, c);
    fprintf(alp, "%c    \n", c);
    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "%c    \n", c);
    fprintf(alp, " %c%c%c%c\n\n", c, c, c, c);
}

void F(char c)
{
    printf(" %c%c%c%c\n", c, c, c, c);
    printf("%c   \n", c, c);
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("%c\n", c, c);
    printf("%c\n\n", c, c, c, c);

    fprintf(alp, " %c%c%c%c\n", c, c, c, c);
    fprintf(alp, "%c   \n", c, c);
    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "%c\n", c, c);
    fprintf(alp, "%c\n\n", c, c, c, c);
}

void G(char c)
{
    printf(" %c%c%c%c\n", c, c, c, c);
    printf("%c\n", c);
    printf("%c  %c%c\n", c, c, c);
    printf("%c   %c\n", c, c);
    printf(" %c%c%c%c\n\n", c, c, c, c);

    fprintf(alp, " %c%c%c%c\n", c, c, c, c);
    fprintf(alp, "%c\n", c);
    fprintf(alp, "%c  %c%c\n", c, c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, " %c%c%c%c\n\n", c, c, c, c);
}

void H(char c)
{
    printf("%c   %c\n", c, c);
    printf("%c   %c\n", c, c);
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("%c   %c\n", c, c);
    printf("%c   %c\n\n", c, c);

    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c   %c\n\n", c, c);
}

void I(char c)
{
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("  %c\n", c);
    printf("  %c\n", c);
    printf("  %c\n", c);
    printf("%c%c%c%c%c\n\n", c, c, c, c, c);

    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "  %c\n", c);
    fprintf(alp, "  %c\n", c);
    fprintf(alp, "  %c\n", c);
    fprintf(alp, "%c%c%c%c%c\n\n", c, c, c, c, c);
}

void J(char c)
{
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("   %c\n", c);
    printf("   %c\n", c);
    printf("%c  %c\n", c, c);
    printf(" %c%c\n\n", c, c);

    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "   %c\n", c);
    fprintf(alp, "   %c\n", c);
    fprintf(alp, "%c  %c\n", c, c);
    fprintf(alp, " %c%c\n\n", c, c);
}

void K(char c)
{
    printf("%c   %c\n", c, c, c, c);
    printf("%c %c\n", c, c);
    printf("%c%c\n", c, c);
    printf("%c %c\n", c, c);
    printf("%c   %c\n\n", c, c, c, c);

    fprintf(alp, "%c   %c\n", c, c, c, c);
    fprintf(alp, "%c %c\n", c, c);
    fprintf(alp, "%c%c\n", c, c);
    fprintf(alp, "%c %c\n", c, c);
    fprintf(alp, "%c   %c\n\n", c, c, c, c);
}

void L(char c)
{
    printf("%c\n", c);
    printf("%c\n", c);
    printf("%c\n", c);
    printf("%c\n", c);
    printf(" %c%c%c%c\n\n", c, c, c, c);

    fprintf(alp, "%c\n", c);
    fprintf(alp, "%c\n", c);
    fprintf(alp, "%c\n", c);
    fprintf(alp, "%c\n", c);
    fprintf(alp, " %c%c%c%c\n\n", c, c, c, c);
}

void M(char c)
{
    printf(" %c%c%c\n", c, c, c);
    printf("%c %c %c\n", c, c, c);
    printf("%c %c %c\n", c, c, c);
    printf("%c   %c\n", c, c);
    printf("%c   %c\n\n", c, c);

    fprintf(alp, " %c%c%c\n", c, c, c);
    fprintf(alp, "%c %c %c\n", c, c, c);
    fprintf(alp, "%c %c %c\n", c, c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c   %c\n\n", c, c);
}

void N(char c)
{
    printf("%c   %c\n", c, c);
    printf("%c%c  %c\n", c, c, c);
    printf("%c %c %c\n", c, c, c);
    printf("%c  %c%c\n", c, c, c);
    printf("%c   %c\n\n", c, c);

    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c%c  %c\n", c, c, c);
    fprintf(alp, "%c %c %c\n", c, c, c);
    fprintf(alp, "%c  %c%c\n", c, c, c);
    fprintf(alp, "%c   %c\n\n", c, c);
}

void O(char c)
{
    printf(" %c%c%c\n", c, c, c);
    printf("%c   %c\n", c, c);
    printf("%c   %c\n", c, c);
    printf("%c   %c\n", c, c);
    printf(" %c%c%c\n\n", c, c, c);

    fprintf(alp, " %c%c%c\n", c, c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, " %c%c%c\n\n", c, c, c);
}

void P(char c)
{
    printf("%c%c%c%c\n", c, c, c, c);
    printf("%c   %c\n", c, c);
    printf("%c%c%c%c\n", c, c, c, c);
    printf("%c\n", c);
    printf("%c\n\n", c);

    fprintf(alp, "%c%c%c%c\n", c, c, c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c%c%c%c\n", c, c, c, c);
    fprintf(alp, "%c\n", c);
    fprintf(alp, "%c\n\n", c);
}

void Q(char c)
{
    printf(" %c%c%c\n", c, c, c);
    printf("%c   %c\n", c, c);
    printf("%c   %c\n", c, c);
    printf(" %c%c%c%c\n", c, c, c, c);
    printf("     %c\n\n", c);

    fprintf(alp, " %c%c%c\n", c, c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, " %c%c%c%c\n", c, c, c, c);
    fprintf(alp, "     %c\n\n", c);
}

void R(char c)
{
    printf("%c%c%c%c\n", c, c, c, c);
    printf("%c   %c\n", c, c);
    printf("%c%c%c%c\n", c, c, c, c, c);
    printf("%c  %c\n", c, c);
    printf("%c   %c\n\n", c, c, c, c);

    fprintf(alp, "%c%c%c%c\n", c, c, c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "%c  %c\n", c, c);
    fprintf(alp, "%c   %c\n\n", c, c, c, c);
}

void S(char c)
{
    printf(" %c%c%c%c\n", c, c, c, c);
    printf("%c    \n", c);
    printf(" %c%c%c\n", c, c, c);
    printf("    %c\n", c);
    printf("%c%c%c%c\n\n", c, c, c, c);

    fprintf(alp, " %c%c%c%c\n", c, c, c, c);
    fprintf(alp, "%c    \n", c);
    fprintf(alp, " %c%c%c\n", c, c, c);
    fprintf(alp, "    %c\n", c);
    fprintf(alp, "%c%c%c%c\n\n", c, c, c, c);
}

void T(char c)
{
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("  %c\n", c);
    printf("  %c\n", c);
    printf("  %c\n", c);
    printf("  %c\n\n", c, c, c, c, c);

    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "  %c\n", c);
    fprintf(alp, "  %c\n", c);
    fprintf(alp, "  %c\n", c);
    fprintf(alp, "  %c\n\n", c, c, c, c, c);
}

void U(char c)
{
    printf("%c   %c\n", c, c);
    printf("%c   %c\n", c, c);
    printf("%c   %c\n", c, c);
    printf("%c   %c\n", c, c);
    printf(" %c%c%c\n\n", c, c, c);

    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, " %c%c%c\n\n", c, c, c);
}

void V(char c)
{
    printf("%c     %c\n", c, c);
    printf("%c     %c\n", c, c);
    printf(" %c   %c\n", c, c);
    printf("  %c %c\n", c, c);
    printf("   %c\n\n", c);

    fprintf(alp, "%c     %c\n", c, c);
    fprintf(alp, "%c     %c\n", c, c);
    fprintf(alp, " %c   %c\n", c, c);
    fprintf(alp, "  %c %c\n", c, c);
    fprintf(alp, "   %c\n\n", c);
}

void W(char c)
{
    printf("%c   %c\n", c, c);
    printf("%c   %c\n", c, c);
    printf("%c %c %c\n", c, c, c);
    printf("%c %c %c\n", c, c, c);
    printf(" %c%c%c\n\n", c, c, c);

    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c %c %c\n", c, c, c);
    fprintf(alp, "%c %c %c\n", c, c, c);
    fprintf(alp, " %c%c%c\n\n", c, c, c);
}

void X(char c)
{
    printf("%c   %c\n", c, c, c);
    printf(" %c %c\n", c, c, c);
    printf("  %c\n", c, c, c);
    printf(" %c %c\n", c, c);
    printf("%c   %c\n\n", c, c);

    fprintf(alp, "%c   %c\n", c, c, c);
    fprintf(alp, " %c %c\n", c, c, c);
    fprintf(alp, "  %c\n", c, c, c);
    fprintf(alp, " %c %c\n", c, c);
    fprintf(alp, "%c   %c\n\n", c, c);
}

void Y(char c)
{
    printf("%c   %c\n", c, c, c);
    printf(" %c %c\n", c, c, c);
    printf("  %c\n", c, c, c);
    printf("  %c\n", c, c);
    printf("  %c\n\n", c, c);

    fprintf(alp, "%c   %c\n", c, c, c);
    fprintf(alp, " %c %c\n", c, c, c);
    fprintf(alp, "  %c\n", c, c, c);
    fprintf(alp, "  %c\n", c, c);
    fprintf(alp, "  %c\n\n", c, c);
}

void Z(char c)
{
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("   %c\n", c);
    printf("  %c\n", c, c, c);
    printf(" %c\n", c, c);
    printf("%c%c%c%c%c\n\n", c, c, c, c, c, c);

    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "   %c\n", c);
    fprintf(alp, "  %c\n", c, c, c);
    fprintf(alp, " %c\n", c, c);
    fprintf(alp, "%c%c%c%c%c\n\n", c, c, c, c, c, c);
}

void one(char c)
{
    printf("  %c\n", c);
    printf(" %c%c\n", c, c);
    printf("%c %c\n", c, c);
    printf("  %c\n", c);
    printf("%c%c%c%c%c\n\n", c, c, c, c, c);

    fprintf(alp, "  %c\n", c);
    fprintf(alp, " %c%c\n", c, c);
    fprintf(alp, "%c %c\n", c, c);
    fprintf(alp, "  %c\n", c);
    fprintf(alp, "%c%c%c%c%c\n\n", c, c, c, c, c);
}

void two(char c)
{
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("    %c\n", c);
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("%c\n", c);
    printf("%c%c%c%c%c\n\n", c, c, c, c, c);

    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "    %c\n", c);
    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "%c\n", c);
    fprintf(alp, "%c%c%c%c%c\n\n", c, c, c, c, c);
}

void three(char c)
{
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("    %c\n", c);
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("    %c\n", c);
    printf("%c%c%c%c%c\n\n", c, c, c, c, c);

    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "    %c\n", c);
    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "    %c\n", c);
    fprintf(alp, "%c%c%c%c%c\n\n", c, c, c, c, c);
}

void four(char c)
{
    printf("%c   %c\n", c, c);
    printf("%c   %c\n", c, c);
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("    %c\n", c);
    printf("    %c\n\n", c);

    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "    %c\n", c);
    fprintf(alp, "    %c\n\n", c);
}

void five(char c)
{
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("%c\n", c);
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("    %c\n", c);
    printf("%c%c%c%c%c\n\n", c, c, c, c, c);

    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "%c\n", c);
    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "    %c\n", c);
    fprintf(alp, "%c%c%c%c%c\n\n", c, c, c, c, c);
}

void six(char c)
{
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("%c\n", c, c);
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("%c   %c\n", c, c);
    printf("%c%c%c%c%c\n\n", c, c, c, c, c);

    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "%c\n", c, c);
    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c%c%c%c%c\n\n", c, c, c, c, c);
}

void seven(char c)
{
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("   %c\n", c);
    printf(" %c%c%c\n", c, c, c);
    printf(" %c\n", c);
    printf("%c\n\n", c);

    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "   %c\n", c);
    fprintf(alp, " %c%c%c\n", c, c, c);
    fprintf(alp, " %c\n", c);
    fprintf(alp, "%c\n\n", c);
}

void eight(char c)
{
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("%c   %c\n", c, c);
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("%c   %c\n", c, c);
    printf("%c%c%c%c%c\n\n", c, c, c, c, c);

    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c%c%c%c%c\n\n", c, c, c, c, c);
}

void nine(char c)
{
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("%c   %c\n", c, c);
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("    %c\n", c);
    printf("    %c\n\n", c);

    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "    %c\n", c);
    fprintf(alp, "    %c\n\n", c);
}

void zero(char c)
{
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf("%c   %c\n", c, c);
    printf("%c   %c\n", c, c);
    printf("%c   %c\n", c, c);
    printf("%c%c%c%c%c\n\n", c, c, c, c, c);

    fprintf(alp, "%c%c%c%c%c\n", c, c, c, c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c   %c\n", c, c);
    fprintf(alp, "%c%c%c%c%c\n\n", c, c, c, c, c);
}

void Space()
{
    printf("\n\n\n\n\n");
    fprintf(alp, "\n\n\n\n\n");
}

void Def(char c) //* default value to be printed
{
    printf("You have entered %c\nPlease enter only alphabet and numbers!!!\n\n", c);
    fprintf(alp, "You have entered %c\nPlease enter only alphabet and numbers!!!\n\n", c);
}

void closeFile()
{
    fclose(alp);
}
