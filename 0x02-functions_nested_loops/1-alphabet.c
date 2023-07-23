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
_putchar(alpha);
alpha++;
}
_putchar('\n');
}

