#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int j, count = 0;
	unsigned long int var;

	for (j = 63; j >= 0; j--)
	{
		var = n >> j;
		if (var & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
