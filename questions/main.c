#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*
        Create an algorithm that receives,
        through the keyboard, two values, one for variable “a” and one for variable “b”.
        Then, take the steps you deem necessary so that, in the end, the variable “a”
        has the value that was initially in “b” and the variable “b” has the value that was initially in “a”.
        Translate your algorithm into the C language and display the values ​​on the screen.

     */

    // First part
    int valueA;
    int valueB;
    printf("Enter two integer values: ");
    scanf("%d%d",&valueA, &valueB);

    // Second part
    int valueC;

    // Third part
    valueC = valueA;
    valueA = valueB;
    valueB = valueC;

    // Fourth part
    printf("VALUEA = %d, and VALUEB = %d",valueA,valueB);

}
