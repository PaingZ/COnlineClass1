#include "stdio.h"

int main()
{
    //i = 10; 10>=1
    int total = 0;
    for(int i = 20; i>=1; i--){
//        if(i%5==0){
//            printf("%d ",i);
//            //total = 0
//            //total = 20
//            //total = 35
//            //total = 45
//            total += i;//total = total + i
//            //0+20 total = 20
//            //20 + 15 total = 35
//            //35 + 10 total = 45
//            //45 + 5 total = 50
//        }
        total += i;
    }

//    printf("\nThe total of divisible by 5 : %d\n", total);

    printf("The total : %d\n", total);
    //20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1

    return 0;
}