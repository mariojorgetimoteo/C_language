#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    Make a program that reads the grades for a student's two assessments. Calculate and
    Print the half-yearly average. Make the program only accept valid notes (a valid note must
    belong between the range of 0 to 10). Each note must be validated separately.
    */
    printf("Hello world!\n");

    int grades1= 0, grades2 = 0, result = 0;

    do{printf("Enter both notes: grades 1 and  grades 2 ");
        scanf("%d%d", &grades1, &grades2);
        if(grades1 < 0 || grades1 > 10 || grades2 < 0 || grades2>10){
            printf("invalid notes or note");
        }
         }
    while(grades1 < 0 || grades1 > 10 || grades2 < 0 || grades2>10 );

   result = (grades1 + grades2)/2;
   printf("%d and %d = %d",grades1, grades2,result);



    return 0;
}
