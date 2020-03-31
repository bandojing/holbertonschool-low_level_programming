#include "holberton.h"
/**
 * read_textfile - reads a textfile returns number of bytes
 * @filename: the file passed into function
 * @letters: size of letters to print
 *
 * Description: function that reads and prints a file and returns
 * the number of bytes
(* section header: Section description)*
 * Return: returns the number of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t reader, writter;
	int file;
	char *size;

	if (filename == NULL)
	{
		return (0);
	}

	size = malloc(letters);

	if (size == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
		if (file == -1)
		{
			free(size);
			return (0);
		}

	reader = read(file, size, letters);
		if (reader == -1)
		{
			close(file);
			free(size);
			return (0);
		}

	writter = write(STDOUT_FILENO, size, reader);
	free(size);
	close(file);

	if (writter == reader)
		return (writter);

	return (0);
}
