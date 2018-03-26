#include "head.h"
/**
 * num_funcs - gets size of built-ins
 * Return: size
 **/
int num_funcs(void)
{
	char *SHELL_strings[] = {"cd", "help", "exit"};

	return (sizeof(SHELL_strings) / sizeof(char *));
}
/**
 * shell_cd - changes directories
 * @args: user input
 * Return: 1 if successful
 **/
int shell_cd(char **args)
{
	if (args[1] == NULL)
	{
		write(1, "Error 3\n", 12);
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
/**
 * shell_help - help for user
 * @args: user input
 * Return: 1 if successful
 **/
int shell_help(char **args)
{
	int i;

	char *SHELL_strings[] = {"cd", "help", "exit" };

	if (args[0] == NULL)
	{
		perror("Error 5\n");
	}
	write(1, "To use shell:\n", 18);
	write(1, "Type program names and arguments, then hit enter.\n", 54);
	write(1, "The following are built into this shell:\n", 46);

	for (i = 0; i < num_funcs(); i++)
	{
		printf("  %s\n", SHELL_strings[i]);
	}
	write(1, "Read the man page for information.\n", 50);
	return (1);
}
/**
 * shell_exit - exits shell
 * @args: user input
 * Return: 0
 **/
int shell_exit(char **args)
{

	if (args[0] == NULL)
	{
		perror("Error 5\n");
	}

	return (0);
}
