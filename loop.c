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
		printf("$ ");
		line = sread();
		args = tok(line);
		x = execute(args);

		free(line);
		free(args);
	}while (x);
}
