#include "stdio.h"

int main()
{

    int number1 = 0;
    int number2 = 0;
    int number3 = 0;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &number1, &number2, &number3);


    if((number1 > number2) && (number1 > number3)){
        printf("Number1 is maximum number");
    }else if((number2 > number1) && (number2 > number3)){
        printf("Number2 is maximum number");
    }else{
        printf("Number3 is maximum number");
    }
    /*
        int number1 = 0;
        int number2 = 0;
        if(number1 > number2){
            maxnumber = number1
        }else{
            maxnumber = nubmer2
        }
     **/

    return 0;
}