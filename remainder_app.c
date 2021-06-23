/*************************************************
Program navn version 1.0
Author: Jonas Rye Nielsen, 2020
email: jrntar@gmail.com

Changes:
06-12-2020: 
Udregner remainder(resten) af en division
*************************************************/

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, rem;
    int a, b;

    printf("Enter 1st divisor: ");
    scanf("%d", &n1);
    printf("Enter 2nd divisor: ");
    scanf("%d", &n2);

    n3 = n1 / n2;
    printf("1st step: %d / %d is %d \n", n1, n2, n3);
    n4 = n3 * n2;
    printf("2nd step: %d * %d is %d\n", n3, n2, n4);
    rem = n1 - n4;
    printf("3th step: %d - %d is %d\n", n1, n4, rem);

    printf("So the remainder of %d and %d is: %d\n", n1, n2, rem);
    /* Test remainder:
    a = 346;
    b = 7;
    printf ("Test remainder of %d and %d is: %d\n", a, b, a%b);
    */
    return 0;
}
