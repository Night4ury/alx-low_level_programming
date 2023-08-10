#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * malloc_checked - Function Title
 *
 * Description: Loading...
 *
 * @b: paramter
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{

	int *p = (int *)malloc(b);

	if (p == NULL)
	{
		return(NULL);
		exit(98);
	}

	return (p);
}

