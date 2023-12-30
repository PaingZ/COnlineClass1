#include<stdio.h>

int main()
{

    int num_arr[5];

    num_arr[0] = 10;
    num_arr[1] = 50;
    num_arr[2] = 100;
    num_arr[3] = 150;
    num_arr[4] = 200;

    for(int i = 0; i<5; i++){
        printf("Index : %d | value : %d\n", i, num_arr[i]);
    }

    return 0;
}