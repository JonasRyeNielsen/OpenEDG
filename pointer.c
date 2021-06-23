/*************************************************
Program navn version 1.0
Author: Jonas Rye Nielsen, 20??
email: jrntar@gmail.com

Changes:
2021-01-04: 
*************************************************/

#include <stdio.h>
#include <string.h>

int main(void){
   
    int x = 5, y=4;
    int *p1;
    p1 = &x; // referer den til x

    printf("1st Pointer value: %d\n", *p1); //printer pointer værdi *p1
    printf("1st variable value: %d\n", *p1); //printer variabel værdi *p1    
    
    *p1 = 10; // sætter værdien af pointeren til 10 -> x = 10;
    
    printf("2nd Pointer value: %d\n", *p1);
    printf("2nd variable value: %d\n", *p1);
    
    *p1 = x + y;// udregner noget til pointeren 

    printf("3nd Pointer value: %d\n", *p1);
    printf("3nd variable value: %d\n", *p1);
    return 0;
}