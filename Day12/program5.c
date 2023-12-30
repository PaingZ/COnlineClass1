#include "stdio.h"
#define ARR_SIZE 5

int main()
{
    //0 1 2 3 4
    int arr[ARR_SIZE];
    int result = 0;

//    printf("Enter value for index 0 :");
//    scanf("%d", &arr[0]);
//    printf("Enter value for index 1 :");
//    scanf("%d", &arr[1]);
//    printf("Enter value for index 2 :");
//    scanf("%d", &arr[2]);
//    printf("Enter value for index 3 :");
//    scanf("%d", &arr[3]);
//    printf("Enter value for index 4 :");
//    scanf("%d", &arr[4]);

    for(int i = 0; i<ARR_SIZE; i++){
        printf("Enter value for index %d :", i);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<ARR_SIZE; i++){
        printf("%d ", arr[i]);
    }

//    +=, -=, *=, /=, %=
    for(int i = 0; i<ARR_SIZE; i++){
        result += arr[i];
    }

    printf("\nthe sum of array : %d\n", result);

    return 0;
}