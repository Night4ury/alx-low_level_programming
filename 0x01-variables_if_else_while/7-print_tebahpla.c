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
char Alpha = 'z';
int num = 0;
while (num <= 25)
{
putchar(Alpha - num);
num++;
}
putchar('\n');
return (0);
}
