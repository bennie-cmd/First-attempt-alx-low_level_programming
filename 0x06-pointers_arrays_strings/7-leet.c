#include "main.h"

/**
*leet - Encodes a string into 1337speak.
*@str: The string to be encoded.
*Return: A pointer to the encoded string.
*/
char *leet(char *str)
{
int i, j;
char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == letters[j])
{
str[i] = numbers[j];
break;
}
}
}
return (str);
}
