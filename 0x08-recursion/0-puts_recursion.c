#include "main.h"

/**
 * main - _puts_recursion
 * @s: poiter block of memory to fill
 * Return: void
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}

_putchar (*s);
_puts_recursion(s + 1);

}