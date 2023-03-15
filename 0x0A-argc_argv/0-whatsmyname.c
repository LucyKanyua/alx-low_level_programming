#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: prints the name without having to compile it again
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	(void)argc;
	return (0);
}
