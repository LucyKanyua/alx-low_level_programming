#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural square root
 * @n: the number to return the natural square root
 * Return:  the natural square root of n
 * if n doesnot have a natural square root --1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (find_sqrt(n, root));
}
