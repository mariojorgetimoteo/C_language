#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Write a program that asks the user for a character and says whether it is a vowel or a consonant.
    */
    printf("Hello Guys!\n");

    //First Part
    char character;

    printf("\n\t\t\tChoose a letter to find out if it's a vowel or a consonant,please: \n");
    scanf("%c",&character);

    //Second Part
    if(character == 'a' || character == 'e' ||character == 'i' ||character == 'o' ||character == 'u'||character == 'A'
       || character == 'E' ||character == 'I' ||character == 'O' ||character == 'U'){
        printf("It is vowel %c", character);
    }
    else{
        printf("It is consonant %c", character);
    }
    return 0;
}
