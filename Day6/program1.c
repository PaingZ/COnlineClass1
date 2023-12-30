#include "stdio.h"

int main()
{

    //for loop
    /*
     * i=2
     * i++ //i=3
     * i = 10
     * i-- //9
     */
    //initialize; condition; increment/decrement
    //i = 0
    int i = 0;
    //i = 0; 0<5 => true => print
    //i = 1; 1<5 => true => print
    //i = 2; 2<5 => true => print
    //i = 3; 3<5 => true => print
//    i = 4; 4<5 => true =>print
    //i = 5; 5<5 => false
    for(i = 0; i<5; i++){
        printf("%d hello c programming\n", i);
    }
    //end of for loop

    return 0;
}