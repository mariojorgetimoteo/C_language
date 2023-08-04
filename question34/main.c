#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Write a program that generates the output below.
    Restrictions:
    → The “printf” instruction can be used a maximum of 2 times;
    → The \n line skip can be used a maximum of 2 times.

    *
    **
    ***
    ****
    *****
    ******
    *******
    ********
    */
    printf("Hello world!\n");

    for(int j = 1; j<=8; j++)
    {
        for(int i = 1; i<=j; i++)
        {
            printf("*");
        }
         printf("\n");
    }


    return 0;
}
