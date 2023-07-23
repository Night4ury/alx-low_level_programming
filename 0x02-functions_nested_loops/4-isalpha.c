#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - Islower to determine the char
 *
 * Description: Programm that prints the alphabet in lowercase.
 *
 * @c: paramter
 *
 * Return: nothing
 */

int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
