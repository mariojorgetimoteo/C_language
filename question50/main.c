#include <stdio.h>
#include <stdlib.h>

#define tam 4
int main()
{
    /*
    Given a 4 x 4 matrix, make a program that says if it is a magic square or not.
    */

    printf("Hello world!\n");

    int l,c,total,erro=0,soma,mat[tam][tam] = {16,3,2,13,5,10,11,8,9,6,7,12,4.15,14,1};

    soma =0;
    for(l=0; l<tam; l++)
    {
        soma += mat[l][l];
    }
    printf("\n Main: %d\n",soma);
    total = soma;

    soma=0;
    for(l=0; l<tam; l++)
    {
        soma+= mat[l][tam-1-l];
    }
    printf("\n Second: %d\n",soma);

    if(total != soma)
    {
        printf("E");
        erro++;
    }


    for(l=0; l<tam; l++)
    {
         soma=0;
        for(c=0; c<tam; c++)
        {
            soma += mat[l][c];
            printf("\n: %d\n",soma);

            if(total != soma){
                 printf("E");
                  erro++;
            }

        }

    }

     for(c=0; c<tam; c++)
    {
         soma=0;
        for(l=0; l<tam; l++)
        {
            soma += mat[l][c];
            printf("\n : %d\n",soma);

            if(total != soma){
                 printf("E");
                  erro++;
            }

        }

    }


if( erro == 0){
    printf("OK");
}
else{

    printf("Erro");

}



    return 0;
}
