#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - Function Title
 *
 * Description: Loading...
 *
 * @a: paramter
 * @n: paramter
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int *tmp = a;
int tmp2 = 0;
int i = 0;
while (i <= (n - 1))
{
tmp++;
i++;
}
i = 0;
tmp--;
while (i <= (n / 2))
{
tmp2 = *a;
*a = *tmp;
*tmp = tmp2;
tmp--;
a++;
i++;
}
}
