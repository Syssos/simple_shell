#include "head.h"

char *SHELL_strings[] = {"cd", "help", "exit" };
int (*SHELL_functions[]) (char **) = {&shell_cd, &shell_help, &shell_exit};

int num_funcs(void)
{
	char *SHELL_strings[] = {"cd", "help", "exit"};

	return (sizeof(SHELL_strings) / sizeof(char *));
}

int shell_cd(char **args)
{
	if (args[1] == NULL)
	{
		printf("Error 3\n");
		return (EXIT_FAILURE);
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("Error 4\n");
		}
	}
	return (1);
}

int shell_help(char **args)
{
	int i;
	if (args[0] == NULL)
	{
		perror("Error 5\n");
	}
	printf("To use shell:\n");
	printf("Type program names and arguments, then hit enter.\n");
	printf("The following are built into this shell:\n");

	for (i = 0; i < num_funcs(); i++) {
		printf("  %s\n", SHELL_strings[i]);
	}
	printf("Read the man page for information.\n");
	return (1);
}

int shell_exit(char **args)
{
	if (args[0] == NULL)
	{
		perror("Error 5\n");
	}
	return (0);
}
