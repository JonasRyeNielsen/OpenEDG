/*************************************************
Program navn version 1.0
Author: Jonas Rye Nielsen, 2021
email: jrntar@gmail.com

Changes:
25-12-2020: 
*************************************************/

#include<stdio.h>

int main(void){
   
    int i,j,k;
    float x,y;
    i = 3;// 3 personer skal dele
    j = 5;// 5 (hele) æbler
    k = i%j; //så må der er være 2 æbler tilbage (resten)
    //k = 2 * 3 % 5; først * og så %
    printf("%d", k);
    printf("\n");
    
    return 0;
}
