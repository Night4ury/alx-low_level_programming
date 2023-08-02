#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * _square - Function Title
 *
 * Description: Loading...
 *
 * @n: paramter
 * @value: paramter
 *
 * Return: nothing
 */

int _square(int n, int value)
{

if (value * value == n)
return (value);
else if (value <= n/2)
return (_square(n, value + 1));
else
return (-1);
}

/**
 * _sqrt_recursion - Function Title
 *
 * Description: Loading...
 *
 * @n: paramter
 *
 * Return: nothing
 */

int _sqrt_recursion(int n)
{
return (_square(n, 1));
}
