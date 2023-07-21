#include<stdio.h>

/**
 * main - Start of the main fucntions
 *
 * Description: Loading...
 *
 * Return: Zero
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 15) == 0)
printf("fizzbuzz ");
else if ((i % 3) == 0)
printf("fizz ");
else if ((i % 5) == 0)
{
if (i == 100)
{
printf("buzz");
break;
}
else
printf("buzz ");
}
else
printf("%d ", i);
}
return (0);
}
