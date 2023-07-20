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
for (int j = 0; j <= 10; j++)
{
for (int i = 0; i < 15; i++)
{
if (i > 9)
{
_putchar((i - i + 1) + '0');
_putchar(i % 10 + '0');
}
else
{
_putchar(i + '0');
}
}
_putchar('\n');
}
}
