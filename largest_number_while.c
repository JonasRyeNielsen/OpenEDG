#include <stdio.h>

int main(void)
{
	int input;
	int max = -100000; // Den øverste værdi skal sættes ellers giver den et forkert udfald.
	
	scanf("%d", &input);
 
	while (input != -1){
		
		if (input > max)
			
			 max = input; // max sættes til input. 
		
		scanf("%d", &input);
	}
	printf("The largest is %d \n", max);
	return 0; 

}
