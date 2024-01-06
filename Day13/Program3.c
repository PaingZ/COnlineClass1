#include "stdio.h"

int main()
{

//    char name[5] = {'a', 'b', 'c', 'd', 'e'};
//    char name[10] = "abcde";
//
//    char name_list[5][50] = {
//            {'A', 'l', 'e', 'x'},
//            {'B', 'o', 'b'},
//            {'C', 'a', 'r', 'a'},
//            {'D', 'a', 'v', 'i', 'd'},
//            {'E', 'm', 'i', 'l', 'y'}
//    };

    char name_list[5][50] = {
            "Alex",
            "Bob",
            "Cara",
            "David",
            "Emily"
    };

//    printf("%s\n", name_list[0]);

    for(int i = 0; i<5; i++){
        printf("%s\n", name_list[i]);
    }

    return 0;
}