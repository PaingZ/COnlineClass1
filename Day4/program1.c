#include<stdio.h>

int main()
{

    int number1 = 50;
    int number2 = 20;
    int number3 = 30;
        //false && false -> false
        //50>20  50>30
        //true && true -> true
    if(!((number1 < number2) || (number1 < number3))){//true
        printf("the C programming");
    }else{
        printf("the C++ programming");
    }


    return 0;
}