#include "head.h"
/**
 *
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
