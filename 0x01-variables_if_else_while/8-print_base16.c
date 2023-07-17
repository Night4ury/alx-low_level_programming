#include <stdio.h>
/**
 * main - Start of the main fucntions
 *
 * Description: Programm that prints the alphabet in lowercase & uppercase.
 *
 * Return: nothing
 */
int main(void)
{
for (int i = 0; i < 16; i++)
{
if (i <= 9)
{
putchar(i + '0');
}
else
{
char tmp = 'a' + (i - 10);
putchar(tmp);
}
}
putchar('\n');
return (0);
}
