#include "head.h"

int shell_start(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		//child
		if (execvp(args[0], args) == -1)
		{
			perror("Error");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		//Error Forking
		perror("Error 2\n");
	}
	else
	{
		//parent
		do {
			waitpid (pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);
}
