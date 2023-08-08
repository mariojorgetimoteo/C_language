#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*
    Write a program that prints the secondary diagonal of a 7 x 7 matrix on the screen.
    */
    printf("Hello world!\n");

    srand(time(NULL));
    int ok=7,a[ok][ok];

    for(int i = 0; i<7; i++)
    {
        for(int j = 0; j<7; j++)
        {
            a[i][j] = rand() % 100;
        }

    }

    for(int i = 0; i<7; i++)
    {
        for(int j = 0; j<7; j++)
        {
           printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");



    for(int i = 0; i<7; i++)
    {


            printf("  %d  ",a[i][ok-1-i]);


    }

    return 0;
}
