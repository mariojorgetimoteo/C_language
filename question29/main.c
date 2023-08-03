#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

     A survey was carried out among the inhabitants of a region and data on age,
     sex (M/F) and salary of X people were collected (x must be informed by the user).
     Write a program that reports:
    a) the average salary of the group;
    b) the highest and lowest age in the group;
    c) the number of women earning up to R$2000.00.

    */

    printf("Hello world!\n");

    int age,people,highest = 0,lowest = 200,numberWomen = 0;
    char sex;
    float salary,averageSalary = 0;

    printf("\nHow many People:\n");
    scanf("%d",&people);

    for(int i = 1; i<= people; i++)
    {

        printf("Enter Age of people %d:\n",i);
        scanf("%d", &age);
        printf("\nSalary of people %d:\n",i);
        scanf("%f", &salary);
        printf("\n Sex:of people %d:\n",i);
        scanf(" %c", &sex);

        averageSalary += salary;

        if(highest<age)
        {
            highest = age;
        }
        if(lowest>age)
        {
            lowest = age;
        }
        if(sex == 'F' && salary <= 2000||sex == 'f' && salary <= 2000)
        {
            numberWomen++;
        }



    }

    printf("\n the average salary of the group : %.2f \n",averageSalary/people);

    printf("\n the highest %d and lowest age : %d \n",highest,lowest);

    printf("\n the number of women earning up to R$2000.00 : %d \n",numberWomen);

    return 0;
}
