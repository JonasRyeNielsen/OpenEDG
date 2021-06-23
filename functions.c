/*************************************************
Program navn version 1.0
Author: Jonas Rye Nielsen, 20??
email: jrntar@gmail.com

Changes:
30-01-2020: 
*************************************************/

#include <stdio.h>

int global;

void fun(void);

int main(void) 
{
    int local;
	local = 1;
    global = 1;
    printf("main: local=%d global=%d\n", local, global); // printer det første 
    fun();
    printf("main: local=%d global=%d\n", local, global);
    return 0;
}


void fun(void) { // print 1, global = 2
    int local;

    local = 2;
    global++;
    printf("fun: local=%d global=%d\n", local, global);
    global++;
	return;
}
