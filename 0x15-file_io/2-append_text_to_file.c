#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file to open
 * @text_content: text to add to open file
(* a blank line
 * Description: appends text at the end of a file
 * Return: returns -1 if failure 1 if successful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int counter;
	/*mode_t mode = S_IRUSR | S_IWUSR;*/

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY );

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
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
