#include "head.h"
/**
 *
 *
 *
 *
 */
int getenv(char *path)
{
	int index1, index2 = 0;
	char *result, *cmp;

	while (environ[index1])
	{
		while (path[index2]
			{
				if (path[index2] != enviorn[index1][index2])
					break;

				if (path[index2 + 1] == '\0' && environ[index1][index2 + 1] == "=")
					cmp = environ[index1];
			}
	}
		strtok(cmp, "=");
		result = strtok(NULL, "=");
		return (result);
}
