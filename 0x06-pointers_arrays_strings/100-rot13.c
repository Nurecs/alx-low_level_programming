#include "main.h"

/**
 * rot13 - caesers cipher
 * @str: pointer to an array of words
 *
 * Return: s
 */

char *rot13(char *str)
{
	int i j;
	char iput[80] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[80] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwsyzabcdefghijklm";

	for (i = 0; input[j] != '\0'; ++i)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
		}
	}
	return (str);
}
