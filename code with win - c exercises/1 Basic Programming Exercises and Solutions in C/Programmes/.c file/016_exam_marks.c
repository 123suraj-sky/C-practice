#include <stdio.h>

int main(){
    printf("Programme for finding total marks, average and percentage of a student ***\n\n");

    // All marks given out of 100

    int phy, chem, math, eng, hin;
    printf("Enter the marks obtained in physics\n");
    scanf("%d", &phy);
    printf("Enter the marks obtained in chemistry\n");
    scanf("%d", &chem);
    printf("Enter the marks obtained in maths\n");
    scanf("%d", &math);
    printf("Enter the marks obtained in english\n");
    scanf("%d", &eng);
    printf("Enter the marks obtained in hindi\n");
    scanf("%d", &hin);

    float total;
    total = phy + chem + math + eng + hin;
    printf("Your total marks is %f out of 500\n", total);

    float average;
    average = total / 5;
    printf("Your average score is %f\n", average);
    printf("Your percentage is %f\n", average);
    return 0;
}