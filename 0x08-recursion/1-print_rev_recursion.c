#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * _print_rev_recursion - Function Title
 *
 * Description: Loading...
 *
 * @s: paramter
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
_print_rev_recursion(s + 1);
putchar(s[0]);
}
