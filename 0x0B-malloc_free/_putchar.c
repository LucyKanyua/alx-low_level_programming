#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: the character
 * Return: 1 on success
 * on error -1 is reurned and errno is set appropriaely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
