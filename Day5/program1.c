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

    if(operator == '+'){
        printf("This is addition");
        result = number1 + number2;
        //
    } else if(operator == '-'){
        result = number1 - number2;
    } else if(operator == '*'){
        result = number1 * number2;
    }else if(operator == '/'){
        result = number1 / number2;
    }else{
        printf("Invalid operators");
    }

    printf("The result :-> %d\n", result);

    return 0;
}