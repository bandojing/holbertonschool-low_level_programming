#include "holberton.h"
/**
 * create_file - creates a file and adds text
 * @filename: name of file to open
 * @text_content: text to add to open file
(* a blank line
 * Description: adds text to an open file
 * Return: returns -1 if failure 1 if successful
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int counter;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode)/* 0600)*/;

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		w = write(fd, "", 0);/*, text_content, 0);*/
		if (w == -1)
			return (-1);

		return (1);
	}

	for (counter = 0; text_content[counter] != '\0'; counter++)
	{
	}


	w = write(fd, text_content, counter);

	if (w == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
