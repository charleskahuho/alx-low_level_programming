#include"main.h"
#include<stdlib.h>
#include<fcntl.h>
/**
 * read_textfile - function
 * @filename: files name
 * @letters: mode
 *
 * Return: defined
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int length, wrotechars;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buf);
		return (0);
	}
	length = read(file, buf, letters);
	if (length == -1)
	{
		free(buf);
		close(file);
		return (0);
	}

	wrotechars = write(STDOUT_FILENO, buf, length);

	free(buf);
	close(file);
	if (wrotechars != length)
		return (0);
	return (length);
}
