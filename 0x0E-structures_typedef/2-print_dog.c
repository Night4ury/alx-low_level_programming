#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Function Title
 *
 * Description: Loading...
 *
 * @d: paramter
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d)
	{	
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %d\n", d->owner ? d->owner : "(nil)" );
	}

}
