#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Function Title
 *
 * Description: Loading...
 *
 * Return: nothing
 */

void more_numbers(void)
{
int num, i, j;

for (j = 0; j < 10; j++)
{
for (i = 0; i < 15; i++)
{
num = i;
if (i > 9)
{
putchar(1 + '0');
num = i % 10;
}
putchar(num + '0');
}
putchar('\n');
}
}
