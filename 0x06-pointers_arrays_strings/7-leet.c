#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * leet - Function Title
 *
 * Description: Loading...
 *
 * @orig_string: paramter
 *
 * Return: nothing
 */

char *leet(char *orig_string)
{
char *ptr_to_string = orig_string;
while (*orig_string != '\0')
{
if ((*orig_string == 'A') || (*orig_string == 'A'))
{
*orig_string = '4';
}
else if ((*orig_string == 'E') || (*orig_string == 'e'))
{
*orig_string = '3';
}
else if ((*orig_string == 'O') || (*orig_string == 'o'))
{
*orig_string = '0';
}
else if ((*orig_string == 'T') || (*orig_string == 't'))
{
*orig_string = '7';
}
else if ((*orig_string == 'L') || (*orig_string == 'l'))
{
*orig_string = '1';
}
orig_string++;
}
return (ptr_to_string);
}
