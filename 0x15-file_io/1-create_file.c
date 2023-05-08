#include "main.h"
#include <string.h>

/**
 * create_file - create file
 * @filename: file of name
 * @text_content:text into file
 * Return:1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	len = strlen(text_content);
	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
