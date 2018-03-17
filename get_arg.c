#include <stdio.h>
#include <string.h>
// returns array of array and takes buff
void main(void)
{
	char buff[] = "cp file1 file2";
	
	char *token = strtok(buff, " ");

	while (buff != NULL)
	{
		printf("%s\n", token);
		token = strtok(buff, " ");
	}
	//actual program returns array of strings
}
