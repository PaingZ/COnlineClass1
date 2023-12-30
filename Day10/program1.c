#include<stdio.h>

int main()
{

    //for(initialize; condition; incre/decre){}
    //1 2 3 4 5 6 7 8 9 10
    // for(int i = 5; i<=20; i++){
    //     printf("%d ", i);
    // }

    //၁၀ ၉ ၈ ၇ ၆ ၅ ၄ ၃ ၂ ၁
    // for(int i = 10; i>=1; i--){
    //     printf("%d ", i);
    // }

    // 10 to 50
    // for(int i = 10; i<=50; i++){
    //     if(i%5 != 0){
    //         printf("%d ", i);
    //     }
    // }
    //1 to 10
    // for(int i = 1; i<=10; i+=2){
    //     printf("%d ", i);
    // }

    // 10 to 1
    for(int i = 10; i>=1; i-=2){
        printf("%d ", i);
    }
    return 0;
}