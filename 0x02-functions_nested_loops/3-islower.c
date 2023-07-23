#include <stdio.h>
#include <ctype.h>
/**
 * _islower - Islower to determine the char
 *
 * Description: Programm that prints the alphabet in lowercase.
 *
 * @c: paramter
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
