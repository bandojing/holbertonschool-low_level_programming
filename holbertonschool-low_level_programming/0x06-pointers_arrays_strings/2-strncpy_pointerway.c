#include "holberton.h"
#include <stdio.h>





char *_strncpy(char *dest, char *src, int n)
{
        int copycounter = 0;

        for (copycounter = 0; copycounter < n && *(src + copycounter) != '\0'; copycounter++)
                *(dest + copycounter) = *(src + copycounter);

        for ( ; copycounter < n; copycounter++)
                *(dest + copycounter) = '\0';

        return (dest);
}






int copycounter = 0;

/*while the value held at destination is not null increment the address*/
while( *dest != '\0')
        dest++;

/*while *dest and *src don't contain a null byte*/
while (*dest && *src)
{
        /*add the value held at *src to the value held at *dest*/
        *dest = *src;
        /*increment the address of destination*/
        dest++;
        /*increment the address of the source*/
        src++;
}

return (dest);

