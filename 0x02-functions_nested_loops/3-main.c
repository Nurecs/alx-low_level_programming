#include "main.h"

/**
 * main - check the code.
 * Return: Always 0.
 *
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + 'o');
	r = _islower(180);
	_putchar(r + 'o');
	_putchar('\n');
	return (0);
}