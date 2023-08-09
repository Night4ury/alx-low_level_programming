#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

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
int i = 1;
int sum = 0;
char flag = 1;
if (argc < 2)
printf("%d\n", sum);
else
{
    for(; i< argc; i++)
    {
        if (isalpha(atoi(argv[i])))
        {
            printf("flag = 0\n");
            flag = 0;
        }
        else
        {
            printf("flag = 1\n");
            sum += atoi(argv[i]);
        }
    }

    if (flag == 1)
    printf("%d\n", sum);
    else
    printf("Error\n");
}
return (0);
}
