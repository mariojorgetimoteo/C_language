#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*
    Write a program to calculate the transpose of a 5 x 4 matrix. Print both matrices on screen.
    */

    srand(time(NULL));

    int a[5][4];
    for(int i = 0; i<5; i++ )
    {
        for(int j = 0; j<4; j++)
        {
            a[i][j] = rand() % 100;

        }
    }
    for(int i = 0; i<5; i++ )
    {
        for(int j = 0; j<4; j++)
        {

            printf(" %d ", a[i][j]);



        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i<4; i++ )
    {
        for(int j = 0; j<5; j++)
        {

            printf(" %d ", a[j][i]);

        }
        printf("\n");
    }

    printf("Hello world!\n");
    return 0;
}
