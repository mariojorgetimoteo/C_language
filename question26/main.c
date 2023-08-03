#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Write a program that calculates the average salary of a company, asking the user for the number of employees and the salary of each employee.
    At the end, the program should print the average of the informed salaries, the highest salary and the lowest salary.*/
    printf("Hello world!\n");

    int employee;
    float salaries,value = 0,highest = 0,lowest = 999999999;

    do
    {
        printf("\nEnter the number of employee: \n");
        scanf("%d", &employee);
    }
    while(employee<0);

    for(int i = 1; i<= employee; i++)
    {
        printf("\nEnter the salary: \n");
        scanf("%f", &salaries);
        value += salaries;
        if(highest < salaries )
        {
            highest = salaries;
        }
        if(lowest > salaries)
        {
            lowest = salaries;
        }
    }
    printf("\n average salary of a company: %.2f \n",value/employee);
    printf("\n highest salary of a company: %.2f \n",highest);
    printf("\n lowest salary of a company: %.2f \n",lowest);

    return 0;
}
