#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - Function Title
 *
 * Description: Loading...
 *
 * @dest: paramter
 * @src: paramter
 * @n : paramter
 *
 * Return: nothing
 */

char *_strncpy(char *dest, char *src, int n)
{
char *s1 = dest;
char *s2 = src;
return (strncpy(s1, s2, n));
}
