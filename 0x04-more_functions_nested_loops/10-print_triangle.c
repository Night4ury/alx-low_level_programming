#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Function Title
 *
 * Description: Loading...
 *
 * @size:number
 *
 * Return: nothing
 */

void print_triangle(int size)
{
int row, spaces, hashes;
for (row = 1; row <= size; row++)
{
for (spaces = 1; spaces <= size - row; spaces++)
putchar(' ');
for (hashes = 1; hashes <= row; hashes++)
putchar('#');
putchar('\n');
}
}
