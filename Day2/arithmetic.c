#include<stdio.h>//standard input output header
int main()
{
    /*
    sdfasdf
    asfdsaf
    asfdas
    */

    int number1 = 0;
    int number2 = 0;

    int addition = 0;
    int subtraction = 0;
    int multiplication = 0;
    int division = 0;
    int remainder = 0;

    printf("Please enter number1 : ");
    scanf("%d", &number1);
    printf("Please enter number2 : ");
    scanf("%d", &number2);
            //operand //operator
    addition = number1 + number2;
    subtraction = number1 - number2;
    multiplication = number1 * number2;
    division = number1 / number2;
    remainder = number1 % number2;

    printf("The addition is %d\n", addition);
    printf("The subtraction is %d\n", subtraction);
    printf("The multiplication is %d\n", multiplication);
    printf("The division is %d\n", division);
    printf("The remainder is %d\n", remainder);


    return 0;
}