
#include "holberton.h"
/**
 * create_file - creates a file and adds text
 * @filename: name of file to open
 * @text_content: text to add to open file
 *
 * Description: adds text to an open file
 * Return: returns -1 if failure 1 if successful
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_RDWR, mode);
		/*O_CREAT | O_RDWR, 0600);*/
	}
	else
		fd = open(filename, O_TRUNC/*, 0600*/);

		if (fd == -1)
		{
			return (-1);
		}


	while (text_content)
	{
		len++;
	}

	w = write(fd, text_content, len);

	if (w == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);

}
