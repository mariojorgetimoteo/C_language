#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Write a program that reads 10 real numbers and stores them in a vector.
     Then read an entire code and do one of the actions below:
    0 – ends the program;
    1 – prints the vector in order from beginning to end;
    2 – prints the vector in reverse order (from the end to the beginning).
    The program should run until the user enters 0 to terminate.
    */
    printf("Hello world!\n");
    float real[10];
    int below,reverse = 9;

    for(int i =0; i<10; i++)
    {
        printf("Enter the number (%d);",i+1);
        scanf("%f",&real[i]);
    }
    do
    {
        printf("\n 0  ends the program \n1   prints the vector in order from beginning to end\n  2  prints the vector in reverse order (from the end to the beginning).\n");
        scanf(" %d", &below);
        if(below != 0)
        {
            if(below == 1)
            {
                for(int i =0; i<10; i++)
                {
                    printf("vector in order (%.1f);",real[i]);

                }
            }if(below == 2){
                for(int i =0; i<10; i++)
                {
                   printf("vector in reverse order (%.1f);",real[reverse]);
                   reverse--;

                }

            }
        }
    }
    while(below != 0);
    return 0;
}
