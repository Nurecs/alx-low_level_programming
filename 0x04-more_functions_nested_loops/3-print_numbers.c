#include "main.h"
#include <stdio.h>
/**
 * print_numbers - function that prints the numbers, from 0 to 9
 *
 * Return: 0-9 followed by new line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i + '0')
	{
		putcahr(i + '0');
	}
	putcahr('\n');
}
