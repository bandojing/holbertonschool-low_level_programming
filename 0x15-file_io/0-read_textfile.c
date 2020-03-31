#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

size_t read_textfile(const char *filename, size_t letters)
{
	int c;
	File *fptr;
	size_t letters_read_print = 0;

	/*if filename is null return 0*/
	if (filename == NULL)
		return (0);

	/*if unable to open file return 0*/
      if((fptr = fopen (filename, "r"))) == NULL)
      {

	      return (0);

	      exit (1);
      }


      /*print to posix standard output*/
      if (fptr)
      {
	      while (( c = getc(fptr)) != EOF)
	      {
		 putchar (c);
		letters_read_print++;
	      }

	if ( letters_read_print != letters)
		return(0);

      /*close the file*/
      fclose(fptr);
      }

      return (letters_read_print);
}

