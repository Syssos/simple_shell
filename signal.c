#include "head.h"
/**
 * sighandle - Will not terminate when ^C is pressed.
 *
 */
void sighandle(int signal)
{
	(void)signal;
	write(1, "\n$ ", 3);
}
