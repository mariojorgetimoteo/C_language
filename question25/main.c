#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Write a program that asks the user for an integer greater than 1
    and tells whether the number entered is prime or not.
    */
    printf("Hello world!\n");

    int number;

    printf("\nEnter a integer number: \n");
    scanf("%d",&number);

    if((number%2 == 0 || number%3 == 0 ||number%5 == 0 || number&7 == 0 || number%11 == 0)){
       printf("not prime");
    }else{
        printf("prime");
    }

    return 0;
}
