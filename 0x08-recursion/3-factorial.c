#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * factorial - Function Title
 *
 * Description: Loading...
 *
 * @n: paramter
 *
 * Return: nothing
 */

int factorial(int n)
{
if (n == 1)
{
return (1);
}
else if (n < 1)
{
return (-1);
}
return (n * factorial(n - 1));
}
