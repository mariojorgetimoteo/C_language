#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Write a program that fills a vector of integers of size 10 by asking the user for values.
    Then calculate and save in a second vector the square of each element of the first vector.
    Finally, print the two vectors.
    */
    printf("Hello world!\n");
    int value[10], i,value2[10];
    for(i= 0; i<10; i++)
    {
        printf("Enter the number (%d): ",i);
        scanf("%d",&value[i]);
        value2[i] = value[i] * value[i];
    }
    for(i =0; i<10; i++)
    {
        printf(" number %d",value[i]);

    }
    printf("\n");
    for(i =0; i<10; i++)
    {
        printf("\n square %d\n",value2[i]);

    }

    return 0;
}
