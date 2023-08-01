#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    Read an integer value N and output the square of each even value from 1 to N.
    */
    printf("Hello world!\n");

   int n;
   printf("\nEnter a value integer,please: \n");
   scanf("%d", &n);

   for(int i = 0; i <= n; i+=2){
    printf("%5d\n", i*i);
   }



    return 0;
}
