#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - a function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: the text file being read
 * @letters: number of letters to be read
 * Return: the actual number of letters it could read and print
 * 0 if the filename is NULL,or if the file can not be opened or read,
 * if write fails or does not write the expected amount of bytes,
 * otherwise return 1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t rd;
	ssize_t wr;

	if (filename == NULL)
		return (0);

fd = open(filename, O_RDONLY);

if (fd == -1)
{
	return (0);
}
buf = malloc(sizeof(char) * letters);
rd = read(fd, buf, letters);
wr = write(STDOUT_FILENO, buf, rd);
free(buf);
close(fd);
return (wr);
}
