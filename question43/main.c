#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*

    Write a program that calculates and prints the sum of all elements of a 5 x 7 matrix.

    */
    printf("Hello world!\n");
    srand(time(NULL));

    int matrix[5][7], plus = 0;

    for(int j = 0; j<5;j++){
        for(int i = 0; i<7; i++){
            matrix[j][i] = rand() % 10;
        }
    }

    for(int j = 0; j<5;j++){
        for(int i = 0; i<7; i++){
            plus += matrix[j][i];
        }
    }

    for(int j = 0; j<5;j++){
        for(int i = 0; i<7; i++){
        printf(" Matrix: %d",matrix[j][i]);

        }
        printf("\n");
    }

    printf("\n total: %d \n",plus);

    return 0;
}
