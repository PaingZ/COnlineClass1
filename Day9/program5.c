#include<stdio.h>

int main()
{

    int arr_size = 0;
    printf("Enter size of array : ");
    scanf("%d", &arr_size);//5

    int num_arr[arr_size];//5
                    //5
    //i = 0; 0< 5
    for(int i=0; i<arr_size; i++){
        printf("Enter index %d array value : ", i);
        scanf("%d", &num_arr[i]);
    }

    printf("Printing all data from array \n");
    for(int i=0; i<arr_size; i++){
        printf("Index : %d | value : %d\n", i, num_arr[i]);
    }


    return 0;
}