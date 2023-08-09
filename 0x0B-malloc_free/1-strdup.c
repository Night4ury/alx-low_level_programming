#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - Function Title
 *
 * Description: Loading...
 *
 * @str: paramter
 *
 * Return: nothing
 */

char *_strdup(char *str)
{
	int size = 0;
	int i = 0;
	char *ptr_tostr = str;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*ptr_tostr != '\0')
	{
		size++;
		ptr_tostr++;
	}

	p = (char *)malloc(size + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	for (; i < size; i++)
	{
		p[i] = str[i];
	}

	return (p);
}
