#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * rot13 - Function Title
 *
 * Description: Loading...
 *
 * @orig_string: paramter
 *
 * Return: nothing
 */

char *rot13(char *orig_string)
{
char *ptr_tostring = orig_string;
while (*ptr_tostring != '\0')
{
char ch = *ptr_tostring;
if (('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z'))
{
if (('A' <= ch && ch <= 'M') || ('a' <= ch && ch <= 'm'))
*ptr_tostring += 13;
else
*ptr_tostring -= 13;
}
ptr_tostring++;
}
return (orig_string);
}
