#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Prints the alphabet
 *
 * Description: Programm that prints the alphabet in lowercase.
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
int i = 1;
while (i != 10)
{

char alpha = 'a';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
putchar('\n');
i++;
}
}

/**
 * main - Start of the main fucntions
 *
 * Description: Programm that prints the alphabet in lowercase & uppercase.
 *
 * Return: nothing
 */

int main(void)
{
print_alphabet_x10();
return (0);
}
