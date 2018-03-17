#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *buff;
	size_t count = 1024;
	size_t colab;

	buff = malloc(sizeof(char) * count);
	if (buff == NULL)
		return(-1);
	printf("$ ");
	colab = getline(&buff, &count, stdin);
	if (colab == -1)
		return(0);
	printf("%zu characters were printed\nyou put:\n%s\n", colab, buff);
	free (buff);
	return(0);
}
