#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    A company hires a plumber at $45.00 a day.
    Make a program that requests the number of days worked by the plumber
    and prints the net amount that must be paid, knowing that 8% is deducted for income tax.
    */
    printf("\tHello Guys!\n");

    //First part
    int days,salary;
    printf("\tEnter the number of days worked, please:\n");
    scanf("%d",&days);

    //second part
    salary = (days * 45 * 0.92);

    //Third part
    printf("\n\tYour salary is: %d $",salary);

    return 0;
}
