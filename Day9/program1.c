#include<stdio.h>

int main()
{

    //datatype
    //int, float, char
//format=> %d, %f, %c
// \n=> new line

    //array => data structure
    //collection of data
    //a = 10
    //arr = 10,20,30,40,50

   int number = 0; 
   number = 10;
   printf("Number : %d\n", number);

   float a = 0;
   a = 2.4;
   printf("a : %f\n", a);

   char ch = 'b';
   ch = 'a';
   printf("ch : %c\n", ch);

   //array declaration
    //size of array => 5
    //array work with indexing number
    //array index start from 0
             //size//0, 1, 2
   int num_arr[3] = {12,23,35};
                                //index number
   printf("num_arr index 0 : %d\n", num_arr[0]);
   printf("num_arr index 1 : %d\n", num_arr[1]);
   printf("num_arr index 2 : %d\n", num_arr[2]);

    return 0;
}