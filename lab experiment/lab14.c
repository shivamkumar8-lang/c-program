// C program for recognitions of special character
#include <stdio.h>
int main () {
    char c;
    printf ("Enter any character: ");
    scanf ("%c", &c);
    if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
        printf ("%c is an Alphabet.\n", c);
    else if (c >= '0' && c <= '9')
        printf ("%c is a Digit.\n", c);
    else
        printf ("%c is a Special Character.\n", c);
    return 0;

}