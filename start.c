#include "head.h"
/**
 * shell_start - Executes user commands
 * @args: User commands
 * Return: 1 if succesful
 **/
int shell_start(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		printf("%s", args[0]);
		if (execve(args[0], args, NULL) == -1)
		{
			perror("./hsh");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("./hsh");
	}
	else
	{
		do {
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);
}
