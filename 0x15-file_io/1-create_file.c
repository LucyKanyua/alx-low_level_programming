#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * create_file - a function that creates a file
 * @filename: a pointer to the name of the file to create
 * @text_content: - a pointer to a string to write to the file
 * Return: 1 on success, -1 on failure
 * i.e file can not be created, file can not be written, write “fails”
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
