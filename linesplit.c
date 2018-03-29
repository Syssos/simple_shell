#include "head.h"
/**
 * tok - tokenizes user input
 * @str: Users input
 * Return: tokanized input
**/
char **tok(char *str)
{
	int buffsize = 128;
	int count = 0;
	char **toks;
	char *token;

	toks = malloc(buffsize * sizeof(char *));
	if (toks == NULL)
	{
		exit(EXIT_FAILURE);
	}

	token = strtok(str, sDELIM);
	while (token != NULL)
	{
		toks[count] = token;
		count++;

		token = strtok(NULL, sDELIM);
	}
	/* toks[count] = '\0'; */
	return (toks);
}
