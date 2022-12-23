#include "main.h"

/**
 * leet -  replace letters with numbers
 * @str: pointers to an array of words
 *
 * Return: s
 */

char *leet(char *str)
{
	int i, j;

	char  alpha[80] = "aAeoOtT1L";
	char numbers[80] = "43071";

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = numbers[j / 2];
			}
		}
	}
	return (str);
}
