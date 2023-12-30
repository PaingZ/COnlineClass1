#include<stdio.h>//header file //standard input output header

int main() //entry point
{

    int number = 0;

    printf("The number you typed is %d\n", number);//output

    printf("Please enter a number : ");//output
    scanf("%d", &number);//input

    printf("The number you typed is %d", number);//output

    return 0;
}