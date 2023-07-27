#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\tHello guys!\n");

    /*
        write a C program to exchange the value of two
        integer variables without using any auxiliary
        variables.
    */

    // First part
    int valueOne;
    int valueTwo;
    printf("\nEnter two integer values,please: \n");
    scanf("%d%d",&valueOne,&valueTwo);
    printf("\nvalues Enter: %d and %d\n",valueOne,valueTwo);

    // Second part
    valueOne += valueTwo;
    valueTwo = valueOne - valueTwo;
    valueOne = valueOne - valueTwo;

    printf("\tnew value: %d and %d",valueOne,valueTwo);
    return 0;


}
