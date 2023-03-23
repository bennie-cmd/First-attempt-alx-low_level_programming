#include <stdio.h>
#include "main.h"
/**
 *print_line - prints the line
 *Returns 0
 *@n: variable number
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <= n; i++)
{
putchar('_');
}
_putchar('\n');
}
}
