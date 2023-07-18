#include <stdio.h>
#include <ctype.h>
/**
 * _islower - Islower to determine the char
 *
 * Description: Programm that prints the alphabet in lowercase.
 *
 * Return: nothing
 */

int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}

/**
 * main - Start of the main fucntions
 *
 * Description: Programm that prints the alphabet in lowercase & uppercase.
 *
 * Return: nothing
 */

int main(void)
{
int r;
r = _islower('H');
putchar(r + '0');
r = _islower('o');
putchar(r + '0');
r = _islower(108);
putchar(r + '0');
putchar('\n');
return (0);
}
