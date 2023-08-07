#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*
    Given two matrices A and B 3 x 3, write a program
    to calculate the sum of the matrices and save it
    in a matrix C. Print the three matrices.
    */
    srand(time(NULL));
    printf("Hello world!\n");
    int matrixA[3][3], matrixB[3][3], matrixC[3][3];

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            matrixA[i][j] = rand() % 100;
            matrixB[i][j] = rand() % 100;
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];

        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            printf("  %d", matrixA[i][j]);


        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            printf("  %d", matrixB[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            printf("  %d",  matrixC[i][j] );

        }
        printf("\n");
    }
    return 0;
}
