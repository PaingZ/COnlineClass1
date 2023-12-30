#include "stdio.h"

int main()
{

    int number1 = 0;
    int number2 = 0;
    //+, -, *, /
    // 'a' '1' '+'
    char operator;
    int result = 0;

    printf("Enter number1 : ");
    scanf("%d", &number1);
    printf("Enter number2 : ");
    scanf("%d", &number2);

    printf("Enter operator(+,-,*,/) : ");
    scanf(" %c", &operator);


    //         int
    //          -
    switch (operator) {
        //case 1:
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            result = number1 / number2;
            break;
        default:
            printf("Invalid operators");
    }

    printf("The result :-> %d\n", result);

    return 0;
}