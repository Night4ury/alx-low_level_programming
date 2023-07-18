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
char sentence[] = "_putchar";
int i = 0;
while (sentence[i] != '\0')
{
putchar(sentence[i]);
i++;
}
putchar('\n');
return (0);
}
