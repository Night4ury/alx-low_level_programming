#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * print_chessboard - Function Title
 *
 * Description: Loading...
 *
 * @a: paramter
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
int i = 0, j = 0;
while (i < 8){
while (j < 8)
{
printf("%c", a[i][j]);
j++;
}
if (i == 7)
break;
printf("\n");  
i++;
j = 0;
}
}
