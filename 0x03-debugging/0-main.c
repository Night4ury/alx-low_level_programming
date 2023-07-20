#include "main.h"

/**
 * positive_or_negative - Function Title
 *
 * Description: Loading...
 *
 * @i:number
 *
 * Return: nothing
 */

void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive.\n", i);
else if (i < 0)
printf("%d is negative.\n", i);
else
printf("The number is zero.\n");
}

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
int i;
i = 98 % 2;
positive_or_negative(i);
return (0);
}
