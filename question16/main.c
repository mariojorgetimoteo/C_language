#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    Write a C program to read from the keyboard an integer value between 1 and 10 and display the
    Table. Example:
    Entrance 7
    Output:
    7 * 1 = 7
    7 * 2 = 14
    7 * 3 = 21
    7 * 4 = 28
    7 * 5 = 35
    7 * 6 = 42
    7 * 7 = 49
    7 * 8 = 56
    7 * 9 = 63
    7 * 10 = 70

    */

    printf("Hello world!\n");

    // First part:
    int value,result;

   do{
    printf("\n\t\t\t Enter an integer value between 1 and 10\n");
    scanf("%d", &value);
   }
    while(value <1 || value > 10);


    //Second Part:
    for(int i = 0; i<=10; i++){
        result = value * i;
        printf("\n\t\t\t %d * %d = %d;", value, i, result);
    }

 printf("\n");
return 0;


}
