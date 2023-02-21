#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 * description - prints lowercase alphabets
 *Return: void
 */

void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		_putchar(la);
	}
	_putchar('\n');
}
