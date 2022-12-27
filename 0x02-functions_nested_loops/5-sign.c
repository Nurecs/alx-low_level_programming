#include "main.h"
/**
 * print_sign - print the sign of a number
 * @c: the number to be checked
 * Return: 1 for positive num, -1 negative num or zero for anything else
 */
int print_sign(int n)
{
	int test;

	if (n == 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');
	}
	return (test);
}
