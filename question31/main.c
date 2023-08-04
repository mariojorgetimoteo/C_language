#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    A queen requested the services of a monk and told him that she would pay any price.
    The monk, in need of food, asked the queen about the payment, if it could be made with
    wheat grains on a chessboard (which has 64 squares), in such a way that the first square
    should contain only one grain and the squares subsequent frames, twice as much as the previous frame.
    Create a program to calculate the total number of grains of wheat that the monk received.
    */
    printf("\nHello world!\n");

   long double grains = 0, total = 0;
    for(int i = 1; i<=64; i++)
    {
        if(grains == 0)
        {
            grains++;
            total++;
        }
        else
        {
            grains = grains * 2;
            total += grains;
              __mingw_printf("\n grains: %Lf\n",total);
        }


    }
   __mingw_printf("\nTotal number of grains: %Lf\n",total);

    return 0;
}
