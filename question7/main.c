#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Write a program in C that reads three values ​​
    and displays which is the largest and which is the smallest.
    */

    // First Part
   int a,b,c,largest,smallest;
   printf("choose three whole numbers, please: ");
   scanf("%d%d%d", &a, &b, &c);
   printf("%d %d %d", a ,b ,c);

   //Second Part
   largest = a;
   smallest = a;

   if(smallest > b){
      smallest = b;
   }
   if(smallest > c){
    smallest = c;
   }
   //
   if(largest < b){
      largest = b;
   }
   if(largest < c){
    largest = c;
   }

   // Third Part
   printf("\n--------------------------------------\n");
   printf("\nM: %d, m: %d\n", largest, smallest);
   printf("\n--------------------------------------\n");


}
