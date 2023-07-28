#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    A user wants a program where he can choose what kind of average he wants to calculate
    from three grades.Make a program that reads the grades and the type of average chosen
    by the user and calculates and displays the average:
Options:
• 'a' - Arithmetic.
• 'p' - Weighted (weights: 3,3,4).
    */
    printf("Hello Guys!\n");

    //First Part
    int choice;
    float grade1,grade2,grade3,yourGrade = 0 ;
    printf("\n----------------------------------------------------------------------------------------------------------\n");
    printf("\n\t\t\t\t Choose: 1) -> Arithmetic\n\t\t\t\t 2) -> Weighted\n and three grades: ");
    printf("\n----------------------------------------------------------------------------------------------------------\n");
    scanf("%d %f %f %f", &choice, &grade1, &grade2, &grade3);

    //Second Part
    switch(choice){
        case 1 :
            yourGrade = (grade1 + grade2 + grade3)/3;
            printf("\n %.2f", yourGrade);
        break;
        case 2 :
            yourGrade = ((grade1 * 3) + (grade2 *3)+ (grade3 *4) )/10;
            printf("\n %.2f", yourGrade);
        break;
        default : printf("invalid");
        break;
    }

    return 0;
}
