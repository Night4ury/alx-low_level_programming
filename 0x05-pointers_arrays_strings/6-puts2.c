#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - Function Title
 *
 * Description: Loading...
 *
 * @str: paramter
 *
 * Return: nothing
 */

void puts2(char *str)
{
char *p_to_s = str;
char tmp = *p_to_s;

while ((*p_to_s != '\0') && tmp != '\0')
{
_putchar(*p_to_s);
p_to_s += 2;
}
_putchar('\n');
}
