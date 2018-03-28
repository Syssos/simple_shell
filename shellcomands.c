#include "head.h"
/**
 * num_funcs - gets size of built-ins
 * Return: size
 **/
int num_funcs(void)
{
	char *SHELL_strings[] = {"cd", "help", "exit", "env"};

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
/**
 * _help - help for user
 * @args: user input
 * Return: 1 if successful
 **/
int _help(char **args)
{
	int i;

	char *SHELL_strings[] = {"cd", "help", "exit", "env"};

	if (args[0] == NULL)
	{
		perror("Error 5\n");
	}
	printf("To use shell:\n");
	printf("Type program names and arguments, then hit enter.\n");
	printf("The following are built into this shell:\n");

	for (i = 0; i < num_funcs(); i++)
	{
		printf("  %s\n", SHELL_strings[i]);
	}
	printf("Read the man page for information.\n");
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
/**
 * _env - gets environment
 * @args: user input
 * Return: 0 on success
 **/
int _env(char **args)
{
	int i = 0;
	int j;

	while (environ[i])
	{
		j = 0;
		while (environ[i][j] !=  '\0')
		{
			_putchar(environ[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (args == NULL)
		return (0);
	exit(0);
}
