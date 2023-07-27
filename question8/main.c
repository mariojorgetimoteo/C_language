#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Write a C program that reads 5 integers, one at a time.
        Count how many of these values ​​are negative and how many are positive.
        At the end, print on the screen the amount of negative and positive numbers.
    */
    printf("\t\t\tHello Guys\n");

    //First Part
    int v1,v2,v3,v4,v5,countPositive,counterNegative;
    printf("Choose five numbers, please");
    scanf("%d", &v1);
    scanf("%d", &v2);
    scanf("%d", &v3);
    scanf("%d", &v4);
    scanf("%d", &v5);
    counterNegative = 0;
    countPositive = 0;

    // Second part
    if(v1>0){
        countPositive++;
    }
    else if(v1<0){
        counterNegative++;
    }
     if(v2>0){
        countPositive++;
    }
    else if(v2<0){
        counterNegative++;
    }
     if(v3>0){
        countPositive++;
    }
    else if(v3<0){
        counterNegative++;
    }
     if(v4>0){
        countPositive++;
    }
    else if(v4<0){
        counterNegative++;
    }
     if(v5>0){
        countPositive++;
    }
    else if(v5<0){
        counterNegative++;
    }

    // Third  Part
    printf("+: %d, -:%d",countPositive, counterNegative);
    return 0;
}
