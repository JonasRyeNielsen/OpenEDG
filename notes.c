/*************************************************
Program navn version 1.0
Author: Jonas Rye Nielsen, 20??
email: jrntar@gmail.com

Changes:
20??-??-??: 
*************************************************/

/*
Det her er en kommentar, starter med /* og slutter med * /
eller // for enkelt linje
Kommentarer kaldes også spaces.
*/

#include<stdio.h>

int main(void){
    int n = 123; // = er assignment operator
    float f = 123.0; // float er et keyword && 0.4 kan skrive .4 og 4.0 kan skrives 4.
    int oct = 0123; // octal værdi
    int hex = 0x123; // hexadiksimal værid
    long large = 1E8; // potens værdi

    /*
    int i;
    float f;
    f = 1E10;
    i = f;
    Note: implementation dependent issue. Betyder at man ikke ved hvilket resultat man får fordi 
    int ikke kan indeholde så stort et tal. 
    */

    printf("the float number %f is the float: %f\n", f, f);
    printf("the float number %f is the integer: %d\n", f, n);
    printf("the Integer number %d is the integer: %d\n", n, n);
    printf("the Octal number 0123 is the integer: %d\n", oct);
    printf("the hexidecimal number 0x123 is the integer: %d\n", hex);
    printf("The big number 3E8 or 3x10^8 is the number: %ld\n", large);

    return 0;
}