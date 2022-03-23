#include "main.h"

/**
 * swap_int - swaps values of two numbers
 * @a: input a
 * @b: input b
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
