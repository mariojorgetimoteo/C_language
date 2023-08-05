#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Write a program that reads a vector N of size 20 and prints it to the screen.
    Then swap the 1st element with the last, the 2nd with the penultimate, ... up to
    the 10th with the 11th. Print the modified N vector.
    */
    printf("Hello world!\n");

    int element[20],swap[20],k = 20 ;

    printf("\element\n");
    for(int i = 0; i <20; i++)
    {
        element[i] = rand() % 100;
        printf(" %d ",element[i]);
    }

    for(int i = 0; i<20; i++)
    {
        swap[i] = element[k];
        k--;
    }

    printf("\nswap\n");
    for(int i = 1; i<=20; i++)
    {
        printf(" %d ",swap[i]);
    }

    return 0;
}
