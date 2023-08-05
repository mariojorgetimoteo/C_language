#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Make a program that receives the average temperature of each c of the year,
    storing them in a vector. At the end, show the highest and lowest temperatures
    of the year and in which month they occurred (show the
    full month: January, February...). Disregard ties.
    */
    printf("Hello world!\n");

    float month[12],highest = 0,lowest = 100;
    int h,l;

    for(int i = 0; i<12; i++)
    {
        printf("\n Enter with temperature of moth (%d) \n",i+1);
        scanf("%f",&month[i]);
    }
    for(int i = 0; i<12; i++)
    {
        if(month[i]>highest)
        {
            highest = month[i];
            h = i;
        }
    }
    for(int i = 0; i<12; i++)
    {
        if(month[i]<lowest)
        {
            lowest = month[i];
            l = i;
        }
    }
    printf("\n\t\t\t");
    switch(h)
    {
    case 0:
        printf("January");
        break;
    case 1:
        printf("February");
        break;
    case 2:
        printf("March");
        break;
    case 3:
        printf("April ");
        break;
    case 4:
        printf("May ");
        break;
    case 5:
        printf("June ");
        break;
    case 6:
        printf("July");
        break;
    case 7:
        printf("August ");
        break;
    case 8:
        printf("September ");
        break;
    case 9:
        printf("October ");
        break;
    case 10:
        printf("November ");
        break;
    case 11:
        printf("December ");
        break;
    default:
        printf("ERRO");
        break;
    }
    printf("\n\t\t\t");
     switch(l)
    {
    case 0:
        printf("January");
        break;
    case 1:
        printf("February");
        break;
    case 2:
        printf("March");
        break;
    case 3:
        printf("April ");
        break;
    case 4:
        printf("May ");
        break;
    case 5:
        printf("June ");
        break;
    case 6:
        printf("July");
        break;
    case 7:
        printf("August ");
        break;
    case 8:
        printf("September ");
        break;
    case 9:
        printf("October ");
        break;
    case 10:
        printf("November ");
        break;
    case 11:
        printf("December ");
        break;
    default:
        printf("ERRO");
        break;
    }



    return 0;
}
