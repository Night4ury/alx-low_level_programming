#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Function Title
 *
 * Description: Loading...
 *
 * @s: paramter
 *
 * Return: nothing
 */

void rev_string(char *s)
{
char *start = s;
while (*s != '\0')
{
s++;
}
s--;
while (start < s)
{
char temp = *start;
*start = *s;
*s = temp;
start++;
s--;
}
}
