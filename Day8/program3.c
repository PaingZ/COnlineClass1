#include "stdio.h"

int main()
{
    int total = 1;
    for(int i=1;i<=5;i++){
//        printf("%d ", i);
        total *= i;
    }
    //  +=
    //  -=
    //  *=
    //  /=
    printf("The total is %d\n", total);

        //1 * 2 * 3 * 4 * 5

    return 0;
}