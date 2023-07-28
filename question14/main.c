#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Create a program that, given the number of the month, indicates how many days there are in that month.
    Use the switch case selection structure for this.
    Note: Consider February as having 28 days.
    */
    printf("Hello People!\n");

    //First part
    int numberOfMonth;
    printf("---------------------------------------------------------------------------------------");
    printf("\n\t\t\t Press a number you want to know the days of the month,Please: \n");
    printf("---------------------------------------------------------------------------------------");
    scanf("%d", &numberOfMonth);

    //Second Part
    switch(numberOfMonth){
        case 1 : printf("has 31 days");
        break;
        case 2 : printf("has 28 days");
        break;
        case 3 : printf("has 31 days");
        break;
        case 4 : printf("has 30 days");
        break;
        case 5 : printf("has 31 days");
        break;
        case 6 : printf("has 30 days");
        break;
        case 7 : printf("has 31 days");
        break;
        case 8 : printf("has 31 days");
        break;
        case 9 : printf("has 30 days");
        break;
        case 10 : printf("has 31 days");
        break;
        case 11 : printf("has 30 days");
        break;
        case 12 : printf("has 31 days");
        break;
        default :
            printf("invalid");
        break;
    }
    return 0;
}
