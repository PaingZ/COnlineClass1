#include<stdio.h>
#define PI 3.141593 //#define Variable_name value

//A = PI*r*r

int main()
{

    // const float PI = 3.14;//constant
    float radius = 0;//2
    float area = 0;

    radius = 10;

    printf("Enter radius : ");
    scanf("%f",&radius);

    area = PI * radius * radius;

    printf("The area of circle : %.2f\n", area);


    return 0;
}