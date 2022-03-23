#include "main.h"

/**
 * puts_half - prints 2nd half of a string
 * @str: input
 */

void puts_half(char *str)
{
	int i, len, half;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	if (len % 2 != 0)
	{
		half = (len / 2) + 1;
	}
	else
	{
		half = (len / 2);
	}

	for (i = half; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
