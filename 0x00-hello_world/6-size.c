#include<stdio.h>
/**
 * main - Start of the main fucntions
 *
 * Description: Programm that Size of diffrent data types
 *
 * Return: nothing
 */
int main(void)
{
printf("Size of a char: %zu Byte(s)", sizeof(char));
printf("Size of an int: %zu Byte(s)", sizeof(int));
printf("Size of a long int: %zu Byte(s)", sizeof(long int));
printf("Size of a long long int: %zu Byte(s)", sizeof(long long int));
printf("Size of a float: %zu Byte(s)", sizeof(float));
return (0);
}
