#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - Function Title
 *
 * Description: Loading...
 *
 * @orig_string: paramter
 *
 * Return: nothing
 */

char  *string_toupper(char *orig_string)
{
char *ptr_to_string = orig_string;
while (*orig_string != '\0')
{
if (islower(*orig_string))
{
*orig_string = toupper(*orig_string);
}
orig_string++;
}
return (ptr_to_string);
}
