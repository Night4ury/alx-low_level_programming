#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Prints the alphabet
 *
 * Description: Programm that prints the alphabet in lowercase.
 *
 * Return: nothing
 */

void print_alphabet(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
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
print_alphabet();
putchar('\n');
return (0);
}
