#include "main.h"

/**
 * print_sign - Islower to determine the char
 *
 * Description: Programm that prints the alphabet in lowercase.
 *
 * @n: paramter
 *
 * Return: nothing
 */

int print_sign(int n)
{
if (n > 1)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
