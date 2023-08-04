#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
     Chico is 1.50 meters and grows 2 centimeters a year, while Zé is 1.10 meters
     and grows 3 centimeters a year. Build a program that calculates and prints how
     many years it will take for Zé to be bigger than Chico.
     */
    printf("Hello world!\n");
    float chico = 1.50,ze = 1.10,years = 0;
    while(ze<chico)
    {
        ze += 0.03;
        chico +=0.02;
        years++;
    }
    printf("\n Years it will take for Zé to be bigger than Chico: %.2f",years);
    return 0;
}
