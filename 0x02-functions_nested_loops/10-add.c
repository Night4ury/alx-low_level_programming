#include <stdio.h>
#include <stdlib.h>
/**
 * add - Islower to determine the char
 *
 * Description: Programm that prints the alphabet in lowercase.
 *
 * Return: nothing
 */

int add(int, int);

/**
 * main - Start of the main fucntions
 *
 * Description: Programm that prints the alphabet in lowercase & uppercase.
 *
 * Return: nothing
 */

int main(void)
{
int n;
n = add(89, 9);
printf("%d\n", n);
return (0);
}

int add(int num_1, int num_2)
{
return (num_1 + num_2);
}
