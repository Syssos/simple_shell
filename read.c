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

	getline(&input, &bufsize, stdin);
	return (input);
}
