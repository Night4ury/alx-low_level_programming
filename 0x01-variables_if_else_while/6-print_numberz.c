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
int num = 0;
while (num <= 9)
{
putchar(num + '0');
num++;
}
putchar('\n');
return (0);
}
