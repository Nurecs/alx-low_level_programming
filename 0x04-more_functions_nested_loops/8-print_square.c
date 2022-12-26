#include "main.h"
#include <stdio.h>

/**
 * print_square - function that prints a square
 * @size: size of both widith and length
 *
 * Return: square made of '#'
 */

void print_square(int size)
{

int co, ro;
if (size <= 0)
{
putchar('\n');
}
else
{
for (co = 1; co <= size; co++)
{
putchar('#');

for (ro = 2; ro <= size; ro++)
{
putchar('#');
}
putchar('\n');
}
}
}
