#include "main.h"
/**
 * _strlen_recursion - length of a string
 * @s: pointer block memory to fill
 * Return: string_recursion
 */

int _strlen_recursion(char *S)
{

/*Base condition*/
if (*S == '\0')
return (0);

else
return (1 + _strlen_recursion(S + 1)); /*sum 1*/
}
