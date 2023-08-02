#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * _puts_recursion - Function Title
 *
 * Description: Loading...
 *
 * @s: paramter
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
return;
}
putchar(s[0]);
_puts_recursion(s + 1);
}
