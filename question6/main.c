#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Write a program to read a number of seconds from the keyboard and print
    the conversion to hours, minutes and seconds on the screen.
    Example:
    Entry: 3672
    Output: 1:1:12
    */
    printf("\t\t\tHello Guys!\n");

    //First part
   int seconds,minutes,hours,aux;
    printf("\t\t\t\nHow many seconds want to conversion ?");
    scanf("%d",&seconds);

    //second
    hours =seconds/3600;
    aux = seconds%3600;
    minutes = aux/60;
    seconds = aux%60;

    //Third part
    printf("hours %d, minutes %d and seconds %d",hours,minutes,seconds);
    return 0;
}
