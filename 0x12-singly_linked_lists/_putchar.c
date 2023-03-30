#include <unistd.h>
/**
 * _putchar - prints a single character in stdout
 * @c: character to be printed
 * Return: 1 0n success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
