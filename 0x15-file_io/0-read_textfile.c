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
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	readed = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, readd);

	free(buff);
	close(fd);
	return (readd);
}
