#include<stdio.h>

int main()
{

    //int, float, char

    int number1 = 0;
    int number2 = 0;
    float average = 0;

    printf("Before user input:\n");
    printf("Number1 : %d | Number2 : %d\n", number1, number2);


    printf("Enter two number : ");
    scanf("%d %d", &number1, &number2);

    printf("After user input:\n");
    printf("Number1 : %d | Number2 : %d\n", number1, number2);

    average = (number1 + number2)/2;

    printf("The average value is %.3f\n", average);


    return 0;
}