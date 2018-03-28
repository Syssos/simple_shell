#include "head.h"
/**
 * sighandle - Will not terminate when ^C is pressed.
 * @signal : signal number to which a handling function is set
 */
void sighandle(int signal)
{
	(void)signal;
	write(1, "\n$ ", 3);
}
