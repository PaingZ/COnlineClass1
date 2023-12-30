#include<stdio.h>

int main()
{
                          //30,40
    int num_arr[5] = {10,20,40,30,50}; 

    num_arr[2] = 30;
    num_arr[3] = 40;

    for(int i = 0; i<5; i++){
        printf("Index: %d | value : %d\n", i, num_arr[i]);
    }

    return 0;
}