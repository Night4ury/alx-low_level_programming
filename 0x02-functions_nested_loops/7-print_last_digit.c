#include "main.h"
#include<stdio.h>

/**
* print_last_digit - function title
*
* @num: paramter
*
* Return: void
*/

int print_last_digit(int num)
{
int last_digit;
if (num < 0)
last_digit = -(num % 10);
else
last_digit = num % 10;
_putchar(last_digit + '0');
return (last_digit);
}
