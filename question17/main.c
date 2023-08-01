#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    Write a program that repeats reading a password until it is valid. For each reading
    of incorrect password entered, write the message "Invalid Password". When the password is
    correctly informed should be printed the message "Access Allowed" and the program should be
    Closed. Assume that the correct password is the value 123456.
    */
    printf("Hello world!\n");


   // First  part
   int password;

   do{
    printf("\n\t\t\tEnter the password,please: \n");
    scanf("%d", &password);

    if(password !=123456){
        printf("Invalid Password");
        }

   }while(password !=123456);

   printf("Access Allowed\n");





    return 0;
}
