#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    Write a C program that works like a calculator. The program should present a menu to the user as follows:
    1 – Add
    2 – Subtract
    3 – Multiply
    4 - Divide
    0 – Exit
    A switch-like structure must be used to perform each operation in a case. After choosing the operation,
    two values ​​must be asked to the user to perform the chosen operation. If the chosen operation is 4, the dividend cannot be zero,
    a new value must be requested. The program should run until the user chooses option 0 (exit option).
    */

    printf("Hello world!\n");

    int  menu, number,number2;

    printf("\n Choose: \n 1) -> ADD \n 2) -> SUBTRACT \n 3) -> MULTIPLY \n 4) -> DIVIDE \n 0) EXITE\n");
    scanf("%d",&menu);

    switch(menu){
        case 1 : printf("\n  ADD \n Choose two number: \n ");
        scanf("%d%d", &number, &number2);
        printf("result: %d", number + number2);
        break;
        case 2 : printf("\n  SUBTRACT \n Choose two number: \n ");
        scanf("%d%d", &number, &number2);
        printf("result: %d", number - number2);
        break;
        case 3 : printf("\n  MULTIPLY \n Choose two number: \n ");
        scanf("%d%d", &number, &number2);
        printf("result: %d", number * number2);
        break;
        case 4 : do{

        printf("\n  DIVIDE \n Choose two number: \n ");
        scanf("%d%d", &number, &number2);

        }while(number2 == 0);
        printf("result: %d", number / number2);
        break;
        case 0 : printf("\n  EXITE \n ");
        break;
        default :
        printf("ERRO");
        break;



    }






    return 0;
}
