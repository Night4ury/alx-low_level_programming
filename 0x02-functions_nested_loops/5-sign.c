#include <stdio.h>
#include <ctype.h>
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
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
