#include "head.h"
/**
 * sread - reads user input
 * Return: user iput in a buffer
 */
char *sread(void)
{

	char *input;
	size_t bufsize = 0;
	int cntrd = 0;

	signal(SIGINT, sighandle);
	cntrd = getline(&input, &bufsize, stdin);

	if (cntrd == EOF)
	{
		_putchar('\n');
		free(input);
		exit(EXIT_SUCCESS);
	}

	return (input);
}
