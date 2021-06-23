/*************************************************
Program navn version 1.0
Author: Jonas Rye Nielsen, 20??
email: jrntar@gmail.com

Changes:
2021-01-05: 
*************************************************/

#include <stdio.h>
#include <string.h>

int main(void){
   
    int list[5] = {1,2,3,4,5};
    int i;   
    printf("Elements \t Address \t Value \n"); // Overskrifter
    
    for (i = 0; i<5; i++)
        printf("list[%d] \t %p \t %d \n",i, &list[i], list[i]);
    //Printer en array! NB: %p og &arr[i] skal være sammen
    
    printf("\nList \t\t %p \n", list);
    printf("\nList \t\t %d \n", *list); 
    // Dereferencing = henviser til værdien af list[] (værdien af først index)
    printf("\nList+2 \t\t %d \n", *list+2); // går 2 pladser frem i Array
    return 0;
}