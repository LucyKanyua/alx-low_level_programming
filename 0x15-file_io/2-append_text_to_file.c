#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: the string to add to the end of the file
 * Return: if the function fails or filename is NULL -1
 * otherwise return 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	fd = write(fd, text_content, strlen(text_content));
	close(fd);
	return (-1);
}
