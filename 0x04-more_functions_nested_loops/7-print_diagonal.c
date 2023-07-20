#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Function Title
 *
 * Description: Loading...
 *
 * @n:number
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
if (n <= 0)
{
putchar('\n');
}
else
{
for (int i = 0; i < n; i++)
{
for (int j = 0; j < i; j++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
}
