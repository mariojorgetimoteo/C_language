#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    Write a program that reads in a restaurant expense amount, the tip amount (as a percentage),
    and the number of people to split the bill. Print the amount that each must pay. Assume that
     the account will be divided equally.
    */
    printf("\tHello Guys!\n");
    // First part
    int foodValue;
    int extra;
    int numberOfpeople;
    int expenseResult;
    printf("\tEnter the value of the food, extra and the number people,please: \n");
    scanf("%d%d%d",&foodValue,&extra,&numberOfpeople);

    // second part
    expenseResult = (foodValue+extra)/numberOfpeople;
    printf("\t------------------------------------------------------\n");
    printf("\tThe amount that each has to pay is: %d\n",expenseResult);
    printf("\t------------------------------------------------------\n");
    return 0;
}
