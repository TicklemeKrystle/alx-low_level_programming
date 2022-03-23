#include "main.h"

/**
 * _strlen - function calculates length of string
 * @s: input
 *
 * Return: return length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
