/*************************************************
Program navn version 1.0
Author: Jonas Rye Nielsen, 2021
email: jrntar@gmail.com

Changes:
02-01-2021: 
*************************************************/
#include<stdio.h>
#include<string.h>

int main(void){
   
    int i;
    float f;
    char name[15];

    strcpy(name, "Jonas");

    for (i = 0;i<5;i++)
        printf("%c", name[i]);
    
    
    //printf("");
    
    return 0;
}
