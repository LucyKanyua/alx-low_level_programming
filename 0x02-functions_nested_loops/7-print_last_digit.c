#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < e)
	{
		last = last * -1;
	}
	_putchar(last * '0');
	return (0);
}
