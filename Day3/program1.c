#include<stdio.h>

int main()
{

    int number = 0;

    printf("Enter a number : ");
    scanf("%d", &number);

    //1 = true, 0 = false

    // if(conditional){ //0
    //     //code block
    // }else{
    //     //code block
    // }
    //-2 , -2>0
    //even or odd,
    //number%2
    //10%2 = 0
    //9%2 = 1
    //number%2 == 0
    // if(number > 0){//false
    //     printf("The number is positive");
    // }else{
    //     printf("The number is negative");
    // }

    //0
    if(number > 0){//0>0 false
        printf("The number is positive\n");
    }else if(number < 0){//0 < 0 false
        printf("The number is negative");
    }else{
        printf("The number is zero");
    }

    return 0;
}