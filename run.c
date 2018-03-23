#include "head.h"

int execute(char **args)
{
	int i;
	char *SHELL_strings[] = {"cd", "help", "exit" };
	int (*SHELL_functions[]) (char **) = {&shell_cd, &shell_help, &shell_exit};
	
	if (args[0] == NULL)
	{
		// An empty command was entered.
		return 1;
	}

	for (i = 0; i < num_funcs(); i++)
	{
		if (strcmp(args[0], SHELL_strings[i]) == 0)
			return ((*SHELL_functions[i])(args));
	}

	return (shell_start(args));
}
