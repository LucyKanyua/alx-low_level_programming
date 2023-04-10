#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * error_file - checks if files can be opened
 * @from: file from
 * @to: file to
 * @argv: list of arguments
 * Return: no return
 */
void error_file(int from, int to, char *argv[])
{
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
	}
}
/**
 * main - check the code if copied successfully
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int from, to, er_close;
	ssize_t newcharv, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_TRUNC | O_APPEND, 0664);
	error_file(from, to, argv);

	newcharv = 1024;
	while (newcharv == 1024)
	{
		newcharv = read(from, buffer, 1024);
		if (newcharv == -1)
			error_file(-1, 0, argv);
		nwr = write(to, buffer, newcharv);
		if (nwr == -1)
			error_file(0, -1, argv);
	}
	er_close = close(from);
	if (er_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	er_close = close(to);
	if (er_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	return (0);
}
