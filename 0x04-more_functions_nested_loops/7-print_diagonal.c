#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: input number
 *
 * Return: diagonal
 */

void print_diagonal(int n)
{
int co, sp;

if (n <= 0)
{
putchar('\n');
}
else
{

for (co = 1; co <= n; co++)
{

for (sp = 1; sp < co; sp++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}
}
