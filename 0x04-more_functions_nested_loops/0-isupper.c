#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - Islower to determine the char
 *
 * Description: Loading...
 *
 * Return: nothing
 */

int _isalpha(int c)
{
    if (isdigit(c))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

/**
 * main - Start of the main fucntions
 *
 * Description: Loading...
 *
 * Return: Zero
 */

int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
