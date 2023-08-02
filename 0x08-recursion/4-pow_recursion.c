#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * _pow_recursion - Function Title
 *
 * Description: Loading...
 *
 * @x: paramter
 * @y: paramter
 *
 * Return: nothing
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 1)
{
return (-1);
}
x *= _pow_recursion(x, y - 1);
return (x);
}
