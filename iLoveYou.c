/**
 * I love you in C 
 */
#include <stdio.h>

void iLoveYou(int);

int main()
{
    iLoveYou(1);
    return 0;
}

void iLoveYou(int loveIsTrue){
    while(loveIsTrue){
        printf("I love you Angie!");
        //loveIsTrue = 0; this never end baby
    }
}
