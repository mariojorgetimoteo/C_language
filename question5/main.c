#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Create a program in C that allows you to convert the exchange rate
    between Reais and Dollars. Consider the exchange rate US$1.0 = R$5.30.
    Read a value in Reais and show the corresponding one in Dollars.

    */

    printf("Hello Guys!\n");

    //First part
    float value,result;
    printf("\n\t\t\tHow many reais do you want to convert from dollars?\n");
    scanf("%f",&value);

    // Second part
    result = value/5.3;

    // third part
    printf("\nIn Dollar: %.2f\n",result);
    return 0;
}
