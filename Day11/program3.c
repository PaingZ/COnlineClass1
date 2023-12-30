#include<stdio.h>
#include<math.h>

int main()
{

    //operators
    //Arithmetic Operators
    //+, -, *, /, %
    
    //python
    //**
    //2**2 => 2 to the power 2
    //2**5 => 2 to the power 5

    // int base_number = 0;
    // int exponent_number = 0;
    // printf("Enter base number : ");
    // scanf("%d", &base_number);
    // printf("Enter exponent number : ");
    // scanf("%d", &exponent_number);

    // printf("%d to the power %d : %.2f\n", base_number, exponent_number, pow(base_number, exponent_number));
    
    int number = 0;
    printf("Enter a number to find its square root : ");
    scanf("%d", &number);
    
    //sqrt
    printf("Square root of %d is %f\n", number, sqrt(number));

    return 0;
}