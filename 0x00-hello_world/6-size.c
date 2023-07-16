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
printf("Size of char: %zu Byte(s)", sizeof(char));
printf("Size of int: %zu Byte(s)", sizeof(int));
printf("Size of long int: %zu Byte(s)", sizeof(long int));
printf("Size of long long int: %zu Byte(s)", sizeof(long long int));
printf("Size of float: %zu Byte(s)", sizeof(float));
return (0);
}
