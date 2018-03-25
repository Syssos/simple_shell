#include "head.h"
/**
* sloop - a simple shell
*
*/
void sloop(void)
{
	char *line;
	char **args;
	int x;

	do{
		write(STDOUT_FILENO, "$ ", 3);
		line = sread();
		args = tok(line);
		x = execute(args);

		free(line);
		free(args);
	}while (x);
}
