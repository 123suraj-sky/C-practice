#include <stdio.h>

int main()
{
    printf("*** Programme to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.\nCalculate percentage and grade\n\n");
    // Percentage >= 90 : Grade A
    // Percentage >= 80 : Grade B
    // Percentage >= 70 : Grade C
    // Percentage >= 60 : Grade D
    // Percentage >= 40 : Grade E
    // Percentage < 40 : Grade F

    int phy, chem, bio, math, comp;
    printf("Enter marks in physics\n");
    scanf("%d", &phy);
    printf("Enter marks in chemistry\n");
    scanf("%d", &chem);
    printf("Enter marks in biology\n");
    scanf("%d", &bio);
    printf("Enter marks in mathematics\n");
    scanf("%d", &math);
    printf("Enter marks in computer\n");
    scanf("%d", &comp);

    float marks;
    marks = phy + chem + bio + math + comp;

    float percentage;
    percentage = marks / 5;
    printf("Your percentage is %f\n", marks / 5);

    if((percentage >= 90) && (percentage <= 100)){
        printf("Your grade is A\n");
    }
    else if((percentage >= 80) && (percentage <= 100)){
        printf("Your grade is B\n");
    }
    else if((percentage >= 70) && (percentage <= 100)){
        printf("Your grade is C\n");
    }
    else if((percentage >= 60) && (percentage <= 100)){
        printf("Your grade is D\n");
    }
    else if((percentage >= 40) && (percentage <= 100)){
        printf("Your grade is E\n");
    }
    else if((percentage < 40) && (percentage <= 100)){
        printf("Your grade is F\n");
    }
    else{
        printf("Please enter your number out of 100\n");
    }
    return 0;
}