#include"main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i, y;
	char *t;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	t = malloc(sizeof(char) * letters);

	if (t == NULL)
		return (0);

	i = read(fd, t, letters);
	if (i < 0)
	{
		free(t);
		return (0);
	}
	t[i] = '\0';
	close(fd);
	y = write(STDOUT_FILENO, t, i);

	if (y < 0)
	{
		free(t);
		return (0);
	}
	free(t);
	return (y);
}
