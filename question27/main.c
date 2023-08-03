#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    Make a program that asks the user for two integers and presents the result
    in the multiplication between the two numbers without using the multiplication
    operation.
    */
    printf("Hello world!\n");

    int number, number2,result=0;


    printf("Enter two integers:");
    scanf("%d%d", &number, &number2);


    for(int i = 1; i<= number; i++)
    {
        result +=  number2;
    }

    printf("%d: ",result);

    return 0;
}
