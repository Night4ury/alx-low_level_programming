#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - Islower to determine the char
 *
 * Description: Programm that prints the alphabet in lowercase.
 *
 * Return: nothing
 */

void jack_bauer(void)
{
int i, j, l, k;
for (i = 0; i <= 2; i++)
{
if (i > 2)
break;
else
{
for (j = 0; j <= 9; j++)
{
if (i == 2 && j == 4)
break;
else
{
for (l = 0; l < 6; l++)
{
for (k = 0; k <= 9; k++)
{
printf("%d%d:%d%d\n", i, j, l, k);
}
}
}
}
}
}
}
