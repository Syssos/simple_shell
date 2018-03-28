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

	do {
		if (isatty(STDIN_FILENO) == 1)
		{
			write(STDOUT_FILENO, "$ ", 3);
		}

		line = sread();
		if (line == NULL)
			return;
		args = tok(line);
		if (args == NULL)
			return;
		x = execute(args);

		free(line);
		free(args);
	} while (x);
}
