#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    For a class of 45 students, construct a program that determines:
    a) The average age of students under 1.70 m tall;
    b) The average height of students over 20 years old.

    */
    printf("Hello world!\n");

    int students = 0, age = 0;
    float height = 0, ages = 0,heights = 0;

    do
    {
        printf("\nEnter the age and height,please:\n ");
        scanf("%d%f",&age, &height);
        students++;

        if(height<1.70)
        {
            ages += age;
        }

        if(age > 20)
        {
            heights+= height;
        }


    }
    while(students<=44);

    printf("\n average age : %.2f\n", (ages/students));

    printf("\n average height : %.2f\n", ( heights/students));


    return 0;
}
