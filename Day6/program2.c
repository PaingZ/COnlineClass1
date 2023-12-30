#include "stdio.h"

int c = 50; //global variable

int main(){

    //scope => variable area
    //local scope
    //global scope
    int number = 0;//global scope variable
    printf("Enter number : ");
    scanf("%d", &number);
    //even or odd
    if(number%2==0){
        //even
        int a = 10;//local scope variable
        printf("a is %d\n", a);
    }else{
        //odd
        int b = 20;//local scope variable
        printf("b is %d\n", b);
        printf("this is from local scope : %d\n", number);//global scope
    }

    printf("The number : %d\n", number);//global scope

    {
        //a = 10
        {
//            b = 20
            {
                //c = 30
                //c
                //b
                //b
            }
//            c
        }

    }

//    printf("b is %d\n", b);

    return 0;
}