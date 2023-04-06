#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = wildcmp("main.c", ".c");
printf("%d\n", r);
r = wildcmp("main.c", "main*.c");
printf("%d\n", r);
r = wildcmp("main.c", "main.c");
printf("%d\n", r);
r = wildcmp("main.c", "mc");
printf("%d\n", r);
r = wildcmp("main.c", "ma********************************c");
printf("%d\n", r);
r = wildcmp("main.c", "");
printf("%d\n", r);
r = wildcmp("main.c", "");
printf("%d\n", r);
r = wildcmp("main.c", "m.*c");
printf("%d\n", r);
r = wildcmp("main.c", ".c");
printf("%d\n", r);
r = wildcmp("main-main.c", "main.c");
printf("%d\n", r);
r = wildcmp("main", "maind");
printf("%d\n", r);
r = wildcmp("abc", "*b");
printf("%d\n", r);
return (0);
}
