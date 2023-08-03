#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Write a program to read the (X,Y) coordinates of an undetermined number
    of points in the Cartesian system. For each point write the quadrant it belongs to.
    The algorithm will be terminated when at least one of the coordinates is NULL
    (in this situation without writing any message).
    Entry example:
    2 2
    3 -2
    -8 -1
    -7 1
    0 2

    Output example:
    first quadrant
    fourth quadrant
    third quadrant
    second quadrant
    */
    int point,point2,p1=0,p2=0,p3=0,p4=0;

    printf("\nHello world!\n");







    while(point !=0 || point2 != 0)
    {
        printf("\nEnter First Point:\n");
        scanf("%d",&point);
        printf("\nEnter Second Point:\n");
        scanf("%d",&point2);

        if(point >0 && point2 >0)
        {

            p1++;
        }
        else if(point >0 && point2 <0)
        {

            p4++;
        }
        else if(point <0 && point2 <0)
        {

            p3++;
        }
        else if(point <0 && point2 >0)
        {

            p2++;
        }
    }

    printf("\nFirst Quadrant. Q: %d",p1);
    printf("\nSecond Quadrant. Q: %d",p2);
    printf("\nThird Quadrant. Q: %d",p3);
    printf("\nFourth Quadrant. Q: %d",p4);

    return 0;
}
