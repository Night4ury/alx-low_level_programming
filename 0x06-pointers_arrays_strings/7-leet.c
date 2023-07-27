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
char char_array[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
char char_rearray[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
char *ptr_to_string = orig_string;
int sizeof_charArr = sizeof(char_array);
while (*orig_string != '\0')
{
int i = 0;
for (; i < sizeof_charArr ; i++)
{
if (*orig_string == char_array[i])
{
*orig_string = char_rearray[i];
}
}
orig_string++;
}
return (ptr_to_string);
}
