#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Function Title
 *
 * Description: Loading...
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
for (int i = 0; i < 10; i++)
{
if (i == 2 || i == 4)
continue;
_putchar(i + '0');
}
}
