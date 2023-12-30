#include<stdio.h>

int main()
{

    int number = 0;

    int num_arr[11] = {50,60,40,70,80,40,50,60,70,80,90};

    // printf("array at index 0 : %d\n", num_arr[0]);
    // printf("array at index 1 : %d\n", num_arr[1]);
    // printf("array at index 2 : %d\n", num_arr[2]);
    // printf("array at index 3 : %d\n", num_arr[3]);
    // printf("array at index 4 : %d\n", num_arr[4]);

    //initialize, condition, increment/decrement
    // for(int i = 0; i<100; i++){
    //     printf("%d ", i);
    // }


    //array index out of bound
    for(int i = 0; i<20; i++){
        printf("array at index %d : %d\n", i, num_arr[i]);
    }

    return 0;
}