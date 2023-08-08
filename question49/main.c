#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*
    Write a program that prints to the screen only the values ​​below the main diagonal of a 4 x 4 matrix.
    */

    printf("Hello world!\n");
    srand(time(NULL));
    int below = 4,a[4][4];

    for(int i =0;i <below; i++){
        for(int j =0; j<below; j++){
            a[i][j] = rand() % 100;
        }
    }
    for(int i =0;i <below; i++){
        for(int j =0; j<below; j++){

            printf(" %d ", a[i][j]);

        }
        printf("\n");
    }
    printf("\n");

     for(int i =0;i <below; i++){
        for(int j =0; j<below; j++){
           if(j<i){
            printf(" %d ", a[i][j]);
           }
        }
        printf("\n");
    }

    return 0;
}
