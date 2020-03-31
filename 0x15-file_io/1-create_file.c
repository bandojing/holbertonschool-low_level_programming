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
	int len = 0;


	if (filename == NULL)
		return (-1);

	/*get length of text_content*/
		while (text_content != '\0')
		{
			len++;
		}


	/*truncate flag ,*/
	fd = open(filename, O_CREAT, O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

/*where writing to, string writing to, length*/

	w = write(fd, text_content, len);

	if (w == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);

}
