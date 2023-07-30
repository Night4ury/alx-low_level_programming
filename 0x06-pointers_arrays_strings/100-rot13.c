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

void *rot13(char *orig_string)
{
char *ptr_tostring = orig_string;
char uppercase_alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char lowercase_alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int size = sizeof(uppercase_alphabet) - 1;
while (*orig_string != '\0')
{
int i = 0;
for (; i < size; i++)
{
if (*orig_string == lowercase_alphabet[i])
{
*orig_string = lowercase_alphabet[(i + 13) % size];
break;
}
}
orig_string++;
}
return (ptr_tostring);
}
