#include "main.h"

/**
 * _puts - prints a string, followed by new line.
 * @str: pointer to the string to print
 * return: void
 * Return: Always 0 (success)
 */
int puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
