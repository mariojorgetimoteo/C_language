#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    A certain radioactive material loses half of its mass every 50 seconds.
    Given the initial mass, in grams, make a program that determines the time
    required for this mass to become less than 0.05 grams.
    */
    printf("Hello world!\n");

    float material, time = 0;

    printf("\nEnter the mass of the material: \n");
    scanf("%f", &material);

    while(material >= 0.05){
      material = material/2;
        time +=  50.0;
    }

    printf("\n\t\t\t%.1f seconds\n", time);


    return 0;
}
