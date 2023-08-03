#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Write a program that asks the user for numbers.
    When the user types the number 0 (zero) the program should print
    on the screen how many positive and negative numbers were typed.
    */
    printf("Hello world!\n");
    int value = 0,positive = 0,negative = 0;

    do
    {
        printf("\nEnter a number: \n");
        scanf("%d",&value);

        if(value > 0)
        {
            positive++;
        }
        if(value<0)
        {
            negative++;
        }
    }
    while(value != 0);

    printf("\n+ : %d;\n- : %d \n",positive,negative);

    return 0;
}
