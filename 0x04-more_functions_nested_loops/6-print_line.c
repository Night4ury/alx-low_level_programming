#include "main.h"
#include <stdio.h>

/**
 * print_line - Function Title
 *
 * Description: Loading...
 *
 * @n: number
 *
 * Return: nothing
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n != 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
}
