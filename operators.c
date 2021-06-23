/*************************************************
Program navn version 1.0
Author: Jonas Rye Nielsen
email: jrntar@gmail.com

Changes:
12-12-2020: 
*************************************************/

#include <stdio.h>
// Do it later!!
int main(void) 
{
	int xValue=5;
	int yValue=9;
	int result;
	int bigResult;
	
	 
	xValue += 3; //increment xValue by 3
    yValue -= xValue; //decrement yValue by xValue
    result = xValue * yValue; //multiply xValue times yValue giving result
    result += result; // increment result by result
    result--; //decrement result by 1
    yValue = result % result; // assign result modulo result to yValue
    result += xValue + result; // increment result by result added to xValue

    bigResult = result * result * result; //assign result times result times result to bigResult
    result += xValue * yValue; // increment result by xValue times yValue 
	
	printf("result: %d\n", result);
	printf("big result: %d\n", bigResult);
	return 0;
}

	
/* Solution  
#include <stdio.h>

int main(void) 
{
	int xValue = 5;
	int yValue = 9;
	int result;
	int bigResult;

	xValue += 3;
	yValue -= xValue;
	result = xValue * yValue;
	result += result;
	result--;
	yValue = result % result;
	result += xValue + result;
	bigResult= result * result * result;
	result += xValue * yValue;

	printf("result: %d\n", result);
	printf("big result: %d\n", bigResult);
	return 0;
}
*/ 
