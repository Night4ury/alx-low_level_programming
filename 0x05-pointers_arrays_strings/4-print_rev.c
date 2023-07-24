#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Function Title
 *
 * Description: Loading...
 *
 * @s: paramter
 *
 * Return: nothing
 */

void print_rev(char *s)
{
char *p_to_s = s;
while (*p_to_s != '\0')
{
*p_to_s++;
}
p_to_s--;
while (p_to_s >= s)
{
putchar(*p_to_s);
p_to_s--;
}
}
