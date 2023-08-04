#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
      Write a program that generates the output below (10 lines, 20 * per line).
    Restrictions:
    → The “printf” instruction can be used a maximum of 2 times;
    → The \n line skip can be used a maximum of 1 time.

    ********************
    ********************
    ********************
    ********************
    ********************
    ********************
    ********************
    ********************
    ********************
    ********************
      */

    printf("Hello world!\n");

    for(int i = 1; i<=10; i++){
        printf("********************\n");
    }
    return 0;
}
