#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Create a program that allows the user to choose between converting
    the exchange rate from Real to Dollar or from Dollar to Real.
    Use as exchange rate $1 equal to R$5.30.
    */
    printf("Hello Guys!\n");

    //First Part
    float value;
    int choose;
    printf("--------------------------------------------------------------------------------------------------------");
    printf("\n\t\t\tChoose which conversion you want to do!\n");
    printf("\n\t\t\t 1) Dollar -> Real\n");
    printf("\n\t\t\t 2) Real -> Dollar\n");
    printf("--------------------------------------------------------------------------------------------------------");
    scanf("\n%d %f", &choose, &value);

    // Second part
    switch(choose){
        case 1 :
            value = value*5.3;
            printf("\n%.2f\n",value);
             printf("--------------------------------------------------------------------------------------------------------");
        break;
        case 2:
             value = value/5.3;
             printf("\n%.2f\n",value);
              printf("--------------------------------------------------------------------------------------------------------");
        break;
        default : printf("Invalid choice");
    }
    return 0;
}
