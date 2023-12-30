#include "stdio.h"

//check vowels or consonants

int main()
{
    //a-z (26) 5, 21
    char ch;
    printf("Enter character : ");
    scanf(" %c", &ch);

    //vowels a,e,i,o,u
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){//
        printf("the characater you provided is vowel");
    }else{
        printf("the character you provided is consonant");
    }

    return 0;
}