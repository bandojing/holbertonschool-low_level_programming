#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;

        printf("%d\n", argc);

	printf("lets see what is in  argv[]\n");

         for (i = 0; i < argc; i++)
          {
	       printf ("argv[%d] = %s\n", i, argv[argc]);
          }

        return (0);
}
