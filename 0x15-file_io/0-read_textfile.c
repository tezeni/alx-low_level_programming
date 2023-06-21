#include"main.h"

/**
 * read_textfile - function to read text.
 * @filename: file to read
 * @letters: letters to find
 * Return: file readed
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readd;
	char *buf = malloc(sizeof(char *) * letters);

	if (!buf)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	readd = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, readd);

	free(buf);
	close(fd);
	return (readd);
}
