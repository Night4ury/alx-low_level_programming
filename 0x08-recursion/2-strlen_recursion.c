#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * _strlen_recursion - Function Title
 *
 * Description: Loading...
 *
 * @s: paramter
 *
 * Return: nothing
 */

int _strlen_recursion(char *s)
{
int len = 0;
if (*s == '\0')
{
    return(0);
}
len++;
return(len + _strlen_recursion(s+1));
}
