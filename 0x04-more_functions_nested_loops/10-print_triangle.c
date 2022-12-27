#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_triangle - function that prints a triangl
 * @size: size of the triangle
 * return: triangle of '#'s
 */;wq
void print_triagle(int size)
{
int sp, ro, tr;
if (size <= 0)
{
putchar('\n');
}

else
{
for (ro = 0; ro <= (size - 1); ro++)
{
for (sp = 0; sp < (size - 1) - ro; sp++)
{
putchar(' ');
}
for (tr = 0; tr <= ro; tr++)
{
putchar('#');
}
}
}
}
