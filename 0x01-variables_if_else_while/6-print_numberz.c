#include <stdio.h>

/**
 * main - function that prints all single digit starting
 * from 0 then a new line
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int Dig;

	for (Dig = '0'; Dig <= '9'; Dig++)
	{
		putchar(Dig);
	}
	putchar('\n');
	return (0);
}
