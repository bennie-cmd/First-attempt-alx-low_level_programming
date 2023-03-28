#include "main"
#include <stdio.h>
/**
*int_strlen - a finction that takes a parameter char multiplies by s
*@s: a variable declared
*/

int_strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
