#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    BMI (Body Mass Index) can be calculated by dividing a person's weight (in kg)
    by height (h in meters) squared (BMI= m/h²).
    Write a program that reads a person's weight and height, calculates and displays the BMI
    and the range in which the individual falls according to the table below:

          BMI Interpretation
    Less than 18.5 Underweight
    Between 18.5 and less than 25 Normal weight
    Between 25 and less than 30 Overweight
    Between 30 and less than 35 Grade 1 obesity
    Between 35 and less than 40 Grade 2 obesity
    Greater than or equal to 40 Grade 3 obesity

    */
    printf("Hello Crowd!\n");

    // First part
    float weight,height, yourBody = 0;
     printf("-----------------------------------------------------------------------------------------------------");
     printf("\n\t\t\t\t\t write your weight and height, please: \n");
     printf("-----------------------------------------------------------------------------------------------------");
     scanf("%f %f",&weight, &height);

     // Second part
     yourBody = weight/(height*height);

     if(yourBody<= 18.5 ){
        printf("\n\t\t\t\t Underweight %f",yourBody);
     }
     else if(18.5< yourBody && yourBody<= 25 ){
             printf("\n\t\t\t\t Normal weight %f",yourBody);

     }
      else if(25< yourBody && yourBody<= 30 ){
          printf("\n\t\t\t\t Overweight %f",yourBody);

     }
     else if(30< yourBody && yourBody<= 35 ){
          printf("\n\t\t\t\t Grade 1 obesity %f",yourBody);

     }
     else if(35< yourBody && yourBody<= 40 ){
          printf("\n\t\t\t\t Grade 2 obesity %f",yourBody);

     }
     else{
          printf("\n\t\t\t\t Grade 3 obesity %f",yourBody);

     }

    return 0;
}
