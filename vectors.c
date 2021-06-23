/*************************************************
Program navn version 1.0
Author: Jonas Rye Nielsen, 2020
email: jrntar@gmail.com

Changes:
28-12-2020:
*************************************************/

#include<stdio.h>

int main(void){
   
    int vec [5];
    int i;
    for (i=0; i<5; i++)
    vec[i] = i;
    
    for (i=1; i<5; i++)
    printf("Index %d is %d\n", i, vec[i]);

    printf("\n----Check array------\n");
    printf("%c\n", vec[1]);

    
    return 0;
}
