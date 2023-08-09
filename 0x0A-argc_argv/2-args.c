#include <stdio.h>

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

int i = 0;

int main(int argc, char *argv[])
{
    (void)argc;

    for (; i < argc; i++) 
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}

