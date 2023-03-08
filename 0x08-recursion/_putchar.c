#include "main.h"
#include <unistd.h>
/**
 *  _putchar - prints character c in stdout
 * @c: character to be printed
 * Return: 1 on success
 * -1 on fail
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
