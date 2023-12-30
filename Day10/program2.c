#include<stdio.h>
//imperative language
int main()
{
    //var1
    {
        //var2
        //print var => callable
    }
    
    //print var1 => callable
    //print var2 => not callable


    // for(int i = 1; i<=5; i++){
    // // i = 1; 1<=5 => true; i++ i=2
    // // i = 2; 2<=5 => true; i++ i=3
    // // i = 3; 3<=5 => true; i++ i=4
    // // i = 4; 4<=5 => true ; i++ 5
    // // i = 5; 5<=5 => true; i++ 6
    // // i = 6; 6<=5; 
    //     printf("%d ", i);
    //     //1 2 3 4 5
    // }
    // //

    // for(int i = 0; i%2==0; i++){
    //     //i = 0; 0%2 == 0 => true; i++ i=1
    //     //i = 1; 1%2 == 0 => false
    //     printf("%d ", i);
    // }

    // for(int i = start_point; i<=end_point; i++){
    //     printf("%d ", i);
    // }

    for(int i = 10; i<=50; i++){
        // 10 to 50
        if(i%5 == 0){
            printf("%d ", i);
        }
    }

    return 0;
}