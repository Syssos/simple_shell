#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _strlen - gets string length
 * @str: string to find length of
 * Return: string length
 **/
int _strlen(char *str)
{
	int s;

	while (str[s] != '\0')
		s++;
	return (s);
}
