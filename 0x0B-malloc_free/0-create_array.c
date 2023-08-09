#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * create_array - Function Title
 *
 * Description: Loading...
 *
 * @size: paramter
 * @c: paramter
 *
 * Return: nothing
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *p = (char *)malloc(size * sizeof(c));

	if (p == NULL)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}

	for (; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
