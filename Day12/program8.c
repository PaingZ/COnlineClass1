#include "stdio.h"

int main()
{

    char name[50];

    printf("Enter you name : ");
//    scanf(" %s", &name);

    scanf(" %[^\n]", &name);//caret

    printf("Welcome %s\n", name);
    return 0;
}