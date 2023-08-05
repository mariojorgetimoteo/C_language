#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    A small handicraft shop has only one salesperson and sells 10 different types of objects.
    The seller receives a salary of R$1100.00 plus 5% of the total value of his sales. The unit
    value of the objects must be informed and stored in a vector; the sold quantity of each object
    must be in another vector, but in the same position. Create a program that receives prices and
    quantities sold, storing them in their respective vectors. Then determine and show:
    a) The quantity sold, unit value and total value of each object. At the end, the total value of
    sales and the amount of commission that will be paid to the seller should be shown.
    b) The value of the most sold object and its position in the vector (in case of ties, show all tied).

    */
    printf("Hello world!\n");

    int quantities[10];
    float value[10], totalOfeach = 0,total = 0,most = 0;

    for(int i = 0; i<10; i++){
        printf("\nEnter quantities And value (%d) -> \n" ,i);
        scanf("%d%f",&quantities[i], &value[i]);
    }
    for(int i = 0; i<10; i++){
         totalOfeach = quantities[i] * value[i];
         printf("\nThe quantity sold  : %d\n unit value : %.2f\n total value of each object:%.2f" ,quantities[i],value[i],totalOfeach);
         total += totalOfeach;
    }
    printf("\ntotal: %.2f \n and commission : %.2f\n",total, total *0.05);

    for(int i =0; i<10; i++){
       if(quantities[i]> most){
        most = quantities[i];
       }

    }


    for(int i =0; i<10; i++){
       if(quantities[i]== most){
        printf("\nposition object: %d\n value: %f",i,value[i]);
       }

    }




    return 0;
}
