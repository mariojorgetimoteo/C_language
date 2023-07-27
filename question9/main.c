#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Write a C program that reads a number and reports whether
    it is divisible by 2, 3, or 5, or not divisible by any of them.
    */

    printf("Hello People!\n");

    // First part
    int number;
    printf("\n\t\t\t write a number, please: \n");
    scanf("%d", &number);

    //Second part
    if(number%2 == 0 || number%5 == 0 ||number%3 == 0){
        printf("\n\t\t\t divisible by 2, 3, or 5!\n");
    }


     else{
        printf("\n\t\t\t not divisible by any of them!\n");
    }

    return 0;
}
