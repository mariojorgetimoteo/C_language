#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Write a program to sort an array of 100 integers. Print the vector before and after sorting.
    The presented algorithm, despite not being very efficient, is one of the simplest sorting algorithms.
    It is known as bubble sort or bubble algorithm, due to its behavior of always taking the largest element
    to the end of the vector.
    */
    printf("Hello world!\n");

    int element[100],vector,plus = 0;

    for(int i =0; i<100; i++)
    {
        element[i] = rand()%100;
    }

    for(int i =0; i<100; i++)
    {
        printf("Element: %2d\n ",element[i]);
    }



    do
    {
        plus = 0;
        for(int i = 0; i<100; i++)
        {
            if(element[i]>element[i+1])
            {
                vector = element[i];
                element[i] = element[i+1];
                element[i+1] = vector;
                plus = 1;
            }

        }
    }
    while(plus == 1);



    for(int i =0; i<100; i++)
    {
        printf(": %2d\n ",element[i]);
    }

    return 0;
}
