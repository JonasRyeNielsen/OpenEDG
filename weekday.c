#include <stdio.h>

int main(void) 
{
	int dayOfWeek = 1; // generel variabel
	if (dayOfWeek == 1) // Tester om det er værdien 1 (mandag)
		puts("The day of the week is: Monday"); //bruger puts til at printe ugedag. 
	if (dayOfWeek == 2)
		puts("The day of the week is: Tuesday" );
	if (dayOfWeek == 3)
		puts("The day of the week is: Wednesday");
	if (dayOfWeek == 4)
		puts("The day of the week is: Thursday");
	if (dayOfWeek == 5)
		puts("The day of the week is: Friday");
	if (dayOfWeek == 6)
		puts("The day of the week is: Saturday");
	if (dayOfWeek == 0)
		puts("The day of the week is: Sunday");
	return 0;
}