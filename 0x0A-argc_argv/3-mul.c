#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function Title
 *
 * Description: Loading...
 *
 * @argc: parameter
 * @argv: parameter
 *
 * Return: nothing
 */

int main(int argc, char *argv[])
{
int mul = 0;
int num_1 = atoi(argv[1]);
int num_2 = atoi(argv[2]);
if (argc > 1)
{
mul =  num_1 * num_2;
printf("%d\n", mul);
}
else
{
printf("Error");
}
return (0);
}
