#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*
    Write a program that prints the main diagonal of a 5 x 5 matrix on the screen.
    */


    printf("Hello world!\n");

    srand(time(NULL));
    int a[5][5];

    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {

            a[i][j] = rand() % 100;

        }
        printf("\n");
    }
    printf("\n");

    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {

            printf("  %d", a[i][j]);


        }
        printf("\n");
    }
    printf("\n");

    for(int i = 0; i<5; i++)
    {

        printf("  %d", a[i][i]);
    }





    return 0;
}
