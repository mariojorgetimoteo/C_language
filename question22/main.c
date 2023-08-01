#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Write a program that calculates the value of A, given by:
    A = 1 + 2 + 3 + 4 + … + n, where n is an integer, greater than zero entered by the user.*/
    printf("Hello world!\n");
    int value,a = 0;
    do{
        scanf("%d", &value);
    }
    while(value < 1);

   for(int i = 1; i<= value; i ++){
    a = a + i;
   }

    printf("%d",a);
    return 0;
}
