#include <stdio.h>
#include <stdlib.h>
/**
 * jack_bauer - Islower to determine the char
 *
 * Description: Programm that prints the alphabet in lowercase.
 *
 * Return: nothing
 */

void jack_bauer(void);

/**
 * main - Start of the main fucntions
 *
 * Description: Programm that prints the alphabet in lowercase & uppercase.
 *
 * Return: nothing
 */

int main(void)
{
jack_bauer();
return (0);
}

void jack_bauer(void)
{
for (int i = 0; i <= 2; i++)
{
if (i > 2)
break;
else
{
for (int j = 0; j <= 9; j++)
{
if (i == 2 && j == 4)
break;
else
{
for (int l = 0; l < 6; l++)
{
for (int k = 0; k <= 9; k++)
{
printf("%d%d:%d%d\n", i, j, l, k);
}
}
}
}
}
}
}
