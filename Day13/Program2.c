#include "stdio.h"

int main()
{

    int test[5] = {10,20,30,40,50};

    int number[2][3] = {
            {1,2,3},
            {4,5,6}
    };

    printf("%d\n", test[3]);

    printf("%d\n", number[0][1]);

    int numbers[5][5] = {
            {1,2,3,4,5},
            {6,7,8,9,10},
            {11,12,13,14,15},
            {16,17,18,19,20},
            {21,22,23,24,25}
    };

    printf("%d\n", numbers[2][3]);

    return 0;
}