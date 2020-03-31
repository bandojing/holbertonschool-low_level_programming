#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fontl.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"


int create_file(const char *filename, char *text_content)
{
	int file;

	if (filename == NULL)
		return (

	fd = open(filename, O_CREAT, 'rw');

	if (fd == -1)
	{
		return (-1);
	}

	
	write (fd, text_content);

	if (write (fd, text_content) == -1)
		return (-1);

	close(fd);

	return (1);

}
