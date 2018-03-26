#include "head.h"
/**
 * sread - reads user input
 *
 *
 */
char *sread(void)
{

	char *input;
	size_t bufsize = 0;
	int cntrd = 0;

	cntrd = getline(&input, &bufsize, stdin);

	if (cntrd == EOF)
	{
		_putchar('\n');
		free (input);
		exit(EXIT_SUCCESS);
	}
	return (input);
}
