#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - copies one string to another and returns pointer to copy
 * @width: string passed in from outside will be copied into newstring
 * @height: height
(* a blank line
* Description:  a function that returns a pointer to a newly allocated
* space in memory, which contains a copy of the string given as a parameter
(* section header: Section description)*
* Return: returns pointer to 2d array filled with zeroes
*/

int **alloc_grid(int width, int height)
{

  int rows;
  int cols;
  int **gridmemory;

  /*first case if width and height are 0 or negative return null*/
  if (width == 0 || height == 0)
    return(NULL);

  /*allocate memory based on the height aka rows*/
  gridmemory = malloc(height * sizeof(int));
  if (gridmemory == NULL)
    return(NULL);

  /*if rows null frees up memory*/
  for (rows = 0; rows < height; rows++)
    {
      /*checks if any of the rows are null*/
      gridmemory[rows] = malloc(width * sizeof(int));
      if (gridmemory[rows] == NULL)
	{ 
	  for (cols = 0; cols < width; cols++)
	    free(gridmemory[cols]);
	  free(gridmemory);
	  return (NULL);
	}
    }

  for (rows = 0; rows < height; rows++)
    {

      /*for loop to fill in grid space with zeroes*/
      for(cols = 0; cols < width; cols++)
	{
	  gridmemory[rows][cols] = 0;
	}
    }
    

  /*returns the pointer to the grid array filled with zeroes*/
  return (gridmemory);


}
