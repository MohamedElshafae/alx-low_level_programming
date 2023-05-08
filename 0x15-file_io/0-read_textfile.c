#include "main.h"

/**
 * read_textfile - read all text from file
 * @filename: fileNmae
 * @letters:the count of leterrs in file
 * Return: returns the actual number of letters it could read and print
       if the file can not be opened or read, return 0
       if filename is NULL return 0
       if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t w, r;
	
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	r = read(fd, buffer, letters);
	if (r == -1)
		return (0);
	close(fd);
	w = write(STDOUT_FILENO, buffer, letters);
	if (w == -1)
		return (0);
	free(buffer);
	return(w);
}
